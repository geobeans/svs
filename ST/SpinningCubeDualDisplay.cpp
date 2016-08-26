

#include <stdio.h>           // for 'printf' & 'sprintf'
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#include <e4690/e4690_display.h>
#include <coreavi_display/coreavi_display.h>
#include <global/coreavi_globals.h>
#include <gl/gl.h>              /* GL header file */
#include <EGL/egl.h>              /* EGL header file */
//#include <EGL/eglext.h>
#include <glu/glu.h>              /* GLU header file */
#include <os_helper/os_helper.h>
#include <math.h>
#include "SpinningCubeDualDisplay.h"  // project local header
#include "myglapi.h"
#include <bit/bit.h>
#include <taskLib.h>

#include <stdio.h>
#include <sysLib.h>
#include <semLib.h>
#include <taskLib.h>
#include <ioLib.h>
#include <sioLib.h>
#include <logLib.h>
#include <math.h>
#include <msgQLib.h>
#include <msgQSmLib.h>
/***************************************************************
 Macro Definitions
***************************************************************/

#define DISPLAY_WIDTH      1024
#define DISPLAY_HEIGHT     768
#define DISPLAY_WIDTH2      1024
#define DISPLAY_HEIGHT2     768
#define DISPLAY_COLOR_DEPTH     32
#define DISPLAY_SCREEN_REFRESH  60
#define DISPLAY_SCREEN_HEAD     OUTPUT_HEAD_PRIMARY   //OUTPUT_HEAD_PRIMARY
#define DISPLAY_SCREEN_HEAD2     OUTPUT_HEAD_SECONDARY  //OUTPUT_HEAD_PRIMARY
#define DISPLAY_OUTPUT_TYPE     OUTPUT_TYPE_DVI
#define DISPLAY_OUTPUT_TYPE2     OUTPUT_TYPE_DVI
#define DISPLAY_CARD_ID 0
#define EYESEP 0.02
#define CUBEES 4

#define SYS_CLK_RATE 1000
SEM_ID Sem_GenTex1=NULL;
SEM_ID Sem_GenTex2=NULL;
extern "C"{
extern int pciBit();
}


/***************************************************************
 Global Variables
***************************************************************/
#define DISP_NUM 2

static EGLDisplay      f_dpy;               /* Native display */
static EGLDisplay      f_dpy_sz[DISP_NUM];               /* Native display */
static EGLNativeWindowType    f_win;               /* EGL Window */
static EGLNativeWindowType    f_win_sz[DISP_NUM];               /* EGL Window */
static EGLContext      f_eglContext;        /* EGL Context */
static EGLContext      f_eglContext_sz[DISP_NUM];        /* EGL Context */
static EGLConfig       f_config;            /* EGL Config */
static EGLConfig       f_config_sz[DISP_NUM];            /* EGL Config */
static EGLSurface      f_surface;           /* EGL Surface */
static EGLSurface      f_surface_sz[DISP_NUM];           /* EGL Surface */
static EGLNativeDisplayType f_disp_id;
static EGLNativeDisplayType f_disp_id_sz[DISP_NUM];
static EGLint          f_num_configs;       /* EGLConfig */
static EGLint          f_num_configs_sz[DISP_NUM];  
static EGLint          f_attribs[]         /* EGL Config */
                            = { EGL_BUFFER_SIZE, 32, EGL_DEPTH_SIZE, 24, EGL_NONE }; 


static CoreAVIDisplayMode  f_dispMode =         /* Display Mode */
    { DISPLAY_CARD_ID,
      DISPLAY_SCREEN_HEAD, 
      DISPLAY_OUTPUT_TYPE, 
      DISPLAY_WIDTH, 
      DISPLAY_HEIGHT, 
      DISPLAY_SCREEN_REFRESH,
      DISPLAY_COLOR_DEPTH, 
      FALSE, NULL, NULL };

static CoreAVIDisplayMode  f_dispMode_sz[2] =         /* Display Mode */
    {
		{ DISPLAY_CARD_ID,
   	      DISPLAY_SCREEN_HEAD, 
  	      DISPLAY_OUTPUT_TYPE, 
   	      DISPLAY_WIDTH, 
   	      DISPLAY_HEIGHT, 
   	      DISPLAY_SCREEN_REFRESH,
   	      DISPLAY_COLOR_DEPTH, 
   	      FALSE, NULL, NULL
		},
#if 0
   	    { DISPLAY_CARD_ID,
   	      DISPLAY_SCREEN_HEAD2, 
   	      DISPLAY_OUTPUT_TYPE2, 
          DISPLAY_WIDTH, 
          DISPLAY_HEIGHT, 
          DISPLAY_SCREEN_REFRESH,
          DISPLAY_COLOR_DEPTH, 
          FALSE, NULL, NULL
   	    }
#else
   	    { DISPLAY_CARD_ID,
   	      DISPLAY_SCREEN_HEAD2, 
   	      DISPLAY_OUTPUT_TYPE2, 
   	      DISPLAY_WIDTH2, 
   	      DISPLAY_HEIGHT2,  
          DISPLAY_SCREEN_REFRESH,
          DISPLAY_COLOR_DEPTH, 
          FALSE, NULL, NULL
   	    }		
#endif
    };

// Raw RGBA data for later use as a texture:
static GLubyte const altLogo[256][256][4]={
#include "altlogocutout_rgba.dat"
};
GLubyte  altLogo1[256][256][4]={1};
 GLubyte  altLogo2[256][256][4]={100};
// OpenGL Texture Identifiers:
const unsigned int cMaxContexts = 3;
GLuint g_TextureNames[ cMaxContexts ];

void RenderES(void);
static void F_InitializeWindow2(void);
static void F_InitializeWindow(void);
static void F_InitializeWindow_E(void);
static void F_Delay(void);

void dlInitGL( const unsigned int ScreenNum );
void dlRender(int ScreenNum);
void DrawVectorText(const char* string);
int InitVectorText(char* fontPath);

int setCase(int num);
// timer frequency
static double pfreq;

//*********************************************************************
//  Functions
//*********************************************************************

//*********************************************************************
//  Name:       QueryTimer
//  Created by: Jeff Duncan
//  Date:       November 20, 2002
//  Description:    Timer Function
//
//*********************************************************************
double QueryTimer()
{
    static double curtime = 0.0;
//	static double oldtime = 0.0;
//	double numSeconds;
	OSHelperTimerInfo OSCurTime;

	OsHelperGetTime(&OSCurTime);
	
	curtime = ((double)(OSCurTime.timeMicroseconds))/1000000.0f;
	
//	curtime += (PerformanceCount_HighPart*4294967296.0 + PerformanceCount_LowPart - oldtime) / pfreq;
//	oldtime = PerformanceCount_HighPart*4294967296.0 + PerformanceCount_LowPart;
    return curtime;
}

//*********************************************************************
//  Name:       DrawDisplay
//  Created by: Jeff Duncan
//  Date:       November 20, 2002
//  Description:    Main Drawing Routine
//
//*********************************************************************
void DrawDisplay(EGLDisplay dpy, EGLSurface surface, double startTimer,
                 Banner *pBanner, int ScreenNum)
{
    double finishTimer = 0;


    glClearColor(.0f, .0f, .0f, .0f );
    glClear (GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    for(int i = 0; i < 1;i++)
    {
#if 0
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	{
		glOrtho(-DISPLAY_WIDTH/2.0, 
				 DISPLAY_WIDTH/2.0, 
				-DISPLAY_HEIGHT/2.0, 
				 DISPLAY_HEIGHT/2.0, 
				 100.0, 
				-100.0);
	}
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
#else

    // Reset the modelview matrix to the identity, so our scene stays sane:
    glLoadIdentity( );

    if(ScreenNum==1){ //left eye
    	gluLookAt ( 0.0f+EYESEP/2,   0.0f,   5.0f,     // The viewer position
    	            0.0f+EYESEP/2,   0.0f,   0.0f,     // The WCS coordinates we are looking at
    	            0.0f,   1.0f,   0.0f);    // A vector identifying which way is up.
    }
    else if(ScreenNum==2){ //right eye
    	gluLookAt ( 0.0f-EYESEP/2,   0.0f,   5.0f,     // The viewer position
					0.0f-EYESEP/2,   0.0f,   0.0f,     // The WCS coordinates we are looking at
					0.0f,   1.0f,   0.0f);    // A vector identifying which way is up.	
    }
    else
    {
    	gluLookAt ( 0.0f,   0.0f,   5.0f,     // The viewer position
    						0.0f,   0.0f,   0.0f,     // The WCS coordinates we are looking at
    						0.0f,   1.0f,   0.0f);    // A vector identifying which way is up.	
    	
    }
    

#endif
    // Update the display banner information if required
    finishTimer = QueryTimer();
    // Our private function to render the current frame
    SceneRender( (finishTimer-startTimer)*5, ScreenNum );
    
    }
    BannerUpdate( pBanner, startTimer, finishTimer, ScreenNum );

    // Put the info banner on the screen:
    BannerRender( pBanner );
}
int ad1_test(int argc, char **argv )
{
	int temp;
	//temp=pciBit();
	printf("temp=%d\n",temp);
    int i;

    F_InitializeWindow();

    eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);

    InitGL( 1 );              // Our initial GL state, textures, projection, etc.

  //  InitVectorText("vfonts");
    // Timer Variables
    double startTimer = 0;

    startTimer = QueryTimer();

    // Simple animation timing variables
    unsigned long tick = 0;
    double tickStart = startTimer;

    // Banner information variables
    Banner banner1 = { {256,256 }, g_TextureNames[ 0 ], "000.0 fps", "0:00:00" };


    // We are going to continue animating until the application is explictly
    //   terminated through a keyboard break (ctl-c in Windows) or other OS
    //   signal.
    // This is not a 'nice' way to exit the application, since we require the
    //   operating system to do some clean-up for us.  In a production
    //   application, some kind of exit condition would be checked periodically,
    //   and the animation loop exited if appropriate.
    for (;;)
    {
    	eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);
        DrawDisplay(f_dpy, f_surface, startTimer, &banner1,1);
        eglSwapBuffers(f_dpy, f_surface);

    }

    // Note that, in its current state, this code is not reachable.
    //   In a production application, exit clean-up is desired.

    // Clean up could be done in a seperate function, but it is minimal.
    // Tell the driver to release the texture memory we've previously allocated:
    for( i = 0; i < cMaxContexts; i++ )
    {
        glDeleteTextures(1, &g_TextureNames[ i ]);
    }

    // Detach the rendering context from the window:

    return 0;
}

int ad2p(int argc, char **argv )
{
	
    int i;

    F_InitializeWindow();

    eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);

    InitGL( 1 );              // Our initial GL state, textures, projection, etc.

  //  InitVectorText("vfonts");
    // Timer Variables
    double startTimer = 0;

    startTimer = QueryTimer();

    // Simple animation timing variables
    unsigned long tick = 0;
    double tickStart = startTimer;

    // Banner information variables
    Banner banner1 = { {256,256 }, g_TextureNames[ 0 ], "000.0 fps", "0:00:00" };


    // We are going to continue animating until the application is explictly
    //   terminated through a keyboard break (ctl-c in Windows) or other OS
    //   signal.
    // This is not a 'nice' way to exit the application, since we require the
    //   operating system to do some clean-up for us.  In a production
    //   application, some kind of exit condition would be checked periodically,
    //   and the animation loop exited if appropriate.
    /* Power test */
    static struct carddata_bit_test_powerperf powerPerf = {0,0,0,0,0,0,0};
    bit_test powerTest = {BIT_MODULE_CARDDATA, BIT_CARDDATA_POWERPERF, &powerPerf, sizeof(powerPerf)};
    if (BIT_SUCCESS != CoreAVIRunBitTests(1, &powerTest))
    {
    printf("CARDDATA: Power pref test FAILED!\n\n");
    }
    else
    {
    printf("GPU/Mem clocks: \t%0.1f / %0.1f MHz\n", powerPerf.gpuClock / 1000000.0, powerPerf.memClock / 1000000.0);
    printf("GPU/Mem voltage:\t%5d / %d mV\n", powerPerf.gpuVoltage, powerPerf.memVoltage);
    printf("PCIE Link Speed:\t%dx Gen%d\n", powerPerf.pcieLanes, powerPerf.pcieLinkGen);
    printf("CARDDATA: Power pref test PASSED!\n\n");
    }
    
    
    
    
    for (;;)
    {
    	eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);
        DrawDisplay(f_dpy, f_surface, startTimer, &banner1,1);
        eglSwapBuffers(f_dpy, f_surface);

    }

    // Note that, in its current state, this code is not reachable.
    //   In a production application, exit clean-up is desired.

    // Clean up could be done in a seperate function, but it is minimal.
    // Tell the driver to release the texture memory we've previously allocated:
    for( i = 0; i < cMaxContexts; i++ )
    {
        glDeleteTextures(1, &g_TextureNames[ i ]);
    }

    // Detach the rendering context from the window:

    return 0;
}


int gli=0;
int GenTexpp(void)
{
	int i=1,jj=0;

	while(1)
	{
		printf("GenTex!!!\n");
		semTake(Sem_GenTex2,WAIT_FOREVER);
		// Load our textures
		   // First, we allocate an OpenGL texture name which will be used
			//   to refer to the uploaded texture:
		printf("semTake!!!\n");
		//glGenTextures( 1, &g_TextureNames[i] );
		printf("glGenTextures!!!\n");
		// Next, we bind a texture name for use in all subsequent texture
		//   operations (think 'state machine').
		glBindTexture( GL_TEXTURE_2D, g_TextureNames[i] );
		printf("glBindTexture!!!\n");
		// Set the parameters to be used with this texture:
		glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR );
		glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR );
		glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_CLAMP );
		glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_CLAMP );
		printf("glTexParameteri!!!\n");
		// Finally, specify the data to be uploaded and its format:
		if(i==1)
		{
			memset(altLogo1, jj, sizeof(altLogo1));
			glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo1 );
		}
		
		else
		{
			glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo2 );
		}
		printf("glTexImage2D!!!\n");
		semGive(Sem_GenTex2);
		gli++;
		printf("semGive!!!\n");
		
		taskDelay(10);
	}

    return 0;

}

int GenTexb(void)
{
unsigned char jj=0;
#ifdef EXT2
	eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);
#else
	eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);
#endif
	printf("task0--GenTex0!!!\n");
	while(1)
	{
		//semTake(Sem_GenTex,WAIT_FOREVER);
		if(gli==0)
		{
			gli=1;
			glBindTexture( GL_TEXTURE_2D, g_TextureNames[0] );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_CLAMP );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_CLAMP );
			glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo );
			semGive(Sem_GenTex1);
			printf("task0--GenTex1 OK!!!\n");
			taskDelay(100);
		}
		else
		{
			gli=0;
			glBindTexture( GL_TEXTURE_2D, g_TextureNames[1] );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_CLAMP );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_CLAMP );
			memset(altLogo2, jj, sizeof(altLogo2));
			glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo2 );
			semGive(Sem_GenTex2);
			printf("task0--GenTex2 OK!!!\n");
			taskDelay(100);			
			
		}
		jj=jj+25;
		
	}
		  return 0;
}

#define EXT2
void initgg()
{
#ifdef EXT2
	  F_InitializeWindow2();
	  eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);
#else
	  F_InitializeWindow();
	  eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);
#endif
       
	    
	    
	    // Note that the order in which the functions are invoked here is
	      //   generally not important, but remember to respect the fact that
	      //   OpenGL is a state machine.
	      // Enable 2D Textures, back-face culling and the depth buffer:
	      glEnable( GL_TEXTURE_2D );
	      glEnable( GL_DEPTH_TEST );
	      glEnable( GL_CULL_FACE );

	      // Ask OpenGL to interpolate colors between vertices.  GL_FLAT
	      //   is faster, but we're only doing a single cube - let's make
	      //   it look nice.
	      glShadeModel( GL_SMOOTH );

	      // Set up the blending equation, used later to give the banner
	      //   logo its transparent background:
	      glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	      glEnable(GL_BLEND);
	      
	      glEnable(GL_POINT_SMOOTH);
	      glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);

	      glEnable(GL_LINE_SMOOTH);
	      glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);

	      // Define a single diffuse light source.  The VSA100 does all its
	      //   lighting in software, so using too many lights will hurt
	      //   performance:
	      // Final '0' coordinate specifies 'inifinite' light source:
	      float lightPos[]   = { 1.0f, 1.0f, 1.0f, 0.0f };
	      // Note that the alpha lighting component is ignored.
	      float lightColor[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	      // Set the color:
	      glLightfv( GL_LIGHT0, GL_DIFFUSE, lightColor );
	      // Set the position:
	      // WARNING - in a real application, you'll want to do this after
	      //           placing the camera (per frame).  If the camera were
	      //           moving, we'd have unexpected lighting results.
	      glLightfv( GL_LIGHT0, GL_POSITION, lightPos );
	      // Turn on the light - note that the light is enabled, but
	      //   OpenGL's lighting is not.  Until we enable lighting, this
	      //   light will have no effect on the rendered scene.
	      glEnable( GL_LIGHT0 );
	      // Enable lighting:
	      glEnable( GL_LIGHTING );

	      // Allow the material color to be defined by the vertex color
	      glColorMaterial( GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE );
	      glEnable( GL_COLOR_MATERIAL );

	      // Set default viewing projection
	      // First, we must specify that we wish to modify the projection
	      //   matrix.  By default, operations modify the modelview matrix.
	      //   By specifying seperate projection and modelview matrices,
	      //   we only need to specify the modelview transformations on a
	      //   per-frame basis.  The seperation can also allow the
	      //   video driver to optimize for certain matrix cases.
	      glMatrixMode(GL_PROJECTION);
	      glLoadIdentity();   // Never assume the matrix is sane by default.

	      // Specify a perspective transformation.  Details on this function
	      //   and its behavior can be found in the OpenGL Reference Manual:
	          gluPerspective(90.0f, (float)DISPLAY_WIDTH/((float)DISPLAY_HEIGHT), 1, 100);

	      // Return to the modelview matrix, since that is what we wish
	      //   to modify in order to place objects in the scene.
	      glMatrixMode(GL_MODELVIEW);
	      // ...And clear it to the identity so we have an explictly
	      //   defined state:
	      glLoadIdentity();
}
void DrawTex2(void)
{
	
	   // Timer Variables
	    double startTimer = 0;
	    int i=0;
	    startTimer = QueryTimer();

	    // Simple animation timing variables
	    unsigned long tick = 0;
	    double tickStart = startTimer;
	    
		Banner banner2 = { {256,256 }, g_TextureNames[ 1 ], "000.0 fps", "0:00:00" };
		printf("Banner2!!!\n");
	    for (;;)
	      {
	    	semTake(Sem_GenTex2,WAIT_FOREVER);
#ifdef EXT2
		    eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);
			DrawDisplay(f_dpy_sz[1],f_surface_sz[1], startTimer,&banner2,1);
			eglSwapBuffers(f_dpy_sz[1], f_surface_sz[1]);
			
#else
			eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);
			DrawDisplay(f_dpy, f_surface, startTimer, &banner2,1);
			eglSwapBuffers(f_dpy, f_surface);
#endif
			glDeleteTextures(1, &g_TextureNames[ 1 ]);
			printf("Banner2 OK!!!\n");
	  		taskDelay(100);
	      }    
	    return;
	
}



int GenTex1(void)
{
unsigned char jj=0;
#ifdef EXT2
	eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);
#else
	eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);
#endif
	printf("task0--GenTex0!!!\n");
	while(1)
	{
		//semTake(Sem_GenTex,WAIT_FOREVER);
		gli=0;
		if(gli==0)
		{
			//gli=1;
			glBindTexture( GL_TEXTURE_2D, g_TextureNames[0] );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_CLAMP );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_CLAMP );
			glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo );
			semGive(Sem_GenTex1);
			printf("task0--GenTex1 OK!!!\n");
			taskDelay(100);
		}
		else
		{
			//gli=0;
			glBindTexture( GL_TEXTURE_2D, g_TextureNames[1] );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_CLAMP );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_CLAMP );
			memset(altLogo2, jj, sizeof(altLogo2));
			glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo2 );
			semGive(Sem_GenTex2);
			printf("task0--GenTex2 OK!!!\n");
			taskDelay(100);			
			
		}
		jj=jj+25;
		
	}
		  return 0;
}
int GenTex2(void)
{
unsigned char jj=0;
#ifdef EXT2
	eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);
#else
	eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);
#endif
	printf("task0--GenTex0!!!\n");
	while(1)
	{
		//semTake(Sem_GenTex,WAIT_FOREVER);
		gli=1;
		if(gli==0)
		{
			//gli=1;
			glBindTexture( GL_TEXTURE_2D, g_TextureNames[0] );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_CLAMP );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_CLAMP );
			glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo );
			semGive(Sem_GenTex1);
			printf("task0--GenTex1 OK!!!\n");
			taskDelay(100);
		}
		else
		{
			//gli=0;
			glBindTexture( GL_TEXTURE_2D, g_TextureNames[1] );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_CLAMP );
			glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_CLAMP );
			memset(altLogo2, jj, sizeof(altLogo2));
			glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo2 );
			semGive(Sem_GenTex2);
			printf("task0--GenTex2 OK!!!\n");
			taskDelay(100);			
			
		}
		jj=jj+25;
		
	}
		  return 0;
}


int ad_mtask()
{

    int i=0;
    Sem_GenTex1 = semBCreate(SEM_Q_PRIORITY,SEM_EMPTY);
    Sem_GenTex2 = semBCreate(SEM_Q_PRIORITY,SEM_EMPTY);
    // Our initial GL state, textures, projection, etc. 
    initgg();  
    
    static struct carddata_bit_test_powerperf powerPerf = {0,0,0,0,0,0,0};
       bit_test powerTest = {BIT_MODULE_CARDDATA, BIT_CARDDATA_POWERPERF, &powerPerf, sizeof(powerPerf)};
      
    
    glGenTextures( 3, g_TextureNames);
    taskSpawn("GenTextu1",100,0,0x200000,(FUNCPTR)GenTex1,0,0,0,0,0,0,0,0,0,0);
    taskSpawn("GenTexture2",100,0,0x200000,(FUNCPTR)GenTex2,0,0,0,0,0,0,0,0,0,0);
    taskSpawn("DTexture2",100,0,0x200000,(FUNCPTR)DrawTex2,0,0,0,0,0,0,0,0,0,0);
	double startTimer = 0;
	startTimer = QueryTimer();
	//Simple animation timing variables
	unsigned long tick = 0;
	double tickStart = startTimer;	
	
	Banner banner1 = { {256,256 }, g_TextureNames[ 0 ], "000.0 fps", "0:00:00" };
	printf("Banner!!!\n");
	for (;;)
	  {
	   semTake(Sem_GenTex1,WAIT_FOREVER);
#ifdef EXT2
		eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);
		DrawDisplay(f_dpy_sz[1],f_surface_sz[1], startTimer,&banner1,1);
		eglSwapBuffers(f_dpy_sz[1], f_surface_sz[1]);
		
#else
		
		DrawDisplay(f_dpy, f_surface, startTimer, &banner1,1);
		eglSwapBuffers(f_dpy, f_surface);
		glDeleteTextures(1, &g_TextureNames[ 0 ]);
#endif
		glDeleteTextures(1, &g_TextureNames[ 0 ]);
		printf("Banner1 OK!!!\n");
		taskDelay(100);
		
		
		 if (BIT_SUCCESS != CoreAVIRunBitTests(1, &powerTest))
		       {
		       printf("CARDDATA: Power pref test FAILED!\n\n");
		       }
		       else
		       {
		       printf("GPU/Mem clocks: \t%0.1f / %0.1f MHz\n", powerPerf.gpuClock / 1000000.0, powerPerf.memClock / 1000000.0);
		       printf("GPU/Mem voltage:\t%5d / %d mV\n", powerPerf.gpuVoltage, powerPerf.memVoltage);
		       printf("PCIE Link Speed:\t%dx Gen%d\n", powerPerf.pcieLanes, powerPerf.pcieLinkGen);
		       printf("CARDDATA: Power pref test PASSED!\n\n");
		       }


	  }    
	    
    // Clean up could be done in a seperate function, but it is minimal.
    // Tell the driver to release the texture memory we've previously allocated:
	  for( i = 0; i < cMaxContexts; i++ )
	  {
		  glDeleteTextures(1, &g_TextureNames[ i ]);
	  }

    return 0;	
}



#if 0
int ad1_E(int argc, char **argv )
{

    int i;

    F_InitializeWindow_E();

    eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);

    InitGL( 3 );              // Our initial GL state, textures, projection, etc.

  //  InitVectorText("vfonts");
    // Timer Variables
    double startTimer = 0;

    startTimer = QueryTimer();

    // Simple animation timing variables
    unsigned long tick = 0;
    double tickStart = startTimer;

    // Banner information variables
    Banner banner3 = { {256,256 }, g_TextureNames[ 3 ], "000.0 fps", "0:00:00" };


    // We are going to continue animating until the application is explictly
    //   terminated through a keyboard break (ctl-c in Windows) or other OS
    //   signal.
    // This is not a 'nice' way to exit the application, since we require the
    //   operating system to do some clean-up for us.  In a production
    //   application, some kind of exit condition would be checked periodically,
    //   and the animation loop exited if appropriate.
    for (;;)
    {
    	eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);
        DrawDisplay(f_dpy, f_surface, startTimer, &banner3,3);
        eglSwapBuffers(f_dpy, f_surface);

    }

    // Note that, in its current state, this code is not reachable.
    //   In a production application, exit clean-up is desired.

    // Clean up could be done in a seperate function, but it is minimal.
    // Tell the driver to release the texture memory we've previously allocated:
    for( i = 0; i < cMaxContexts; i++ )
    {
        glDeleteTextures(1, &g_TextureNames[ i ]);
    }

    // Detach the rendering context from the window:

    return 0;
}
#endif
int ad1_E(int argc, char **argv )
{
    int i;

    F_InitializeWindow_E();

    eglMakeCurrent(f_dpy_sz[0], f_surface_sz[0], f_surface_sz[0], f_eglContext_sz[0]);

    InitGL( 1 );              // Our initial GL state, textures, projection, etc.

    eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);

    InitGL( 2 );  

  //  InitVectorText("vfonts");
    // Timer Variables
    double startTimer = 0;

    startTimer = QueryTimer();

    // Simple animation timing variables
    unsigned long tick = 0;
    double tickStart = startTimer;

    // Banner information variables
    //Banner banner3 = { {256,256 }, g_TextureNames[ 3 ], "000.0 fps", "0:00:00" };
    // Banner information variables
    Banner banner1 = { {256,256 }, g_TextureNames[ 0 ], "000.0 fps", "0:00:00" };
    Banner banner2 = { {256,256 }, g_TextureNames[ 1 ], "000.0 fps", "0:00:00" };

    // We are going to continue animating until the application is explictly
    //   terminated through a keyboard break (ctl-c in Windows) or other OS
    //   signal.
    // This is not a 'nice' way to exit the application, since we require the
    //   operating system to do some clean-up for us.  In a production
    //   application, some kind of exit condition would be checked periodically,
    //   and the animation loop exited if appropriate.
    for (;;)
    {
        eglMakeCurrent(f_dpy_sz[0], f_surface_sz[0], f_surface_sz[0], f_eglContext_sz[0]);
        DrawDisplay(f_dpy_sz[0], f_surface_sz[0], startTimer, &banner1,1);
        eglSwapBuffers(f_dpy_sz[0], f_surface_sz[0]);
        
        eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);
        DrawDisplay(f_dpy_sz[1],f_surface_sz[1], startTimer,&banner2,2);
        eglSwapBuffers(f_dpy_sz[1], f_surface_sz[1]);

    }

    // Note that, in its current state, this code is not reachable.
    //   In a production application, exit clean-up is desired.

    // Clean up could be done in a seperate function, but it is minimal.
    // Tell the driver to release the texture memory we've previously allocated:
    for( i = 0; i < cMaxContexts; i++ )
    {
        glDeleteTextures(1, &g_TextureNames[ i ]);
    }

    // Detach the rendering context from the window:

    return 0;
}


#define DUAL_DISPLAY
int initFrame(void)
{
    EGLBoolean errorStatus = EGL_TRUE;
    
	struct E4690ExtendedDisplayInfo  GPUSpecificInfo1;

    CoreAVIDriverInitInfo initInfo;
 	struct E4690DriverInitInfo   chipInfo;
 	
// 	setCase(testCaseNum);

 	memset(&chipInfo, 0x00, sizeof(chipInfo));
 	memset(&initInfo, 0x00, sizeof(initInfo));
 	chipInfo.gpuClockMHz = 300;
 	chipInfo.memClockMHz = 450;
 	chipInfo.gpuVoltage  = 1000;
 	chipInfo.memVoltage  = 1500;
 	chipInfo.pcieLanes   = 4;
 	chipInfo.pcieGen     = 1;
 	chipInfo.fcram.enable = 0;
 	chipInfo.selfUpdatingTextureHeapSize = 0;
 	chipInfo.gartMiscHeapSize   = 0;
     
 	initInfo.cardId = 0;
 	initInfo.chipInitInfo = &chipInfo;
 
	memset(&GPUSpecificInfo1, 0x00, sizeof(GPUSpecificInfo1));
    GPUSpecificInfo1.frameBufHeapSize = 0;
    GPUSpecificInfo1.fcvm.enable = FALSE;
    GPUSpecificInfo1.hSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.vSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.rotation = 0;
    GPUSpecificInfo1.syncWithOtherHead = TRUE;
//    f_dispMode_sz[0].extendedGPUSpecificInfo  = (void *)(&GPUSpecificInfo1);
//    f_dispMode_sz[1].extendedGPUSpecificInfo  = (void *)(&GPUSpecificInfo1);

    /* Open Native Display */
        /* EGL Open Display */
    if (COREAVI_ERROR_SUCCESS != CoreAVIInitializeDriver( &initInfo ))
    {
        errorStatus = EGL_FALSE;
    }
    
    if(EGL_TRUE == errorStatus)
    {
    	if(COREAVI_ERROR_SUCCESS != CoreAVIOpenDisplay(&f_dispMode_sz[0], &f_disp_id_sz[0]))
    	{
    		errorStatus = EGL_FALSE;
    	}
    }

    /* Obtain an EGL Display */
    if (EGL_TRUE == errorStatus)
    {
        f_dpy_sz[0] = eglGetDisplay(f_disp_id_sz[0]);        /* EGL Get Display */

        /* Check if error occurred */
        if (EGL_NO_DISPLAY == f_dpy_sz[0])
        {
            errorStatus = EGL_FALSE;
        }
    }

    /* Initialize EGL */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglInitialize (f_dpy_sz[0], 0, 0);        /* EGL Initialize */ 
    }

    /* Obtain the first configuration with a buffer size of 32 bits */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglChooseConfig(f_dpy_sz[0], f_attribs, &f_config_sz[0], 1, &f_num_configs_sz[0]); /* EGL Choose Config */
    }
    
    /* Create a Native Window */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = CoreAVICreateWindow(f_dpy_sz[0], 0, 0, 0, DISPLAY_WIDTH, DISPLAY_HEIGHT, &f_win_sz[0]);        /* EGL Create Window */
        errorStatus = (COREAVI_ERROR_SUCCESS == errorStatus) ? EGL_TRUE : EGL_FALSE;
    }

    /* Create an EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
        f_surface_sz[0] = eglCreateWindowSurface(f_dpy_sz[0], f_config_sz[0], f_win_sz[0], NULL);        /* EGL Create Window Surface */

        if ((EGL_NO_SURFACE == f_surface_sz[0]))
        {
        	errorStatus = EGL_FALSE;
        }
    }

    /* Map the EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
        //errorStatus = eglMapWindowCoreAVI(f_dpy, f_surface);
    }

    /* Create an EGL Context */
    EGLint ctxAttribs[5]= {COREAVI_HW_DISPLAY_LIST_HEAP_SIZE, 0x4000000, COREAVI_HW_TEXTURE_HEAP_SIZE, 0x8000000, EGL_NONE}; 
    //EGLint ctxAttribs[3]= {COREAVI_HW_DISPLAY_LIST_HEAP_SIZE, 0x4000000, EGL_NONE};
    if (EGL_TRUE == errorStatus)
    {
    	 	
//    	EGLint ctxAttribs[3]= {COREAVI_HW_DISPLAY_LIST_HEAP_SIZE, 0x4000000, EGL_NONE};
        f_eglContext_sz[0] = eglCreateContext(f_dpy_sz[0], f_config_sz[0], EGL_NO_CONTEXT, ctxAttribs);        /* EGL Create Context */
    
        if ((EGL_NO_CONTEXT == f_eglContext_sz[0]))
        {
        	errorStatus = EGL_FALSE;
        }
    }

    if (EGL_TRUE == errorStatus)
    {
    	
        errorStatus = eglMakeCurrent(f_dpy_sz[0], f_surface_sz[0], f_surface_sz[0], f_eglContext_sz[0]);        /* EGL Make Current */
        /* Setting swap interval to 0 will rely on hsync */
#ifdef PERF_BENCH
        eglSwapInterval(f_dpy_sz[0], 0);
#else
        eglSwapInterval(f_dpy_sz[0], 1);
#endif
        
    }
    
    /* 初始化context0 的Opengl环境及纹理 */
 //   initOpenGLContext(0);
#ifdef DRAW_3D_MAP
    InitFlight3DEngine();
#endif
 
#ifdef DUAL_DISPLAY 
    f_dispMode_sz[1].extendedGPUSpecificInfo  = (void *)(&GPUSpecificInfo1);

    if (COREAVI_ERROR_SUCCESS != CoreAVIOpenDisplay(&f_dispMode_sz[1], &f_disp_id_sz[1]))
    {
        errorStatus = EGL_FALSE;
    }

    /* Obtain an EGL Display */
    if (EGL_TRUE == errorStatus)
    {
       f_dpy_sz[1] = eglGetDisplay(f_disp_id_sz[1]);

        /* Check if error occurred */
        if (EGL_NO_DISPLAY == f_dpy_sz[1])
        {
            errorStatus = EGL_FALSE;
        }
    }

    /* Initialize EGL */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglInitialize (f_dpy_sz[1], 0, 0);  
    }

    /* Obtain the first configuration with a buffer size of 32 bits */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglChooseConfig(f_dpy_sz[1], f_attribs, &f_config_sz[1], 1, &f_num_configs_sz[1]); /* EGL Choose Config */
    }
    
    /* Create a Native Window */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = CoreAVICreateWindow(f_dpy_sz[1], 0, 0, 0, DISPLAY_WIDTH2, DISPLAY_HEIGHT2, &f_win_sz[1]);
        errorStatus = (COREAVI_ERROR_SUCCESS == errorStatus) ? EGL_TRUE : EGL_FALSE;
    }

    /* Create an EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
		f_surface_sz[1] = eglCreateWindowSurface(f_dpy_sz[1], f_config_sz[1], f_win_sz[1], NULL);

        if (EGL_NO_SURFACE == f_surface_sz[1])
        {
        	errorStatus = EGL_FALSE;
        }
    }

    /* Map the EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
        //errorStatus = eglMapWindowCoreAVI(f_dpy, f_surface);
    }
    
    
    /* Create an EGL Context */
    if (EGL_TRUE == errorStatus)
    {
    	EGLint attribs[3] = {COREAVI_SHARE_ONLY_TEXTURES, TRUE, EGL_NONE};
        //f_eglContext_sz[1] = eglCreateContext(f_dpy_sz[1], f_config_sz[1], EGL_NO_CONTEXT, NULL);
        //f_eglContext_sz[1] = eglCreateContext(f_dpy_sz[1], f_config_sz[1], EGL_NO_CONTEXT, ctxAttribs);
        f_eglContext_sz[1] = eglCreateContext(f_dpy_sz[1], f_config_sz[1], f_eglContext_sz[0], ctxAttribs);
        //f_eglContext_sz[1] = eglCreateContext(f_dpy_sz[1], f_config_sz[1], f_eglContext_sz[0], attribs);
       
  
        if (EGL_NO_CONTEXT == f_eglContext_sz[1])
        {
        	printf("%d %s\n", __LINE__, __FILE__);
        	errorStatus = EGL_FALSE;
        }
    }

    if (EGL_TRUE == errorStatus)
    {
		errorStatus = eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);        /* EGL Make Current */
        /* Setting swap interval to 0 will rely on hsync */
#ifdef PERF_BENCH
        eglSwapInterval(f_dpy_sz[1], 0);
#else
        eglSwapInterval(f_dpy_sz[1], 1);
#endif
    }
    
     /* 初始化context1 的Opengl环境及纹理 */
 //   initOpenGLContext(1);
    
#endif



    
    return 0;
}
//*********************************************************************
//  Name:       main
//  Created by: Jeff Duncan
//  Date:       November 20, 2002
//  Description:    Main program entry point.
//
//  argc            - command line arg count.
//  argv            - command line arguments.
//*********************************************************************
extern "C"  void spinningCube(void );
void spinningCube(void )
{

    int    i = 0;

   //setCase(2);
#if 0
    F_InitializeWindow2();
#else
    initFrame();// double 3d map 
#endif
    eglMakeCurrent(f_dpy_sz[0], f_surface_sz[0], f_surface_sz[0], f_eglContext_sz[0]);

    InitGL( 1 );              // Our initial GL state, textures, projection, etc.

    eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);

    InitGL( 2 );  

    // Timer Variables
    double startTimer = 0;

    startTimer = QueryTimer();

    // Simple animation timing variables
    unsigned long tick = 0;
    double tickStart = startTimer;

    // Banner information variables
    Banner banner1 = { {256,256 }, g_TextureNames[ 0 ], "000.0 fps", "0:00:00" };
    Banner banner2 = { {256,256 }, g_TextureNames[ 1 ], "000.0 fps", "0:00:00" };


    static struct carddata_bit_test_powerperf powerPerf = {0,0,0,0,0,0,0};
    bit_test powerTest = {BIT_MODULE_CARDDATA, BIT_CARDDATA_POWERPERF, &powerPerf, sizeof(powerPerf)};
    printf("SpinningCube RUN .......!\n");
    for (;;)
    {
    	eglMakeCurrent(f_dpy_sz[0], f_surface_sz[0], f_surface_sz[0], f_eglContext_sz[0]);
        DrawDisplay(f_dpy_sz[0], f_surface_sz[0], startTimer, &banner1,1);
        eglSwapBuffers(f_dpy_sz[0], f_surface_sz[0]);
        
        eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);
        DrawDisplay(f_dpy_sz[1],f_surface_sz[1], startTimer,&banner2,2);
        eglSwapBuffers(f_dpy_sz[1], f_surface_sz[1]);
        
        taskDelay(1);
        
#if 0        
        if (BIT_SUCCESS != CoreAVIRunBitTests(1, &powerTest))
              {
              printf("CARDDATA: Power pref test FAILED!\n\n");
              }
              else
              {
              printf("GPU/Mem clocks: \t%0.1f / %0.1f MHz\n", powerPerf.gpuClock / 1000000.0, powerPerf.memClock / 1000000.0);
              printf("GPU/Mem voltage:\t%5d / %d mV\n", powerPerf.gpuVoltage, powerPerf.memVoltage);
              printf("PCIE Link Speed:\t%dx Gen%d\n", powerPerf.pcieLanes, powerPerf.pcieLinkGen);
              printf("CARDDATA: Power pref test PASSED!\n\n");
              }
#endif
        


    }

  
    for( i = 0; i < cMaxContexts; i++ )
    {
        glDeleteTextures(1, &g_TextureNames[ i ]);
    }

    // Detach the rendering context from the window:

    return ;
}
void RenderES(void)
{
   GLuint buffer2;
   GLuint buffer3;
	static int rotation = 0;
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glLoadIdentity();
	//gltranslate(0, 0, FixedFromInt(-30));
	glRotatef(45,1,0,0);
	glRotatef(rotation++,0,1,0);
#if 0

glVertexPointer(3,GL_SHORT, 0, vertices);

glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
static GLubyte front[] = {2,1,3,0};
glDrawElements(GL_TRIANGLE_STRIP, 4, GL_UNSIGNED_BYTE,front);	

glColor4f(0.0f, 1.0f, 0.0f, 0.0f);   
static GLubyte back[] = {5,6,4,7};
glDrawElements(GL_TRIANGLE_STRIP, 4, GL_UNSIGNED_BYTE,back);	

glColor4f(0.0f, 0.0f, 1.0f, 0.0f);
static GLubyte top[] = {6,2,7,3};	
glDrawElements(GL_TRIANGLE_STRIP, 4, GL_UNSIGNED_BYTE,top);	

glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
static GLubyte bottom[] = {1,5,0,4};
glDrawElements(GL_TRIANGLE_STRIP, 4, GL_UNSIGNED_BYTE,bottom);	

glColor4f(0.0f, 1.0f, 1.0f, 0.0f);
static GLubyte left[] = {3,0,7,4};
glDrawElements(GL_TRIANGLE_STRIP, 4, GL_UNSIGNED_BYTE,left);	

glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
static GLubyte right[] = {6,5,2,1};
glDrawElements(GL_TRIANGLE_STRIP, 4, GL_UNSIGNED_BYTE,right);
glDisableClientState(GL_VERTEX_ARRAY);



  static GLfloat vertices[] = {-5, -5, -5,
			 5, -5, -5,
			 5, 5, -5,
			-5, 5, -5,
			-5, -5, 5,
			 5, -5, 5,
			 5, 5, 5,
			-5, 5, 5			
	};
	 static GLfloat colors[] = {1.0f, 0.0f, 0.0f,
                               0.0f, 1.0f, 0.0f, 
                               0.0f, 0.0f, 1.0f,
                               1.0f, 1.0f, 0.0f, 
                               0.0f, 1.0f, 1.0f,
                               1.0f, 0.0f, 1.0f};
    glDisable(GL_TEXTURE_2D);

    glGenBuffersARB(1, &buffer3); 
    glGenBuffersARB(1, &buffer2); 
    //glGenBuffersARB(1, &buffer); 	
    glEnableClientState(GL_COLOR_ARRAY);
    glEnableClientState(GL_VERTEX_ARRAY);
    glBindBufferARB(GL_ARRAY_BUFFER_ARB, 0);
    glVertexPointer(3, GL_FLOAT, 0,vertices);
    glBindBufferARB(GL_ARRAY_BUFFER_ARB, buffer2);
    glBufferDataARB(GL_ARRAY_BUFFER_ARB, 18*sizeof(GLfloat), colors, GL_DYNAMIC_DRAW_ARB);
    glColorPointer(3, GL_FLOAT, 0, BUFFER_OFFSET(0));
    glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER_ARB, buffer3);
    glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, 5*sizeof(GLuint), indices, GL_DYNAMIC_DRAW_ARB);

    glDrawElements(GL_QUADS, 4, GL_UNSIGNED_INT, BUFFER_OFFSET(sizeof(GLuint)));

    glBindBufferARB(GL_ARRAY_BUFFER_ARB, 0);
    glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER_ARB, 0);

    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
	
#else	
	 // Now, we'll actually specify our box:
	    // VERTICES:
	    float v1[] = { -1,-1, 1 };
	    float v2[] = {  1,-1, 1 };
	    float v3[] = {  1, 1, 1 };
	    float v4[] = { -1, 1, 1 };
	    float v5[] = {  1,-1,-1 };
	    float v6[] = { -1,-1,-1 };
	    float v7[] = { -1, 1,-1 };
	    float v8[] = {  1, 1,-1 };

	    // SURFACE NORMALS:
	    float n1[] = {  0, 0,-1 };
	    float n2[] = {  0, 0, 1 };
	    float n3[] = { -1, 0, 0 };
	    float n4[] = {  1, 0, 0 };
	    float n5[] = {  0,-1, 0 };
	    float n6[] = {  0, 1, 0 };

	    // COLORS:
	    float yellow[]     = { 1, 1, 0, 1 };
	    float red[]     = { 1, 0, 0, 1 };
	    float green[]   = { 0, 1, 0, 1 };
	    float blue[]    = { 0, 0, 1, 1 };
	    float white[]   = { 1, 1, 1, 1 };
	    float grey[]   =  { 0.3f, 0.3f, 0.3f, 1 };

	    float *color1, *color2, *color3, *color4;

	    //Set the colors differently for each display.

	        color1 = blue;
	        color2 = green;
	        color3 = yellow;
	        color4 = white;

	    // TEXTURE COORDINATES:
	    float t1[] = { 0, 0 };
	    float t2[] = { 1, 0 };
	    float t3[] = { 1, 1 };
	    float t4[] = { 0, 1 };

	    glBegin( GL_QUADS );
	        // FRONT FACE
	        glColor4fv( color1 ); glNormal3fv( n2 ); glTexCoord2fv( t1 ); glVertex3fv( v1 );
	        glColor4fv( color2 ); glNormal3fv( n2 ); glTexCoord2fv( t2 ); glVertex3fv( v2 );
	        glColor4fv( color3 ); glNormal3fv( n2 ); glTexCoord2fv( t3 ); glVertex3fv( v3 );
	        glColor4fv( color4 ); glNormal3fv( n2 ); glTexCoord2fv( t4 ); glVertex3fv( v4 );

	        // BACK FACE
	        glColor4fv( color1 ); glNormal3fv( n1 ); glTexCoord2fv( t1 ); glVertex3fv( v5 );
	        glColor4fv( color2 ); glNormal3fv( n1 ); glTexCoord2fv( t2 ); glVertex3fv( v6 );
	        glColor4fv( color3 ); glNormal3fv( n1 ); glTexCoord2fv( t3 ); glVertex3fv( v7 );
	        glColor4fv( color4 ); glNormal3fv( n1 ); glTexCoord2fv( t4 ); glVertex3fv( v8 );

	        // TOP FACE
	        glColor4fv( color1 ); glNormal3fv( n6 ); glTexCoord2fv( t1 ); glVertex3fv( v4 );
	        glColor4fv( color2 ); glNormal3fv( n6 ); glTexCoord2fv( t2 ); glVertex3fv( v3 );
	        glColor4fv( color3 ); glNormal3fv( n6 ); glTexCoord2fv( t3 ); glVertex3fv( v8 );
	        glColor4fv( color4 ); glNormal3fv( n6 ); glTexCoord2fv( t4 ); glVertex3fv( v7 );

	        // BOTTOM FACE
	        glColor4fv( color1 ); glNormal3fv( n5 ); glTexCoord2fv( t1 ); glVertex3fv( v2 );
	        glColor4fv( color2 ); glNormal3fv( n5 ); glTexCoord2fv( t2 ); glVertex3fv( v1 );
	        glColor4fv( color3 ); glNormal3fv( n5 ); glTexCoord2fv( t3 ); glVertex3fv( v6 );
	        glColor4fv( color4 ); glNormal3fv( n5 ); glTexCoord2fv( t4 ); glVertex3fv( v5 );

	        // LEFT FACE
	        glColor4fv( color1 ); glNormal3fv( n3 ); glTexCoord2fv( t1 ); glVertex3fv( v6 );
	        glColor4fv( color2 ); glNormal3fv( n3 ); glTexCoord2fv( t2 ); glVertex3fv( v1 );
	        glColor4fv( color3 ); glNormal3fv( n3 ); glTexCoord2fv( t3 ); glVertex3fv( v4 );
	        glColor4fv( color4 ); glNormal3fv( n3 ); glTexCoord2fv( t4 ); glVertex3fv( v7 );

	        // RIGHT FACE
	        glColor4fv( color1 ); glNormal3fv( n4 ); glTexCoord2fv( t1 ); glVertex3fv( v2 );
	        glColor4fv( color2 ); glNormal3fv( n4 ); glTexCoord2fv( t2 ); glVertex3fv( v5 );
	        glColor4fv( color3 ); glNormal3fv( n4 ); glTexCoord2fv( t3 ); glVertex3fv( v8 );
	        glColor4fv( color4 ); glNormal3fv( n4 ); glTexCoord2fv( t4 ); glVertex3fv( v3 );
	    glEnd( );
#endif
}
int spinningCubeES()
{
	//glOrtho(-20,20,-20,20,-20,20);
	 int i;

	    F_InitializeWindow();

	    eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);

	    InitGL(CUBEES);              // Our initial GL state, textures, projection, etc.

	  //  InitVectorText("vfonts");
	    // Timer Variables
	    double startTimer = 0;

	    startTimer = QueryTimer();

	    // Simple animation timing variables
	    unsigned long tick = 0;
	    double tickStart = startTimer;

	    // Banner information variables
	    Banner banner1 = { {256,256 }, g_TextureNames[ 0 ], "000.0 fps", "0:00:00" };


	    // We are going to continue animating until the application is explictly
	    //   terminated through a keyboard break (ctl-c in Windows) or other OS
	    //   signal.
	    // This is not a 'nice' way to exit the application, since we require the
	    //   operating system to do some clean-up for us.  In a production
	    //   application, some kind of exit condition would be checked periodically,
	    //   and the animation loop exited if appropriate.
	    for (;;)
	    {
	    	eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);
	        DrawDisplay(f_dpy, f_surface, startTimer, &banner1, CUBEES);
	        eglSwapBuffers(f_dpy, f_surface);

	    }

	    // Note that, in its current state, this code is not reachable.
	    //   In a production application, exit clean-up is desired.

	    // Clean up could be done in a seperate function, but it is minimal.
	    // Tell the driver to release the texture memory we've previously allocated:
	    for( i = 0; i < cMaxContexts; i++ )
	    {
	        glDeleteTextures(1, &g_TextureNames[ i ]);
	    }

	    // Detach the rendering context from the window:

	    return 0;
}


//*********************************************************************
//  Name:       InitGL
//  Created by: Jeff Duncan
//  Date:       November 21, 2002
//  Description:    Set all required initialization OpenGL state and
//                  all static state.
//
//  ScreenNum    - the screen which we are initializing for, 1 or 2
//*********************************************************************
void InitGL( const unsigned int ScreenNum )
{
    // Note that the order in which the functions are invoked here is
    //   generally not important, but remember to respect the fact that
    //   OpenGL is a state machine.
	sysClkDisable();
	sysClkRateSet(SYS_CLK_RATE);
	sysClkEnable();
    // Enable 2D Textures, back-face culling and the depth buffer:
    glEnable( GL_TEXTURE_2D );
    glEnable( GL_DEPTH_TEST );
    glEnable( GL_CULL_FACE );

    // Ask OpenGL to interpolate colors between vertices.  GL_FLAT
    //   is faster, but we're only doing a single cube - let's make
    //   it look nice.
    glShadeModel( GL_SMOOTH );

    // Set up the blending equation, used later to give the banner
    //   logo its transparent background:
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    
    glEnable(GL_POINT_SMOOTH);
    glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);

    glEnable(GL_LINE_SMOOTH);
    glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);

    // Define a single diffuse light source.  The VSA100 does all its
    //   lighting in software, so using too many lights will hurt
    //   performance:
    // Final '0' coordinate specifies 'inifinite' light source:
    float lightPos[]   = { 1.0f, 1.0f, 1.0f, 0.0f };
    // Note that the alpha lighting component is ignored.
    float lightColor[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    // Set the color:
    glLightfv( GL_LIGHT0, GL_DIFFUSE, lightColor );
    // Set the position:
    // WARNING - in a real application, you'll want to do this after
    //           placing the camera (per frame).  If the camera were
    //           moving, we'd have unexpected lighting results.
    glLightfv( GL_LIGHT0, GL_POSITION, lightPos );
    // Turn on the light - note that the light is enabled, but
    //   OpenGL's lighting is not.  Until we enable lighting, this
    //   light will have no effect on the rendered scene.
    glEnable( GL_LIGHT0 );
    // Enable lighting:
    glEnable( GL_LIGHTING );

    // Allow the material color to be defined by the vertex color
    glColorMaterial( GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE );
    glEnable( GL_COLOR_MATERIAL );

    // Set default viewing projection
    // First, we must specify that we wish to modify the projection
    //   matrix.  By default, operations modify the modelview matrix.
    //   By specifying seperate projection and modelview matrices,
    //   we only need to specify the modelview transformations on a
    //   per-frame basis.  The seperation can also allow the
    //   video driver to optimize for certain matrix cases.
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();   // Never assume the matrix is sane by default.

    // Specify a perspective transformation.  Details on this function
    //   and its behavior can be found in the OpenGL Reference Manual:
    if(ScreenNum == 3)
    	gluPerspective(90.0f, (float)DISPLAY_WIDTH*2/((float)DISPLAY_HEIGHT), 1, 100);
    else
        gluPerspective(90.0f, (float)DISPLAY_WIDTH/((float)DISPLAY_HEIGHT), 1, 100);

    // Return to the modelview matrix, since that is what we wish
    //   to modify in order to place objects in the scene.
    glMatrixMode(GL_MODELVIEW);
    // ...And clear it to the identity so we have an explictly
    //   defined state:
    glLoadIdentity();

    // Load our textures

    if( ScreenNum == 1 )
    {
        // First, we allocate an OpenGL texture name which will be used
        //   to refer to the uploaded texture:
        glGenTextures( 1, &g_TextureNames[0] );

        // Next, we bind a texture name for use in all subsequent texture
        //   operations (think 'state machine').
        glBindTexture( GL_TEXTURE_2D, g_TextureNames[0] );
        // Set the parameters to be used with this texture:
        glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR );
        glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR );
        glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_CLAMP );
        glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_CLAMP );
        // Finally, specify the data to be uploaded and its format:
        glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo );
    }
    else if( ScreenNum == 5 )
    {
        // First, we allocate an OpenGL texture name which will be used
        //   to refer to the uploaded texture:
        glGenTextures( 1, &g_TextureNames[1] );

        // Next, we bind a texture name for use in all subsequent texture
        //   operations (think 'state machine').
        glBindTexture( GL_TEXTURE_2D, g_TextureNames[1] );
        // Set the parameters to be used with this texture:
        glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR );
        glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR );
        glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_CLAMP );
        glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_CLAMP );
        // Finally, specify the data to be uploaded and its format:
        glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo );
    }
    else if( ScreenNum == 3 )
    {
        // First, we allocate an OpenGL texture name which will be used
        //   to refer to the uploaded texture:
        glGenTextures( 1, &g_TextureNames[2] );

        // Next, we bind a texture name for use in all subsequent texture
        //   operations (think 'state machine').
        glBindTexture( GL_TEXTURE_2D, g_TextureNames[2] );
    }
    else if( ScreenNum == CUBEES )
    {
    	return;
    }


    return;
}

//*********************************************************************
//  Name:       BannerUpdate
//  Created by: Jeff Duncan
//  Date:       November 21, 2002
//  Description:    Update display banner information with current data.
//                  Modifies pBanner and pStart if necessary.
//
//  pBanner         - The banner to be updated.
//  Start           - Time at the start of the frame.
//  Finish          - Time at the end of the frame.
//  Screen          - The ID of the screen being drawn
//*********************************************************************
void BannerUpdate( Banner *pBanner, double Start, double Finish, int Screen )
{
    static double       sTotalDuration      = 0.0;
    static double       sLastDuration1      = 0.0;
    static double       sLastDuration2      = 0.0;
    static double       sLastDuration3      = 0.0;
    static double       sLastDuration      = 0.0;
    static unsigned int Screen1Count        = 0;
    static unsigned int Screen2Count        = 0;
    static unsigned int Screen3Count        = 0;
    static unsigned int ScreenCount        = 0;

    // Catch stupid programming errors:
    assert( pBanner && "Attempt to update banner with NULL inputs." );

    // Determine the program's run time
    double duration = Finish-Start;
//    printf("Finish = %f, Start = %f, duration = %f\n", Finish, Start, duration);

    //We want to maintain statics for each display independently.
    if (Screen == 1)
    {
        Screen1Count++;
        if (duration > sLastDuration1+1.0)
        {
            int durationAsInt;
            durationAsInt = (int)sTotalDuration;
            sTotalDuration = duration;
            sprintf(pBanner->DurationString, "%d:%02d:%02d", durationAsInt/3600, (durationAsInt/60)%60, durationAsInt%60);
            sprintf(pBanner->FPSString, "%.1f fps", (double)Screen1Count / (duration-sLastDuration1));
            Screen1Count = 0;
            sLastDuration1 = duration;
//            printf("%s; %s\n",pBanner->DurationString,pBanner->FPSString);
        }
    }
    else if (Screen == 2)
    {
        Screen2Count++;
        if (duration > sLastDuration2+1.0)
        {
            int durationAsInt;
            durationAsInt = (int)sTotalDuration;
            sTotalDuration = duration;
            sprintf(pBanner->DurationString, "%d:%02d:%02d", durationAsInt/3600, (durationAsInt/60)%60, durationAsInt%60);
            sprintf(pBanner->FPSString, "%.1f fps", (double)Screen2Count / (duration-sLastDuration2));
            Screen2Count = 0;
            sLastDuration2 = duration;
        }
    }
    else if (Screen == 3)
    {
        Screen3Count++;
        if (duration > sLastDuration3+1.0)
        {
            int durationAsInt;
            durationAsInt = (int)sTotalDuration;
            sTotalDuration = duration;
            sprintf(pBanner->DurationString, "%d:%02d:%02d", durationAsInt/3600, (durationAsInt/60)%60, durationAsInt%60);
            sprintf(pBanner->FPSString, "%.1f fps", (double)Screen3Count / (duration-sLastDuration3));
            Screen3Count = 0;
            sLastDuration3 = duration;
        }
    }
    else
    {
    	ScreenCount++;
		if (duration > sLastDuration+1.0)
		{
			int durationAsInt;
			durationAsInt = (int)sTotalDuration;
			sTotalDuration = duration;
			sprintf(pBanner->DurationString, "%d:%02d:%02d", durationAsInt/3600, (durationAsInt/60)%60, durationAsInt%60);
			sprintf(pBanner->FPSString, "%.1f fps", (double)ScreenCount / (duration-sLastDuration));
			ScreenCount = 0;
			sLastDuration = duration;
		}
    	
    }

    return;
}

//*********************************************************************
//  Name:       BannerRender
//  Created by: Jeff Duncan
//  Date:       November 21, 2002
//  Description:    Update display banner information with current data.
//                  Modifies pBanner and pStart if necessary.
//
//  pBanner         - The banner to be rendered.
//*********************************************************************
void BannerRender( Banner const *pBanner )
{
    char const *pTxtPtr = NULL;

    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);

    glDisable(GL_DEPTH_TEST);
    glDisable(GL_LIGHTING);

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
        glLoadIdentity();
        gluOrtho2D (0, DISPLAY_WIDTH, DISPLAY_HEIGHT, 0);

        glMatrixMode(GL_MODELVIEW);
        glPushMatrix();
            // draw text
            glDisable(GL_BLEND);
            glDisable(GL_TEXTURE_2D);

            glLoadIdentity();
            glRasterPos2i(DISPLAY_WIDTH-100, 30);
			glutBitmapString(GLUT_BITMAP_8_BY_13, (char*)pBanner->FPSString);

            glLoadIdentity( );
            glRasterPos2i(DISPLAY_WIDTH-100, 50);
			glutBitmapString(GLUT_BITMAP_8_BY_13, (char*)pBanner->DurationString);
            glEnable(GL_BLEND);
            glEnable(GL_TEXTURE_2D);

            // draw logo
            glBindTexture(GL_TEXTURE_2D, pBanner->LogoTextureID);
            glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL );
            glLoadIdentity();
            glBegin(GL_QUADS);
                glColor3f(0,0,0);
                glTexCoord2f(0, 0); glVertex2f( 1,  128);
                glTexCoord2f(1, 0); glVertex2f(128, 128);
                glTexCoord2f(1, 1); glVertex2f(128,  1);
                glTexCoord2f(0, 1); glVertex2f( 1,   1);
            glEnd();
        glPopMatrix();
        glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);

    glEnable( GL_DEPTH_TEST );
    glEnable( GL_LIGHTING );

    return;
}

//*********************************************************************
//  Name:       SceneRender
//  Created by: Jeff Duncan
//  Date:       November 21, 2002
//  Description:    Renders the frame at the specified tick.
//
//  tick            - The instant for which our scene should be displayed.
//*********************************************************************
void SceneRender(double time, int ScreenNum)
{
    // We want to render the box where the viewer is looking:
    glTranslatef( 0, 0, 2 );

    // Spin the box differently depending on which screen we are drawing.
    if (ScreenNum == 1)
    {
        glRotatef( (float)(time*3), 0.0f, 1.0f, 0.0f );

        glRotatef( 30.0f, 0, 0, 1 );
    }
    else if (ScreenNum == 2)
    {
    	glRotatef( (float)(time*3), 1.0f, 0.0f, 0.0f );

		glRotatef( 30.0f, 0, 0, 1 );
    }
    else if (ScreenNum == 3)
    {
        glRotatef( (float)(time*3), 1.0f, 0.0f, 0.0f );

        glRotatef( (float)(time*1), 0.0f, 0.0f, 1.0f );
        glRotatef( (float)(time*1), 0.0f, 1.0f, 0.0f );
    }
    else if (ScreenNum == CUBEES)
    {
    	RenderES();
    	return;
    }

    // Now, we'll actually specify our box:
    // VERTICES:
    float v1[] = { -1,-1, 1 };
    float v2[] = {  1,-1, 1 };
    float v3[] = {  1, 1, 1 };
    float v4[] = { -1, 1, 1 };
    float v5[] = {  1,-1,-1 };
    float v6[] = { -1,-1,-1 };
    float v7[] = { -1, 1,-1 };
    float v8[] = {  1, 1,-1 };

    // SURFACE NORMALS:
    float n1[] = {  0, 0,-1 };
    float n2[] = {  0, 0, 1 };
    float n3[] = { -1, 0, 0 };
    float n4[] = {  1, 0, 0 };
    float n5[] = {  0,-1, 0 };
    float n6[] = {  0, 1, 0 };

    // COLORS:
    float yellow[]     = { 1, 1, 0, 1 };
    float red[]     = { 1, 0, 0, 1 };
    float green[]   = { 0, 1, 0, 1 };
    float blue[]    = { 0, 0, 1, 1 };
    float white[]   = { 1, 1, 1, 1 };
    float grey[]   =  { 0.3f, 0.3f, 0.3f, 1 };

    float *color1, *color2, *color3, *color4;

    //Set the colors differently for each display.
    if (ScreenNum == 1)
    {
        color1 = blue;
        color2 = green;
        color3 = green;
        color4 = blue;
    }
    else if (ScreenNum == 2)
    {
    	color1 = white;
		color2 = yellow;
		color3 = yellow;
		color4 = white;
    }
    else if (ScreenNum == 3)
    {
        color1 = blue;
        color2 = green;
        color3 = yellow;
        color4 = grey;
    }

    // TEXTURE COORDINATES:
    float t1[] = { 0, 0 };
    float t2[] = { 1, 0 };
    float t3[] = { 1, 1 };
    float t4[] = { 0, 1 };

    // Since some faces are textured and others are not, we may need to
    //   make a state change between faces.  Many state changes are not
    //   valid between a begin/end pair, and texture enabling is one such
    //   state.
    if( ScreenNum == 1 )
    {
        glBindTexture( GL_TEXTURE_2D, g_TextureNames[ 0 ] );
    }
    else if( ScreenNum == 2 )
    {
    	glBindTexture( GL_TEXTURE_2D, g_TextureNames[ 0 ] );
    }
    else if( ScreenNum == 3 )
    {
        glBindTexture( GL_TEXTURE_2D, g_TextureNames[ 2 ] );
    }

    glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL );
    glBegin( GL_QUADS );
        // FRONT FACE
        glColor4fv( color1 ); glNormal3fv( n2 ); glTexCoord2fv( t1 ); glVertex3fv( v1 );
        glColor4fv( color2 ); glNormal3fv( n2 ); glTexCoord2fv( t2 ); glVertex3fv( v2 );
        glColor4fv( color3 ); glNormal3fv( n2 ); glTexCoord2fv( t3 ); glVertex3fv( v3 );
        glColor4fv( color4 ); glNormal3fv( n2 ); glTexCoord2fv( t4 ); glVertex3fv( v4 );

        // BACK FACE
        glColor4fv( color1 ); glNormal3fv( n1 ); glTexCoord2fv( t1 ); glVertex3fv( v5 );
        glColor4fv( color2 ); glNormal3fv( n1 ); glTexCoord2fv( t2 ); glVertex3fv( v6 );
        glColor4fv( color3 ); glNormal3fv( n1 ); glTexCoord2fv( t3 ); glVertex3fv( v7 );
        glColor4fv( color4 ); glNormal3fv( n1 ); glTexCoord2fv( t4 ); glVertex3fv( v8 );

        // TOP FACE
        glColor4fv( color1 ); glNormal3fv( n6 ); glTexCoord2fv( t1 ); glVertex3fv( v4 );
        glColor4fv( color2 ); glNormal3fv( n6 ); glTexCoord2fv( t2 ); glVertex3fv( v3 );
        glColor4fv( color3 ); glNormal3fv( n6 ); glTexCoord2fv( t3 ); glVertex3fv( v8 );
        glColor4fv( color4 ); glNormal3fv( n6 ); glTexCoord2fv( t4 ); glVertex3fv( v7 );

        // BOTTOM FACE
        glColor4fv( color1 ); glNormal3fv( n5 ); glTexCoord2fv( t1 ); glVertex3fv( v2 );
        glColor4fv( color2 ); glNormal3fv( n5 ); glTexCoord2fv( t2 ); glVertex3fv( v1 );
        glColor4fv( color3 ); glNormal3fv( n5 ); glTexCoord2fv( t3 ); glVertex3fv( v6 );
        glColor4fv( color4 ); glNormal3fv( n5 ); glTexCoord2fv( t4 ); glVertex3fv( v5 );

        // LEFT FACE
        glColor4fv( color1 ); glNormal3fv( n3 ); glTexCoord2fv( t1 ); glVertex3fv( v6 );
        glColor4fv( color2 ); glNormal3fv( n3 ); glTexCoord2fv( t2 ); glVertex3fv( v1 );
        glColor4fv( color3 ); glNormal3fv( n3 ); glTexCoord2fv( t3 ); glVertex3fv( v4 );
        glColor4fv( color4 ); glNormal3fv( n3 ); glTexCoord2fv( t4 ); glVertex3fv( v7 );

        // RIGHT FACE
        glColor4fv( color1 ); glNormal3fv( n4 ); glTexCoord2fv( t1 ); glVertex3fv( v2 );
        glColor4fv( color2 ); glNormal3fv( n4 ); glTexCoord2fv( t2 ); glVertex3fv( v5 );
        glColor4fv( color3 ); glNormal3fv( n4 ); glTexCoord2fv( t3 ); glVertex3fv( v8 );
        glColor4fv( color4 ); glNormal3fv( n4 ); glTexCoord2fv( t4 ); glVertex3fv( v3 );
    glEnd( );

    return;
}

/*******************************************************
 Method Name : F_GlInitialize
 Description : Initialize GL related items such as
               initializing the window and clear color.
 Parameters  : None
 Errors      : None
 Return value: None
*******************************************************/
#define MAX_CASE_NUM   20
static unsigned short gpuFreq[MAX_CASE_NUM][2] = 
{ 
		{600, 700},//{600, 650},
		{150, 150},
		{150, 250},
		{220, 250},
		{300, 250},
		{300, 400},
		{300, 450},
		{300, 600},
		{300, 700},//{300, 650},//
		{400, 250},
		{400, 400},
		{400, 450},
		{400, 600},
		{400, 700},//{400, 650},//		
		{450, 450},
		{450, 600},
		{450, 700},//{450, 650},//
		{600, 450},
		{600, 600},
		{110, 250}
};
static int configNum = 15;
static unsigned memClock = 0, gpuClock = 0;
int setCase(int num)
{
	configNum = num % MAX_CASE_NUM;
	gpuClock = gpuFreq[configNum][0];
	memClock = gpuFreq[configNum][1];
	
	printf("\ngpuClock = %dMHz, memClock = %dMHz\n",gpuClock,memClock);
	return configNum;
}

static void F_InitializeWindow2(void)
{
    EGLBoolean errorStatus = EGL_TRUE;
    
	struct E4690ExtendedDisplayInfo  GPUSpecificInfo1;

    CoreAVIDriverInitInfo initInfo;
 	struct E4690DriverInitInfo   chipInfo;

 	memset(&chipInfo, 0x00, sizeof(chipInfo));
 	memset(&initInfo, 0x00, sizeof(initInfo));
 	chipInfo.gpuClockMHz = gpuClock;
 	chipInfo.memClockMHz = memClock;
 	chipInfo.gpuVoltage  = 1000;
 	chipInfo.memVoltage  = 1500;
 	chipInfo.pcieLanes   = 2;
 	chipInfo.pcieGen     = 1;
 	chipInfo.fcram.enable = 0;
 	chipInfo.selfUpdatingTextureHeapSize = 0;
 	chipInfo.gartMiscHeapSize   = 0;
     
 	initInfo.cardId = 0;
 	initInfo.chipInitInfo = &chipInfo;
 
	memset(&GPUSpecificInfo1, 0x00, sizeof(GPUSpecificInfo1));
    GPUSpecificInfo1.frameBufHeapSize = 0;
    GPUSpecificInfo1.fcvm.enable = false;
    GPUSpecificInfo1.hSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.vSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.rotation = 0;
    GPUSpecificInfo1.syncWithOtherHead = true;
//    f_dispMode_sz[0].extendedGPUSpecificInfo  = (void *)(&GPUSpecificInfo1);
    f_dispMode_sz[1].extendedGPUSpecificInfo  = (void *)(&GPUSpecificInfo1);

    /* Open Native Display */
        /* EGL Open Display */
    if (COREAVI_ERROR_SUCCESS != CoreAVIInitializeDriver( &initInfo ) ||
        COREAVI_ERROR_SUCCESS != CoreAVIOpenDisplay(&f_dispMode_sz[0], &f_disp_id_sz[0]) ||
        COREAVI_ERROR_SUCCESS != CoreAVIOpenDisplay(&f_dispMode_sz[1], &f_disp_id_sz[1]))
    {
        errorStatus = EGL_FALSE;
    }

    /* Obtain an EGL Display */
    if (EGL_TRUE == errorStatus)
    {
        f_dpy_sz[0] = eglGetDisplay(f_disp_id_sz[0]);        /* EGL Get Display */
        f_dpy_sz[1] = eglGetDisplay(f_disp_id_sz[1]);

        /* Check if error occurred */
        if (EGL_NO_DISPLAY == f_dpy_sz[0] ||
        	EGL_NO_DISPLAY == f_dpy_sz[1])
        {
            errorStatus = EGL_FALSE;
        }
    }

    /* Initialize EGL */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglInitialize (f_dpy_sz[0], 0, 0);        /* EGL Initialize */
        errorStatus = eglInitialize (f_dpy_sz[1], 0, 0);  
    }

    /* Obtain the first configuration with a buffer size of 32 bits */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglChooseConfig(f_dpy_sz[0], f_attribs, &f_config_sz[0], 1, &f_num_configs_sz[0]); /* EGL Choose Config */
        errorStatus = eglChooseConfig(f_dpy_sz[1], f_attribs, &f_config_sz[1], 1, &f_num_configs_sz[1]); /* EGL Choose Config */
    }
    
    /* Create a Native Window */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = CoreAVICreateWindow(f_dpy_sz[0], 0, 0, 0, DISPLAY_WIDTH, DISPLAY_HEIGHT, &f_win_sz[0]);        /* EGL Create Window */
        errorStatus = CoreAVICreateWindow(f_dpy_sz[1], 0, 0, 0, DISPLAY_WIDTH2, DISPLAY_HEIGHT2, &f_win_sz[1]);
        errorStatus = (COREAVI_ERROR_SUCCESS == errorStatus) ? EGL_TRUE : EGL_FALSE;
    }

    /* Create an EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
#if 1
        f_surface_sz[0] = eglCreateWindowSurface(f_dpy_sz[0], f_config_sz[0], f_win_sz[0], NULL);        /* EGL Create Window Surface */
        f_surface_sz[1] = eglCreateWindowSurface(f_dpy_sz[1], f_config_sz[1], f_win_sz[1], NULL);
#else
        EGLint tripbuffer_attrib[3]= {EGL_TRIPLE_BUFFER, EGL_TRUE, EGL_NONE};
        f_surface_sz[0] = eglCreateWindowSurface(f_dpy_sz[0], f_config_sz[0], f_win_sz[0], tripbuffer_attrib);        /* EGL Create Window Surface */
        f_surface_sz[1] = eglCreateWindowSurface(f_dpy_sz[1], f_config_sz[1], f_win_sz[1], tripbuffer_attrib);

#endif
        if ((EGL_NO_SURFACE == f_surface_sz[0]) ||(EGL_NO_SURFACE == f_surface_sz[1]))
        {
        	errorStatus = EGL_FALSE;
        }
    }

    /* Map the EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
        //errorStatus = eglMapWindowCoreAVI(f_dpy, f_surface);
    }

    /* Create an EGL Context */
    if (EGL_TRUE == errorStatus)
    {
        f_eglContext_sz[0] = eglCreateContext(f_dpy_sz[0], f_config_sz[0], EGL_NO_CONTEXT, NULL);        /* EGL Create Context */
        f_eglContext_sz[1] = eglCreateContext(f_dpy_sz[1], f_config_sz[1], EGL_NO_CONTEXT, NULL);
    
        if ((EGL_NO_CONTEXT == f_eglContext_sz[0])||(EGL_NO_CONTEXT == f_eglContext_sz[1]))
        {
        	errorStatus = EGL_FALSE;
        }
    }

    if (EGL_TRUE == errorStatus)
    {
    	
        errorStatus = eglMakeCurrent(f_dpy_sz[0], f_surface_sz[0], f_surface_sz[0], f_eglContext_sz[0]);        /* EGL Make Current */
        /* Setting swap interval to 0 will rely on hsync */
        eglSwapInterval(f_dpy_sz[0], 1);
        
        errorStatus = eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);        /* EGL Make Current */
        /* Setting swap interval to 0 will rely on hsync */
        eglSwapInterval(f_dpy_sz[1], 1);
    }

    eglMakeCurrent(f_dpy_sz[0], f_surface_sz[0], f_surface_sz[0], f_eglContext_sz[0]);
    glViewport(0, 0, (GLsizei) DISPLAY_WIDTH, (GLsizei) DISPLAY_HEIGHT);
    eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);
    glViewport(0, 0, (GLsizei) DISPLAY_WIDTH2, (GLsizei) DISPLAY_HEIGHT2);
#if 0
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (DISPLAY_WIDTH <= DISPLAY_HEIGHT)
        glOrtho(-2.5, 2.5, -2.5*(GLfloat)DISPLAY_HEIGHT/(GLfloat)DISPLAY_WIDTH,
            2.5*(GLfloat)DISPLAY_HEIGHT/(GLfloat)DISPLAY_WIDTH, -10.0, 10.0);
    else
        glOrtho(-2.5*(GLfloat)DISPLAY_WIDTH/(GLfloat)DISPLAY_HEIGHT,
            2.5*(GLfloat)DISPLAY_WIDTH/(GLfloat)DISPLAY_HEIGHT, -2.5, 2.5, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
#endif
    return;
}

static void F_InitializeWindow2E(void)
{
    EGLBoolean errorStatus = EGL_TRUE;
    
	struct E4690ExtendedDisplayInfo  GPUSpecificInfo1;

    CoreAVIDriverInitInfo initInfo;
 	struct E4690DriverInitInfo   chipInfo;

 	memset(&chipInfo, 0x00, sizeof(chipInfo));
 	memset(&initInfo, 0x00, sizeof(initInfo));
 	chipInfo.gpuClockMHz = gpuClock;
 	chipInfo.memClockMHz = memClock;
 	chipInfo.gpuVoltage  = 1000;
 	chipInfo.memVoltage  = 1500;
 	chipInfo.pcieLanes   = 2;
 	chipInfo.pcieGen     = 1;
 	chipInfo.fcram.enable = 0;
 	chipInfo.selfUpdatingTextureHeapSize = 0;
 	chipInfo.gartMiscHeapSize   = 0;
     
 	initInfo.cardId = 0;
 	initInfo.chipInitInfo = &chipInfo;
 
	memset(&GPUSpecificInfo1, 0x00, sizeof(GPUSpecificInfo1));
    GPUSpecificInfo1.frameBufHeapSize = 0;
    GPUSpecificInfo1.fcvm.enable = false;
    GPUSpecificInfo1.hSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.vSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.rotation = 0;
    GPUSpecificInfo1.syncWithOtherHead = true;
//    f_dispMode_sz[0].extendedGPUSpecificInfo  = (void *)(&GPUSpecificInfo1);
    f_dispMode_sz[1].extendedGPUSpecificInfo  = (void *)(&GPUSpecificInfo1);

    /* Open Native Display */
        /* EGL Open Display */
    if (COREAVI_ERROR_SUCCESS != CoreAVIInitializeDriver( &initInfo ) ||
        COREAVI_ERROR_SUCCESS != CoreAVIOpenDisplay(&f_dispMode_sz[0], &f_disp_id_sz[0]) ||
        COREAVI_ERROR_SUCCESS != CoreAVIOpenDisplay(&f_dispMode_sz[1], &f_disp_id_sz[1]))
    {
        errorStatus = EGL_FALSE;
    }

    /* Obtain an EGL Display */
    if (EGL_TRUE == errorStatus)
    {
        f_dpy_sz[0] = eglGetDisplay(f_disp_id_sz[0]);        /* EGL Get Display */
        f_dpy_sz[1] = eglGetDisplay(f_disp_id_sz[1]);

        /* Check if error occurred */
        if (EGL_NO_DISPLAY == f_dpy_sz[0] ||
        	EGL_NO_DISPLAY == f_dpy_sz[1])
        {
            errorStatus = EGL_FALSE;
        }
    }

    /* Initialize EGL */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglInitialize (f_dpy_sz[0], 0, 0);        /* EGL Initialize */
        errorStatus = eglInitialize (f_dpy_sz[1], 0, 0);  
    }

    /* Obtain the first configuration with a buffer size of 32 bits */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglChooseConfig(f_dpy_sz[0], f_attribs, &f_config_sz[0], 1, &f_num_configs_sz[0]); /* EGL Choose Config */
        errorStatus = eglChooseConfig(f_dpy_sz[1], f_attribs, &f_config_sz[1], 1, &f_num_configs_sz[1]); /* EGL Choose Config */
    }
    
    /* Create a Native Window */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = CoreAVICreateWindow(f_dpy_sz[0], 0, 0, 0, DISPLAY_WIDTH, DISPLAY_HEIGHT, &f_win_sz[0]);        /* EGL Create Window */
        errorStatus = CoreAVICreateWindow(f_dpy_sz[1], 0, 0, 0, DISPLAY_WIDTH2, DISPLAY_HEIGHT2, &f_win_sz[1]);
        errorStatus = (COREAVI_ERROR_SUCCESS == errorStatus) ? EGL_TRUE : EGL_FALSE;
    }

    /* Create an EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
#if 1
        f_surface_sz[0] = eglCreateWindowSurface(f_dpy_sz[0], f_config_sz[0], f_win_sz[0], NULL);        /* EGL Create Window Surface */
        f_surface_sz[1] = eglCreateWindowSurface(f_dpy_sz[1], f_config_sz[1], f_win_sz[1], NULL);
#else
        EGLint tripbuffer_attrib[3]= {EGL_TRIPLE_BUFFER, EGL_TRUE, EGL_NONE};
        f_surface_sz[0] = eglCreateWindowSurface(f_dpy_sz[0], f_config_sz[0], f_win_sz[0], tripbuffer_attrib);        /* EGL Create Window Surface */
        f_surface_sz[1] = eglCreateWindowSurface(f_dpy_sz[1], f_config_sz[1], f_win_sz[1], tripbuffer_attrib);

#endif
        if ((EGL_NO_SURFACE == f_surface_sz[0]) ||(EGL_NO_SURFACE == f_surface_sz[1]))
        {
        	errorStatus = EGL_FALSE;
        }
    }

    /* Map the EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
        //errorStatus = eglMapWindowCoreAVI(f_dpy, f_surface);
    }

    /* Create an EGL Context */
    if (EGL_TRUE == errorStatus)
    {
        f_eglContext_sz[0] = eglCreateContext(f_dpy_sz[0], f_config_sz[0], EGL_NO_CONTEXT, NULL);        /* EGL Create Context */
        f_eglContext_sz[1] = eglCreateContext(f_dpy_sz[1], f_config_sz[1], EGL_NO_CONTEXT, NULL);
    
        if ((EGL_NO_CONTEXT == f_eglContext_sz[0])||(EGL_NO_CONTEXT == f_eglContext_sz[1]))
        {
        	errorStatus = EGL_FALSE;
        }
    }

    if (EGL_TRUE == errorStatus)
    {
    	
        errorStatus = eglMakeCurrent(f_dpy_sz[0], f_surface_sz[0], f_surface_sz[0], f_eglContext_sz[0]);        /* EGL Make Current */
        /* Setting swap interval to 0 will rely on hsync */
        eglSwapInterval(f_dpy_sz[0], 1);
        
        errorStatus = eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);        /* EGL Make Current */
        /* Setting swap interval to 0 will rely on hsync */
        eglSwapInterval(f_dpy_sz[1], 1);
    }

    eglMakeCurrent(f_dpy_sz[0], f_surface_sz[0], f_surface_sz[0], f_eglContext_sz[0]);
    glViewport(0, 0, (GLsizei) DISPLAY_WIDTH, (GLsizei) DISPLAY_HEIGHT);
    eglMakeCurrent(f_dpy_sz[1], f_surface_sz[1], f_surface_sz[1], f_eglContext_sz[1]);
    glViewport(0, 0, (GLsizei) DISPLAY_WIDTH2, (GLsizei) DISPLAY_HEIGHT2);
#if 0
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (DISPLAY_WIDTH <= DISPLAY_HEIGHT)
        glOrtho(-2.5, 2.5, -2.5*(GLfloat)DISPLAY_HEIGHT/(GLfloat)DISPLAY_WIDTH,
            2.5*(GLfloat)DISPLAY_HEIGHT/(GLfloat)DISPLAY_WIDTH, -10.0, 10.0);
    else
        glOrtho(-2.5*(GLfloat)DISPLAY_WIDTH/(GLfloat)DISPLAY_HEIGHT,
            2.5*(GLfloat)DISPLAY_WIDTH/(GLfloat)DISPLAY_HEIGHT, -2.5, 2.5, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
#endif
    return;
}

static void F_InitializeWindow(void)
{
    EGLBoolean errorStatus = EGL_TRUE;
    
	struct E4690ExtendedDisplayInfo  GPUSpecificInfo1;

    CoreAVIDriverInitInfo initInfo;
 	struct E4690DriverInitInfo   chipInfo;

 	memset(&chipInfo, 0x00, sizeof(chipInfo));
 	memset(&initInfo, 0x00, sizeof(initInfo));
 	chipInfo.gpuClockMHz = 110;
 	chipInfo.memClockMHz = 220;
 	chipInfo.gpuVoltage  = 1000;
 	chipInfo.memVoltage  = 1500;
 	chipInfo.pcieLanes   = 2;
 	chipInfo.pcieGen     = 1;
 	chipInfo.fcram.enable = 0;
 	chipInfo.selfUpdatingTextureHeapSize = 0;
 	chipInfo.gartMiscHeapSize   = 0;
     
 	initInfo.cardId = 0;
 	initInfo.chipInitInfo = &chipInfo;
    
	memset(&GPUSpecificInfo1, 0x00, sizeof(GPUSpecificInfo1));
    GPUSpecificInfo1.frameBufHeapSize = 0;
    GPUSpecificInfo1.fcvm.enable = false;
    GPUSpecificInfo1.hSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.vSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.rotation = 0;
    GPUSpecificInfo1.syncWithOtherHead = false;

    f_dispMode.extendedCardSpecificInfo = (void *)(&GPUSpecificInfo1);
    /* Open Native Display */
    if (COREAVI_ERROR_SUCCESS != CoreAVIInitializeDriver( &initInfo ) ||
        COREAVI_ERROR_SUCCESS != CoreAVIOpenDisplay(&f_dispMode, &f_disp_id))
    {
        errorStatus = EGL_FALSE;
    }

    /* Obtain an EGL Display */
    if (EGL_TRUE == errorStatus)
    {
        f_dpy = eglGetDisplay(f_disp_id);        /* EGL Get Display */

        /* Check if error occurred */
        if (EGL_NO_DISPLAY == f_dpy)
        {
            errorStatus = EGL_FALSE;
        }
    }

    /* Initialize EGL */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglInitialize (f_dpy, 0, 0);        /* EGL Initialize */
    }

    /* Obtain the first configuration with a buffer size of 32 bits */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglChooseConfig(f_dpy, f_attribs, &f_config, 1, &f_num_configs); /* EGL Choose Config */
    }
    
    /* Create a Native Window */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = CoreAVICreateWindow(f_dpy, 0, 0, 0, DISPLAY_WIDTH, DISPLAY_HEIGHT, &f_win);        /* EGL Create Window */
        errorStatus = (COREAVI_ERROR_SUCCESS == errorStatus) ? EGL_TRUE : EGL_FALSE;
    }

    /* Create an EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
        f_surface = eglCreateWindowSurface(f_dpy, f_config, f_win, NULL);        /* EGL Create Window Surface */
    
        if (EGL_NO_SURFACE == f_surface)
        {
        	errorStatus = EGL_FALSE;
        }
    }

    /* Map the EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
        //errorStatus = eglMapWindowCoreAVI(f_dpy, f_surface);
    }

    /* Create an EGL Context */
    if (EGL_TRUE == errorStatus)
    {
        f_eglContext = eglCreateContext(f_dpy, f_config, EGL_NO_CONTEXT, NULL);        /* EGL Create Context */
    
        if (EGL_NO_CONTEXT == f_eglContext )
        {
        	errorStatus = EGL_FALSE;
        }
    }

    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);        /* EGL Make Current */
        /* Setting swap interval to 0 will rely on hsync */
        eglSwapInterval(f_dpy, 0);
    }

   glViewport(0, 0, (GLsizei) DISPLAY_WIDTH, (GLsizei) DISPLAY_HEIGHT);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   if (DISPLAY_WIDTH <= DISPLAY_HEIGHT)
      glOrtho(-2.5, 2.5, -2.5*(GLfloat)DISPLAY_HEIGHT/(GLfloat)DISPLAY_WIDTH,
         2.5*(GLfloat)DISPLAY_HEIGHT/(GLfloat)DISPLAY_WIDTH, -10.0, 10.0);
   else
      glOrtho(-2.5*(GLfloat)DISPLAY_WIDTH/(GLfloat)DISPLAY_HEIGHT,
         2.5*(GLfloat)DISPLAY_WIDTH/(GLfloat)DISPLAY_HEIGHT, -2.5, 2.5, -10.0, 10.0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();


    return;
}

static void F_InitializeWindow_E(void)
{
    EGLBoolean errorStatus = EGL_TRUE;
    

    CoreAVIDriverInitInfo initInfo;
	struct E4690DriverInitInfo   chipInfo;

	memset(&chipInfo, 0x00, sizeof(chipInfo));
	memset(&initInfo, 0x00, sizeof(initInfo));
	chipInfo.gpuClockMHz = 110;
	chipInfo.memClockMHz = 220;
	chipInfo.gpuVoltage  = 1000;
	chipInfo.memVoltage  = 1500;
	chipInfo.pcieLanes   = 2;
	chipInfo.pcieGen     = 1;
	chipInfo.fcram.enable = 0;
	chipInfo.selfUpdatingTextureHeapSize = 0;
	chipInfo.gartMiscHeapSize   = 0;
    
	initInfo.cardId = 0;
	initInfo.chipInitInfo = &chipInfo;


    static struct E4690ExtendedDisplayInfo extendedInfo1;
    static struct E4690ExtendedDisplayInfo extendedInfo2;
    
    extendedInfo1.extendedDisplayMode = 1;
    extendedInfo1.syncWithOtherHead = false;
    extendedInfo2.extendedDisplayMode = 1;
    extendedInfo2.syncWithOtherHead = true;
    extendedInfo1.frameBufHeapSize    = 0x3000000;
    extendedInfo2.frameBufHeapSize    = 0x3000000;



    f_dispMode_sz[0].extendedGPUSpecificInfo = &extendedInfo1;
    f_dispMode_sz[1].extendedGPUSpecificInfo = &extendedInfo2;
/*    extendedInfo1.splashTexture = (uint8*)texture;  */

    /* Open Native Display */
    if (COREAVI_ERROR_SUCCESS != CoreAVIInitializeDriver(&initInfo) ||
        COREAVI_ERROR_SUCCESS != CoreAVIOpenDisplay(&f_dispMode_sz[0], &f_disp_id)||
         COREAVI_ERROR_SUCCESS != CoreAVIOpenDisplay(&f_dispMode_sz[1], &f_disp_id_sz[1]))
    {
        errorStatus = EGL_FALSE;
    }

    /* Obtain an EGL Display */
    if (EGL_TRUE == errorStatus)
    {
        f_dpy = eglGetDisplay(f_disp_id);        /* EGL Get Display */

        /* Check if error occurred */
        if (EGL_NO_DISPLAY == f_dpy)
        {
            errorStatus = EGL_FALSE;
        }
    }

    /* Initialize EGL */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglInitialize (f_dpy, 0, 0);        /* EGL Initialize */
    }

    /* Obtain the first configuration with a buffer size of 32 bits */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglChooseConfig(f_dpy, f_attribs, &f_config, 1, &f_num_configs); /* EGL Choose Config */
    }
    
    /* Create a Native Window */
    if (EGL_TRUE == errorStatus)
    {
        errorStatus = CoreAVICreateWindow(f_dpy, 0, 0, 0, DISPLAY_WIDTH*2, DISPLAY_HEIGHT, &f_win);        /* EGL Create Windod w */
        errorStatus = (COREAVI_ERROR_SUCCESS == errorStatus) ? EGL_TRUE : EGL_FALSE;
    }

    /* Create an EGL Surface */
    if (EGL_TRUE == errorStatus)
    {
        f_surface = eglCreateWindowSurface(f_dpy, f_config, f_win, NULL);        /* EGL Create Window Surface */
    
        if (EGL_NO_SURFACE == f_surface)
        {
        	errorStatus = EGL_FALSE;
        }
    }

    /* Create an EGL Context */
    if (EGL_TRUE == errorStatus)
    {
        f_eglContext = eglCreateContext(f_dpy, f_config, EGL_NO_CONTEXT, NULL);        /* EGL Create Context */
    
        if (EGL_NO_CONTEXT == f_eglContext )
        {
        	errorStatus = EGL_FALSE;
        }
    }

    if (EGL_TRUE == errorStatus)
    {
        errorStatus = eglMakeCurrent(f_dpy, f_surface, f_surface, f_eglContext);        /* EGL Make Current */
        /* Setting swap interval to 0 will rely on hsync */
        eglSwapInterval(f_dpy, 0);
    }
    
    glViewport(0, 0, (GLsizei) DISPLAY_WIDTH *2, (GLsizei) DISPLAY_HEIGHT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (DISPLAY_WIDTH*2 <= DISPLAY_HEIGHT)
       glOrtho(-2.5, 2.5, -2.5*(GLfloat)DISPLAY_HEIGHT/(GLfloat)DISPLAY_WIDTH*2,
          2.5*(GLfloat)DISPLAY_HEIGHT/(GLfloat)DISPLAY_WIDTH*2, -10.0, 10.0);
    else
       glOrtho(-2.5*(GLfloat)DISPLAY_WIDTH*2/(GLfloat)DISPLAY_HEIGHT,
          2.5*(GLfloat)DISPLAY_WIDTH*2/(GLfloat)DISPLAY_HEIGHT, -2.5, 2.5, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

   return;
}


void os_helper_getTime(OSHelperTimerInfo *curTime)
{
    OsHelperGetTime(curTime);
}
/*******************************************************
 Method Name : F_Delay
 Description : Delays further execution for 3 seconds
 Parameters  : None
 Errors      : None
 Return value: None
*******************************************************/
void F_Delay(void)
{
    struct OSHelperTimerInfo currTime;
    struct OSHelperTimerInfo prevTime;
    float numSeconds = 0;
    os_helper_getTime(&prevTime);
    do
    {
        os_helper_getTime(&currTime);
        numSeconds = ((float)(currTime.timeMicroseconds - prevTime.timeMicroseconds))/1000000.0f;
    } while (numSeconds < 6.0f);
}

extern "C"
void getClock()
{
	struct carddata_bit_test_powerperf clockInfo;
	bit_test bitdata;
	bitdata.moduleId = BIT_MODULE_CARDDATA;
	bitdata.testId   = BIT_CARDDATA_POWERPERF;
	bitdata.pTestReturnData = (void *)(&clockInfo);
	bitdata.testDataSize    = sizeof(struct carddata_bit_test_powerperf);
	
	CoreAVIRunBitTests(1, &bitdata);
    printf("\n");
    printf("cardId      = %d\n", (unsigned int)(clockInfo.cardId));
    printf("gpuClock    = %dHz\n", clockInfo.gpuClock);
    printf("memClock    = %dHz\n", clockInfo.memClock);
    printf("gpuVoltage  = %dmV\n", clockInfo.gpuVoltage);
    printf("memVoltage  = %dmV\n", clockInfo.memVoltage);
    printf("pcieLanes   = %dlanes\n", clockInfo.pcieLanes);
    printf("pcieLinkGen = Gen%d\n", clockInfo.pcieLinkGen);
}


FILE *fpResttxt;
char ResttxtPath[200];
//GLuint RestList;
BOOL bDrawed = FALSE;
typedef struct{
	  GLfloat coords[2];
}FPOINT;
typedef struct{
	FPOINT v1,v2,v3;
}TRI_VERTEX;

TRI_VERTEX *tri_buffer = NULL;

int genTriVertex2M();

int genTriVertex2M()
{
	int i,j;
	FPOINT FP1,FP2,FP3,FP4;
	TRI_VERTEX *ptv;
	float width = 1.0f;
	tri_buffer = (TRI_VERTEX*)malloc(sizeof(TRI_VERTEX)*1024*1024*2);
	if(NULL == tri_buffer)
	{
		printf("Allocate triangle vertex buffer failed\n");
		return -1;
	}
	
    for (i = 0; i < 1024; i++)
    {
        for(j = 0; j <1024; j++)
        {
            FP1.coords[0] = (i - 512) * 1.0f;
            FP1.coords[1] = (j - 512) * 1.0f;
            FP2.coords[0] = (i - 512 + width) * 1.0f;
            FP2.coords[1] = (j - 512) * 1.0f;
            FP3.coords[0] = (i - 512 + width) * 1.0f;;
            FP3.coords[1] = (j - 512 + width) * 1.0f;
            FP4.coords[0] = (i - 512) * 1.0f;
            FP4.coords[1] = (j - 512 + width) * 1.0f;
            
            ptv = &tri_buffer[2*(i*1024+j)];
            ptv->v1.coords[0] = FP1.coords[0];
            ptv->v1.coords[1] = FP1.coords[1];
            ptv->v2.coords[0] = FP2.coords[0];
            ptv->v2.coords[1] = FP2.coords[1];
            ptv->v3.coords[0] = FP3.coords[0];
            ptv->v3.coords[1] = FP3.coords[1];
            
            
            ptv = &tri_buffer[2*(i*1024+j) + 1];
            ptv->v1.coords[0] = FP3.coords[0];
            ptv->v1.coords[1] = FP3.coords[1];
            ptv->v2.coords[0] = FP4.coords[0];
            ptv->v2.coords[1] = FP4.coords[1];
            ptv->v3.coords[0] = FP1.coords[0];
            ptv->v3.coords[1] = FP1.coords[1];
        }
    }
    printf("triangle vertex generate complete\n");
}



#define	C_Font_Lib 518224
#define	C_Font_Index 8794

typedef struct vfontGlyphDesc
{
    long linesStart;
    int  lineVertNum;
    long pointsStart;
    int  pointVertNum;
} VFONT_GLYPH_DESC;
static char* vFontLibName = "CFONT_S.LIB";
static char* vFontIndexName = "CFONT_S.IDX";
static VFONT_GLYPH_DESC * pvFontGlyphDesc = NULL;
static GLfloat * pvFontVert = NULL;
unsigned long  *g_pvFontIndex = NULL;
unsigned char  *g_pvFontLib   = NULL;

int	  g_vFontInited = 0;


int parseFontGlyph(int ncode, VFONT_GLYPH_DESC * pvFGD, 
		unsigned long *lineIndexStart, unsigned long *pointIndexStart, float ratio)
{
	int    nc, loop;

	unsigned long dataIndex=0L;
	int index = 0;
	unsigned char tstr[210];
	unsigned int  x = 0, y = 0;
	float xCord = .0f, yCord = .0f;
	int lineVertNum = 0;
	int charIsNULL = 0;

	lineVertNum=0;
	if (ncode < 1 ||( ncode >1100 && ncode<=1600)|| ncode > 8794 )
	{
		charIsNULL = 1;
	}
	else
	{
		dataIndex = *(g_pvFontIndex + ncode - 1);

		if(0 == dataIndex)
		{
			charIsNULL = 1;
		}
		else
		{
			for(loop = 0; loop < 210; loop++)
			{
				tstr[loop] = *(g_pvFontLib + dataIndex + loop);
			}
			charIsNULL = 0;
		}
	}

	if(1 == charIsNULL)
	{
		pvFGD->linesStart   = 0;
		pvFGD->lineVertNum  = 0;
		pvFGD->pointsStart  = 0;
		pvFGD->pointVertNum = 0;
		return(0);
	}
	else
	{
		lineVertNum = 0;
		pvFGD->linesStart   = *lineIndexStart;

		for(index = 0; ; index += 2)
		{
			x = tstr[index];
			y = tstr[index + 1];
			nc = 1;
			if(x > 127)
			{
				x  -= 128;
				nc  =2;
			}
			if(y > 127)
			{
				y  -= 128;
				nc  = 0;
			}

			xCord = ((float)x - 64.0f)/128.0f * ratio;
			yCord = ((float)y - 64.0f)/128.0f;

			if(ncode > 24 && ncode <=1100)
				yCord -= 24.0f/128.0f;

			if(nc == 2)
			{
				*(pvFontVert + *lineIndexStart    ) = xCord;
				*(pvFontVert + *lineIndexStart + 1) = yCord;
			}
			else if(nc == 1)
			{
				*(pvFontVert + *lineIndexStart + 2) = xCord;
				*(pvFontVert + *lineIndexStart + 3) = yCord;
				(*lineIndexStart) += 4;
				lineVertNum += 2;
				*(pvFontVert + *lineIndexStart    ) = xCord;
				*(pvFontVert + *lineIndexStart + 1) = yCord;
			}
			else
			{
				*(pvFontVert + *lineIndexStart + 2) = xCord;
				*(pvFontVert + *lineIndexStart + 3) = yCord;
				(*lineIndexStart) += 4;

				lineVertNum += 2;
				pvFGD->lineVertNum  = lineVertNum;
				pvFGD->pointsStart  = 0;
				pvFGD->pointVertNum = 0;

				return(lineVertNum);
			}
		}
	}
}

int getFontData(char* fontPath, unsigned long * pvFontIndex, unsigned char *pvFontLib)
{
	FILE           *fp1, *fp2;
	char           fileName[80];
	int            fileSize = 0;
	unsigned char  *pbuffer;

	if(NULL == fontPath || NULL == pvFontIndex || NULL == pvFontLib)
	{
		printf("\nincorrect parameters for getFontData\n");
		return -1;
	}
	else
	{
		sprintf(fileName, "%s/%s", fontPath,vFontIndexName);
		fp1 = fopen(fileName, "rb");
		printf("fileName = %s\n", fileName);
		sprintf(fileName, "%s/%s", fontPath,vFontLibName);
		fp2 = fopen(fileName, "rb");
		printf("fileName = %s\n", fileName);

		if (fp1 == NULL || fp2 == NULL)
		{
			if(fp1 != NULL) fclose(fp1);
			if(fp2 != NULL) fclose(fp2);
			printf("file open error\n");
			return -1;
		}

			// read file
		fseek(fp1, 0, SEEK_END);
		fileSize = ftell(fp1);

		pbuffer = (unsigned char *)(pvFontIndex);
		fseek(fp1, 0, SEEK_SET);
		fread(pbuffer, 1, fileSize, fp1);
	
		fseek(fp2,0,SEEK_END);
		fileSize = ftell(fp2);

		pbuffer = (unsigned char *)(pvFontLib);
		fseek(fp2,0,SEEK_SET);
		fread(pbuffer, 1, fileSize, fp2);

		fclose(fp1);
		fclose(fp2);
	}
	g_vFontInited = 1;
	return 0;
}
int g_vIndex[96*96 + 128];

int InitVectorText(char* fontPath)
{
	int            ncode = 0;
	int            i = 0, j = 0;
	int            retVal = 0;
	unsigned long  tempin = 0, tempout = 0;
	unsigned long  lineIndexStart = 4, pointIndexStart = 4;

	g_pvFontIndex = (unsigned long *)malloc (sizeof(unsigned long) * C_Font_Index);
	g_pvFontLib   = (unsigned char *)malloc (sizeof(unsigned char) * C_Font_Lib);


	retVal = getFontData(fontPath, g_pvFontIndex, g_pvFontLib);
	if(0 != retVal)
		return retVal;
#ifdef BIGENDIAN
	for(i = 0; i < C_Font_Index; i++)
	{
		tempin = g_pvFontIndex[i];
		tempout = ((tempin & 0xFF000000) >> 24) + ((tempin & 0x00FF0000) >> 8)
					+ ((tempin & 0x0000FF00) << 8) + ((tempin & 0x000000FF) << 24);
		g_pvFontIndex[i] = tempout;
	}
#endif
	
	pvFontGlyphDesc= (VFONT_GLYPH_DESC *)malloc(sizeof(VFONT_GLYPH_DESC) * (96 * 96 + 128));
    
	for (i = 0; i < 96*96 + 128; i++)
	{
		(pvFontGlyphDesc+i)->linesStart   = 0;
		(pvFontGlyphDesc+i)->lineVertNum  = 0;
		(pvFontGlyphDesc+i)->pointsStart  = 0;
		(pvFontGlyphDesc+i)->pointVertNum = 0;
	}

	//gb2312
	pvFontVert = (GLfloat *)malloc (sizeof(float) * 0xD0000);

	for(i = 0; i < 96; i++)
	{
		for(j = 0; j < 96; j++)
		{
			ncode = i * 100 + j;
			if(ncode == 653) ncode = 37; //653=φ (37)
			parseFontGlyph(ncode, pvFontGlyphDesc + i*96 +j, &lineIndexStart, &pointIndexStart, 1.0f);
		}
	}

	//ascii
	for(i = 32; i < 127; i++)
	{
		ncode = i + 268;
		parseFontGlyph(ncode, pvFontGlyphDesc + 96*96 + i, &lineIndexStart, &pointIndexStart, 0.5f);
	}

	printf("\nlineIndex  = 0x%6X\npointIndex = 0x%6X", lineIndexStart, pointIndexStart);
	
	for(i = 0; i < 96*96; i++)
	{
		g_vIndex[i] = rand()%(96*96);
	}
	free(g_pvFontIndex);
	g_pvFontIndex = NULL;
	free(g_pvFontLib);
	g_pvFontIndex = NULL;
	return 0;

}



void DrawVectorText(const char* string)
{
	int loop = 0;
	int loopCode = 0;
	float pt1[3], pt2[3];
	int codeCount;
	float width = 16.0f, height = 12.0f;
	unsigned long index = 0;
	int i = 0, j = 0;
	int nums = 0;
	

//	glLoadIdentity();
//	glScalef(4.0, 4.0, 0.0);
	glPushMatrix(); 
	glLoadIdentity();
	glEnableClientState (GL_VERTEX_ARRAY);
    glVertexPointer (2, GL_FLOAT, 0, pvFontVert);
//	codeCount = english_code(string);

//	glTranslatef( - (codeCount+1)/2.0f*width, 0.0f, 0.0f);
//	glScalef( width, height, 1.0f);
	glLineWidth(width / 12.0f);
	glPointSize(width / 12.0f - 0.5f);
#if 0
	for(loopCode = 0; loopCode < codeCount; loopCode++)
	{
		g_word_stroke_count = (pvFontGlyphDesc + g_codes[loopCode])->lineVertNum;
		index = (pvFontGlyphDesc + g_codes[loopCode])->linesStart;
		

		glColor3f(0.0f, 1.0f, 0.0f); 
		glTranslatef(width/width, 0.0f, 0.0f);
//		glScalef(3.0, 3.0f, 0.0f);

		glDrawArrays(GL_LINES, (pvFontGlyphDesc + g_codes[loopCode])->linesStart/2, g_word_stroke_count);
		glDrawArrays(GL_POINTS, (pvFontGlyphDesc + g_codes[loopCode])->linesStart/2, g_word_stroke_count);
#if 0
		glBegin(GL_LINES);
		for(loop = 1; loop <= g_word_stroke_count; loop++)
		{
			glVertex2f(*(pvFontVert + index), *(pvFontVert + index + 1));
			index += 2;
			glVertex2f(*(pvFontVert + index), *(pvFontVert + index + 1));
			index += 2;
		}
		glEnd();

		index = (pvFontGlyphDesc + g_codes[loopCode])->linesStart;
		glBegin(GL_POINTS);
		for(loop = 1; loop <= g_word_stroke_count; loop++)
		{
			glVertex2f(*(pvFontVert + index), *(pvFontVert + index + 1));
			index += 2;
			glVertex2f(*(pvFontVert + index), *(pvFontVert + index + 1));
			index += 2;
		}
		glEnd();
#endif
	}
#else
	glColor3f(0.0f, 1.0f, 0.0f); 
	glScalef(width, height,1.0f);

	glLockArraysEXT(0,0xC004C/2);
	glTranslatef(48*width/width, -48 * height/height, .0f);
	for(i = 0; i < 96; i++)
	{
		glTranslatef(-96*width/width,  height/height, .0f);
		for(j = 0; j< 96; j++)
		{
//			glPushMatrix();
//			glLoadIdentity();
//			glPopMatrix();
//			glLineWidth(width / 12.0f);
//			glPointSize(width / 12.0f - 0.5f);
			glTranslatef(1.0f, 0.0f, 0.0f);
			
			nums  = (pvFontGlyphDesc + 96 *(i + 0) + j)->lineVertNum;
			index = (pvFontGlyphDesc + 96 *(i + 0) + j)->linesStart;
	//		nums  = (pvFontGlyphDesc + g_vIndex[96*i + j])->lineVertNum;
	//		index = (pvFontGlyphDesc + g_vIndex[96*i + j])->linesStart;
	//		nums  = (pvFontGlyphDesc + 96*96 + j)->lineVertNum;
	//		index = (pvFontGlyphDesc + 96*96 + j)->linesStart;

			glDrawArrays(GL_LINES, index/2, nums);
//			if(height / 12.0f >=1.5f)
				glDrawArrays(GL_POINTS, index/2, nums);


#if 0
			glBegin(GL_LINES);
			for(loop = 0; loop < nums/2; loop++)
			{
				glVertex2f(*(pvFontVert + index), *(pvFontVert + index + 1));
				index += 2;
				glVertex2f(*(pvFontVert + index), *(pvFontVert + index + 1));

				index += 2;
			}
			glEnd();
			
			index = (pvFontGlyphDesc + 96 *(i + 0) + j)->linesStart;
			glBegin(GL_POINTS);
			for(loop = 0; loop < nums/2; loop++)
			{
				glVertex2f(*(pvFontVert + index), *(pvFontVert + index + 1));
				index += 2;
				glVertex2f(*(pvFontVert + index), *(pvFontVert + index + 1));;
				index += 2;
			}
			glEnd();
#endif	
		}
	}
	glUnlockArraysEXT();
#endif
	glPopMatrix(); 
}


void dlInitGL( const unsigned int ScreenNum )
{
    // Note that the order in which the functions are invoked here is
    //   generally not important, but remember to respect the fact that
    //   OpenGL is a state machine.

    // Enable 2D Textures, back-face culling and the depth buffer:
    glEnable( GL_TEXTURE_2D );
    glEnable( GL_DEPTH_TEST );
    glEnable( GL_CULL_FACE );
    glEnable (GL_LINE_SMOOTH);
    glEnable (GL_POINT_SMOOTH);
    glEnable (GL_BLEND);
    glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glHint (GL_LINE_SMOOTH_HINT, GL_NICEST);
    glHint (GL_POINT_SMOOTH_HINT, GL_NICEST);

    // Ask OpenGL to interpolate colors between vertices.  GL_FLAT
    //   is faster, but we're only doing a single cube - let's make
    //   it look nice.
    glShadeModel( GL_SMOOTH );

    // Set up the blending equation, used later to give the banner
    //   logo its transparent background:
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Define a single diffuse light source.  The VSA100 does all its
    //   lighting in software, so using too many lights will hurt
    //   performance:
    // Final '0' coordinate specifies 'inifinite' light source:
//    float lightPos[]   = { 1.0f, 1.0f, 1.0f, 0.0f };
    // Note that the alpha lighting component is ignored.
//    float lightColor[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    // Set the color:
//    glLightfv( GL_LIGHT0, GL_DIFFUSE, lightColor );
    // Set the position:
    // WARNING - in a real application, you'll want to do this after
    //           placing the camera (per frame).  If the camera were
    //           moving, we'd have unexpected lighting results.
//    glLightfv( GL_LIGHT0, GL_POSITION, lightPos );
    // Turn on the light - note that the light is enabled, but
    //   OpenGL's lighting is not.  Until we enable lighting, this
    //   light will have no effect on the rendered scene.
//    glEnable( GL_LIGHT0 );
    // Enable lighting:
//    glEnable( GL_LIGHTING );

    // Allow the material color to be defined by the vertex color
    glColorMaterial( GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE );
    glEnable( GL_COLOR_MATERIAL );

    // Set default viewing projection
    // First, we must specify that we wish to modify the projection
    //   matrix.  By default, operations modify the modelview matrix.
    //   By specifying seperate projection and modelview matrices,
    //   we only need to specify the modelview transformations on a
    //   per-frame basis.  The seperation can also allow the
    //   video driver to optimize for certain matrix cases.
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();   // Never assume the matrix is sane by default.

    // Specify a perspective transformation.  Details on this function
    //   and its behavior can be found in the OpenGL Reference Manual:
    gluPerspective(90.0f, (float)DISPLAY_WIDTH/((float)DISPLAY_HEIGHT), 1, 100);

    // Return to the modelview matrix, since that is what we wish
    //   to modify in order to place objects in the scene.
    glMatrixMode(GL_MODELVIEW);
    // ...And clear it to the identity so we have an explictly
    //   defined state:
    glLoadIdentity();

    // Load our textures

  //  if( ScreenNum == 1 )
    {
        // First, we allocate an OpenGL texture name which will be used
        //   to refer to the uploaded texture:
        glGenTextures( 1, &g_TextureNames[0] );

        // Next, we bind a texture name for use in all subsequent texture
        //   operations (think 'state machine').
        glBindTexture( GL_TEXTURE_2D, g_TextureNames[0] );
    }
 //   else if( ScreenNum == 2 )
 //   {
        // First, we allocate an OpenGL texture name which will be used
        //   to refer to the uploaded texture:
 //       glGenTextures( 1, &g_TextureNames[1] );

        // Next, we bind a texture name for use in all subsequent texture
        //   operations (think 'state machine').
 //       glBindTexture( GL_TEXTURE_2D, g_TextureNames[1] );
 //   }

    // Set the parameters to be used with this texture:
    glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR );
    glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR );
    glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_CLAMP );
    glTexParameteri( GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_CLAMP );
    // Finally, specify the data to be uploaded and its format:
    glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA8, 256, 256, 0, GL_RGBA, GL_UNSIGNED_BYTE, altLogo );

    return;
}


#if 1
#define TDL_NUM 32
#define LDL_NUM  64
//#define INCLUDE_TRILIST
#define INCLUDE_LINELIST
//#define INCLUDE_POINTLIST
GLuint pointList[LDL_NUM];
GLuint triList[TDL_NUM];
GLuint lineList[LDL_NUM];
void dlRender(int ScreenNum)
{
    int tdlNum = TDL_NUM;
    int ldlNum = LDL_NUM;
    int triPerDL = 2048;//2*1024*1024;
    int linePerDL = 64;
	float colorStep = 0.5f/ldlNum; 
	float xstep = 1024.0f/linePerDL;
	float swing = 1.0f;
	float ystep = 1024.0f/ldlNum;

    float temp_x,temp_y;
    int k;
    int m,n;
 
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glEnable(GL_POINT_SMOOTH);
    glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);

    glEnable(GL_LINE_SMOOTH);
    glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
 //   glPointSize(10.0f);
 //   glLineWidth(10.0f);
 
 //   glColor3f(1.0f, 1.0f, 1.0f);
//    bDrawed = false;
    if(!bDrawed)
    {
    	
#ifdef INCLUDE_TRILIST
    	genTriVertex2M();
        for(k = 0; k < tdlNum; k++)
        {
        	triList[k] = glGenLists(1);
            glNewList(triList[k], GL_COMPILE);
            glColor3f(0.1f, 0.1f, 1.0f);
            glBegin(GL_TRIANGLES);
            for(n = 0; n < triPerDL; n++)
            {
                glVertex2f(tri_buffer[k * triPerDL + n].v1.coords[0], tri_buffer[k * triPerDL + n].v1.coords[1]);
                glVertex2f(tri_buffer[k * triPerDL + n].v2.coords[0], tri_buffer[k * triPerDL + n].v2.coords[1]);
                glVertex2f(tri_buffer[k * triPerDL + n].v3.coords[0], tri_buffer[k * triPerDL + n].v3.coords[1]); 
            }
            glEnd();
#if 1
            glBegin(GL_LINE_STRIP);
            for(n = 0; n < linePerDL / 2; n++)
            {
            	glColor3f(1.0f/linePerDL * n * 2, 0.5f + k * colorStep, 0.2f);
                glVertex2f(-512 + (2 * n     ) * xstep, -512 + (k      ) * ystep);
                glColor3f(1.0f/linePerDL * (n * 2 + 1), 0.5f + k * colorStep, 0.2f);
                glVertex2f(-512 + (2 * n + 1 ) * xstep, -512 + (k + swing) * ystep);
            }
            glColor3f(1.0f, 0.5f + k * colorStep, 0.2f);
            glVertex2f(-512 + (2 * n     ) * xstep, -512 + (k      ) * ystep);
            glEnd();
            glBegin(GL_POINTS);
            glColor3f(1.0f/linePerDL * 1.0f, 0.5f + k * colorStep, 0.2f);
            glVertex2f(-512 + xstep, -512 + (k + swing) * ystep);
            for(n = 1; n < linePerDL / 2; n++)
            {
            	glColor3f(1.0f/linePerDL * n * 2, 0.5f + k * colorStep, 0.2f);
                glVertex2f(-512 + (2 * n     ) * xstep, -512 + (k      ) * ystep);
                glColor3f(1.0f/linePerDL * (n * 2 + 1), 0.5f + k * colorStep, 0.2f);
                glVertex2f(-512 + (2 * n + 1 ) * xstep, -512 + (k + swing) * ystep);
            }
            glEnd();
#endif
            glEndList(); 
        }
#endif

#ifdef INCLUDE_LINELIST
        for(k = 0; k < ldlNum; k++)
        {
        	float colorStep = 0.5f/ldlNum; 
        	float xstep = 1024.0f/linePerDL;
        	float swing = 1.0f;
        	float ystep = 1024.0f/ldlNum;
        	lineList[k] = glGenLists(1);
            glNewList(lineList[k], GL_COMPILE);

            glBegin(GL_LINE_STRIP);
            for(n = 0; n < linePerDL / 2; n++)
            {
            	glColor3f(1.0f/linePerDL * n * 2, 0.5f + k * colorStep, 0.2f);
                glVertex2f(-512 + (2 * n     ) * xstep, -512 + (k      ) * ystep);
                glColor3f(1.0f/linePerDL * (n * 2 + 1), 0.5f + k * colorStep, 0.2f);
                glVertex2f(-512 + (2 * n + 1 ) * xstep, -512 + (k + swing) * ystep);
            }
            glColor3f(1.0f, 0.5f + k * colorStep, 0.2f);
            glVertex2f(-512 + (2 * n     ) * xstep, -512 + (k      ) * ystep);
            glEnd();

            glEndList(); 
        }
#endif

#ifdef INCLUDE_POINTLIST        
        for(k = 0; k < ldlNum; k++)
        {
        	float colorStep = 0.5f/ldlNum; 
        	float xstep = 1024.0f/linePerDL;
        	float swing = 1.0f;
        	float ystep = 1024.0f/ldlNum;
        	pointList[k] = glGenLists(1);
            glNewList(pointList[k], GL_COMPILE);

            glBegin(GL_POINTS);
            glColor3f(1.0f/linePerDL * 1.0f, 0.5f + k * colorStep, 0.2f);
            glVertex2f(-512 + xstep, -512 + (k + swing) * ystep);
            for(n = 1; n < linePerDL / 2; n++)
            {
            	glColor3f(1.0f/linePerDL * n * 2, 0.5f + k * colorStep, 0.2f);
                glVertex2f(-512 + (2 * n     ) * xstep, -512 + (k      ) * ystep);
                glColor3f(1.0f/linePerDL * (n * 2 + 1), 0.5f + k * colorStep, 0.2f);
                glVertex2f(-512 + (2 * n + 1 ) * xstep, -512 + (k + swing) * ystep);
            }
            glEnd();

            glEndList(); 
        }        
#endif
        bDrawed = TRUE;
        if(tri_buffer)
        {
            free(tri_buffer);
            tri_buffer = NULL;
        }
        printf("Create display list complete\n");
    }
    else
    {
#ifdef INCLUDE_TRILIST
        for(m = 0; m < tdlNum; m++)
        {
        	glColor3f(0.1f, 0.5f, 0.1f);
            glCallList(triList[m]);
        }
#endif

        for(m = 0; m < ldlNum; m++)
        {
        	float colorStep = 0.5f/ldlNum; 
        	glColor3f(0.2f, 0.5f + m * colorStep, .4f);

#ifdef INCLUDE_LINELIST        	
            glLineWidth( 1.0f + m * (1.0f / ldlNum));
 //       	glLineWidth(1.4f);
            glCallList(lineList[m]);
#endif

#ifdef INCLUDE_POINTLIST
            glPointSize( 1.0f + m * (1.0f / ldlNum));
            glCallList(pointList[m]);
#endif           
        }
    }
    return;
}
#endif
