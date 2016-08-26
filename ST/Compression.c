/*******************************************************************************
This is the confidential, unpublished property of Core Avionics & Industrial LLC. Receipt or
possession of it does not convey any rights to divulge, reproduce, use, or allow others to use it
without the specific written authorization of Core Avionics & Industrial LLC. and use must
conform strictly to the license agreement between user and Core Avionics & Industrial LLC.

Copyrights Core Avionics & Industrial LLC. All rights reserved.

********************************************************************************
Project Name: Argus
File Name:    s3tcCompression.c
Purpose:      Test s3tc compression functionality
*******************************************************************************/


/***************************************************************
 Includes
***************************************************************/
#if 0
#include <coreavi_display/coreavi_display.h>
#include "../hwconfig.h"
#include <global/coreavi_globals.h>
#include <gl/gl.h>              /* GL header file */
#include <gl/glext.h>
#include <EGL/egl.h>              /* EGL header file */
#include <glu/glu.h>              /* GLU header file */
#include <stdio.h>
#endif

#include <stdio.h>           // for 'printf' & 'sprintf'
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <glu/glu.h>    
#include <e4690/e4690_display.h>
#include <coreavi_display/coreavi_display.h>
#include <global/coreavi_globals.h>
#include <gl/gl.h>    
//#include <gl/glext.h>/* GL heade r file */
#include <EGL/egl.h>              /* EGL header file */
//#include <EGL/eglext.h>

#include <os_helper/os_helper.h>
#include <math.h>

#include <bit/bit.h>
#include <taskLib.h>

#include <bit/bit.h>
/***************************************************************
 Macro Definitions
***************************************************************/
#if 0
#define DISPLAY_WIDTH      640
#define DISPLAY_HEIGHT     480
#define DISPLAY_COLOR_DEPTH     32
#define DISPLAY_SCREEN_REFRESH  60
#define DISPLAY_SCREEN_HEAD     OUTPUT_HEAD_DEFAULT
#define DISPLAY_OUTPUT_TYPE     OUTPUT_TYPE_DEFAULT
#define DISPLAY_CARD_ID         0
#endif

#define DISPLAY_WIDTH     1024 /*800*/
#define DISPLAY_HEIGHT    768 /*600*/
#define DISPLAY_WIDTH2      1024
#define DISPLAY_HEIGHT2     768
#define DISPLAY_COLOR_DEPTH     32
#define DISPLAY_SCREEN_REFRESH  60
#define DISPLAY_SCREEN_HEAD     OUTPUT_HEAD_PRIMARY   
#define DISPLAY_SCREEN_HEAD2     OUTPUT_HEAD_SECONDARY  
#define DISPLAY_OUTPUT_TYPE     OUTPUT_TYPE_DVI
#define DISPLAY_OUTPUT_TYPE2     OUTPUT_TYPE_DVI
//#define DISPLAY_OUTPUT_TYPE     E4690_OUTPUT_TYPE_LVDS
//#define DISPLAY_OUTPUT_TYPE2     E4690_OUTPUT_TYPE_LVDS
#define DISPLAY_CARD_ID 0

GLuint list;

/***************************************************************
 Global Variables
***************************************************************/

static EGLDisplay      f_dpy;               /* Native display */
static EGLNativeWindowType    f_win;               /* EGL Window */
static EGLContext      f_eglContext;        /* EGL Context */
static EGLConfig       f_config;            /* EGL Config */
static EGLSurface      f_surface;           /* EGL Surface */
static EGLNativeDisplayType f_disp_id;
static EGLint          f_num_configs;       /* EGLConfig */
static EGLint          f_attribs[]         /* EGL Config */
                            = { EGL_BUFFER_SIZE, 32, EGL_DEPTH_SIZE, 24, EGL_NONE }; 

static CoreAVIDisplayMode  f_dispMode =         
    { DISPLAY_CARD_ID,
      DISPLAY_SCREEN_HEAD, 
       DISPLAY_OUTPUT_TYPE, 
      DISPLAY_WIDTH, 
      DISPLAY_HEIGHT, 
      DISPLAY_SCREEN_REFRESH,
      DISPLAY_COLOR_DEPTH, 
      FALSE, NULL, NULL };


static GLuint texID = 0;


/***************************************************************
 DataTypes
***************************************************************/

/* There are no data types for this module */


/***************************************************************
 Function Prototypes
***************************************************************/

static void F_InitializeWindow(void);

void ggmSetColorRGB(float red, float green, float blue);
void ggmFillRect(float x, float y, float w, float h,int u_d);/*实心矩形框*/
void ggmLine(float x1, float y1, float x2, float y2);/*画直线段*/



extern  int i2cRead 
    (
    int             unit,
    unsigned int    deviceAddress,	/* Device's I2C bus address */
    int             deviceType,
    unsigned int    startBlk,	/* starting block to read, or temp reg # */
    unsigned int    numBlks,	/* number of blocks to read, or temp reg size (1 or 2) */
    char *          pBuf			/* pointer to buffer to receive data */
    ) ;


extern  int i2cRead2
    (
    int             unit,
    unsigned int    deviceAddress,	/* Device's I2C bus address */
    unsigned int    startBlk,	/* starting block to read, or temp reg # */
    unsigned int    numBlks,	/* number of blocks to read, or temp reg size (1 or 2) */
    char *          pBuf			/* pointer to buffer to receive data */
    ) ;

extern int i2cWrite 
    (
    int            unit,
    UINT32         deviceAddress,	 /* Device's I2C bus address */
    int            deviceType,
    unsigned int   startBlk,	 /* starting block to write */
    unsigned int   numBlks,	 /* number of blocks to write */
    char *         pBuf			 /* pointer to buffer of send data */
    ) ;

extern int i2cWrite2
    (
    int          unit,
    UINT32       deviceAddress,	/* Device's I2C bus address */
    unsigned int startBlk,	/* starting block to write */
    unsigned int numBlks,	/* number of blocks to write */
    char *       pBuf			/* pointer to buffer of send data */
    );
/******************************************************************************
*
* usrAppInit - initialize the users application
*/ 

extern void sysUsDelay
    (
    int    delay        /* length of time in microsec to delay */
    );

#define FGGA_I2C_ID 0x38
#define DEVICE_TYPE 8
#define LEN 1
void iicl()
{
   unsigned char i = 0,j=0;
   unsigned char hand = 0xa5;
   unsigned char hand1 = 0xaa;
   unsigned char rehand = 0x5a;
   char check=0x00 ;
   unsigned char checkF = 0x00;
   unsigned char sEnd = 0xfd;
   unsigned char clear = 0x00;
   unsigned char ErrNum = 0x00;
   int RetVal =10;
   int reErrNum = 0;
   unsigned char reCheck = 0xf5;
   int type=0;
   char loopin[5]={0x31,0x32,0x33,0x34,0x35};
   char loopin2[5]={0x21,0x22,0x23,0x24,0x25};
   char loopout[5]={0,0,0,0,0};
   int flag=0,count=0;
  
#if 0
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xfe, LEN, (char *)&hand);
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xff, LEN, (char *)&hand1);
   while(1)//等待FPGA读完数据
   {
	
	   taskDelay(10);
	   i2cRead( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xfe, 1, (char *)check);
	   taskDelay(10);
	   printf("FPGA  complete2:[%d]=%x,%x,%x,%x,%x, \n",i,check[0],check[1],check[2],check[3],check[4]);
	   i++;
   }
#endif  
 while(1)
 {
#if 0
	if(flag==0)
	{
		i2cWrite2( 0, FGGA_I2C_ID , 0x10, 5, loopin);
		printf("loopin\n"  );
		flag=1;
	}
	else
	{
		i2cWrite2( 0, FGGA_I2C_ID , 0x10, 5, loopin2);
		printf("loopin2\n"  );
		flag=0;
		
	}

	i2cWrite( 0, FGGA_I2C_ID ,DEVICE_TYPE, 0x10, 1, loopin);
	i2cRead2( 0, FGGA_I2C_ID ,0x10,1, loopout);
#endif
	i++;
	i2cWrite( 0, FGGA_I2C_ID ,DEVICE_TYPE, 0x10, 5, loopin );
	i2cRead ( 0, FGGA_I2C_ID ,DEVICE_TYPE, 0x10, 5, loopout);
	
	//i2cRead2( 0, FGGA_I2C_ID ,0x10,5, loopout);
	
	if((loopout[0]!=loopin[0])||(loopout[1]!=loopin[1])||(loopout[2]!=loopin[2])||(loopout[3]!=loopin[3])||(loopout[4]!=loopin[4]))
	    printf("FPGAw  complete2:[%d]=%x,%x,%x,%x,%x, \n\n",count,loopout[0],loopout[1],loopout[2],loopout[3],loopout[4]);
	count++;
	if(count%10000==0)
		printf("FPGA3  complete2:[%d]=%x,%x,%x,%x,%x, \n\n",j++,loopout[0],loopout[1],loopout[2],loopout[3],loopout[4]);
	
	
 }
   
   
 while(1)
 {
	 

   
   for( i = 0 ; i<0xf1 ;i++)	
   {
	   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , i, LEN, (char *)&i);
   }
   RetVal = i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xff, LEN, (char *)&hand);
   printf("RetVal=%d\n",RetVal);
   
   
   while(check!=0x5a)//等待FPGA读完数据
   {
	   i2cRead( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xff, LEN, (char *)&check);
	   printf("Waiting for FPGA read end :%x\n",check);
   }
   i2cRead( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xf1, LEN, (char *)&ErrNum);
   printf("FPGA read ErrNum=%d\n",ErrNum);
   
   printf("FPGA read complete\n");
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xff, LEN, (char *)&sEnd);//正序读写完毕
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xf1, LEN, (char *)&clear);//清除错误计数器
   printf("P2020 forward write end\n");
   
   /********************FPGA write******************************/
   while(checkF!=0xa5)//2020查询FPGA数据是否填充完整
     {
  	   i2cRead( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xfe, LEN, (char *)&checkF);
     }
   //p2020读取00-f0数据
   for( i = 0 ; i<0xf1 ;i++)	
   {
	   i2cRead( 0, FGGA_I2C_ID , DEVICE_TYPE , i, LEN, (char *)&reCheck);
	   if(i!=(0xf0-reCheck))
	   {
		   reErrNum++;//2020读写错误计数
		   printf("ERR  for FPGA read  [%d ]=%x\n",i,reCheck);
		   
	   }
   }
   printf("FPGA write reErrNum=%d\n",reErrNum);
   //FPGA写错误计数
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xf2, LEN, (char *)&reErrNum);
   //2020设置握手寄存器0xfe
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xfe, LEN, (char *)&rehand);
   //测试完毕
   printf("I2C LOOP test complete!\n");
   //taskDelay(1);
   reErrNum=0;
 }   
   
   
   
	
}


void iic()
{
   unsigned char i = 0,j=0;
   unsigned char hand = 0xa5;
   unsigned char hand1 = 0xaa;
   unsigned char rehand = 0x5a;
   char check[5]={0} ;
   unsigned char checkF = 0x00;
   unsigned char sEnd = 0xfd;
   unsigned char clear = 0x00;
   unsigned char ErrNum = 0x00;
   int RetVal =10;
   int reErrNum = 0;
   unsigned char reCheck = 0xf5;
   int type=0;
   char loopin[5]={0x31,0x32,0x33,0x34,0x35};
   char loopin2[5]={0x21,0x22,0x23,0x24,0x25};
   char loopout[5]={0,0,0,0,0};
   int flag=0,count=0;
  
#if 1
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xfe, LEN, (char *)&hand);
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xff, LEN, (char *)&hand1);
   while(1)//等待FPGA读完数据
   {
	
	   taskDelay(10);
	   i2cRead( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xfe, 1, (char *)check);
	   taskDelay(10);
	   printf("FPGA  complete2:[%d]=%x,%x,%x,%x,%x, \n",i,check[0],check[1],check[2],check[3],check[4]);
	   i++;
   }
#endif  
 while(1)
 {
#if 0
	if(flag==0)
	{
		i2cWrite2( 0, FGGA_I2C_ID , 0x10, 5, loopin);
		printf("loopin\n"  );
		flag=1;
	}
	else
	{
		i2cWrite2( 0, FGGA_I2C_ID , 0x10, 5, loopin2);
		printf("loopin2\n"  );
		flag=0;
		
	}

	i2cWrite( 0, FGGA_I2C_ID ,DEVICE_TYPE, 0x10, 1, loopin);
	i2cRead2( 0, FGGA_I2C_ID ,0x10,1, loopout);
#endif
	i++;
	i2cWrite( 0, FGGA_I2C_ID ,DEVICE_TYPE, 0x10, 5, loopin );
	i2cRead ( 0, FGGA_I2C_ID ,DEVICE_TYPE, 0x10, 5, loopout);
	
	//i2cRead2( 0, FGGA_I2C_ID ,0x10,5, loopout);
	
	if((loopout[0]!=loopin[0])||(loopout[1]!=loopin[1])||(loopout[2]!=loopin[2])||(loopout[3]!=loopin[3])||(loopout[4]!=loopin[4]))
	    printf("FPGAw  complete2:[%d]=%x,%x,%x,%x,%x, \n\n",count,loopout[0],loopout[1],loopout[2],loopout[3],loopout[4]);
	count++;
	if(count%10000==0)
		printf("FPGA3  complete2:[%d]=%x,%x,%x,%x,%x, \n\n",j++,loopout[0],loopout[1],loopout[2],loopout[3],loopout[4]);
	
	
 }
   
   
 while(1)
 {
	 

   
   for( i = 0 ; i<0xf1 ;i++)	
   {
	   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , i, LEN, (char *)&i);
   }
   RetVal = i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xff, LEN, (char *)&hand);
   printf("RetVal=%d\n",RetVal);
   
   
   while(check!=0x5a)//等待FPGA读完数据
   {
	   i2cRead( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xff, LEN, (char *)&check);
	   printf("Waiting for FPGA read end :%x\n",check);
   }
   i2cRead( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xf1, LEN, (char *)&ErrNum);
   printf("FPGA read ErrNum=%d\n",ErrNum);
   
   printf("FPGA read complete\n");
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xff, LEN, (char *)&sEnd);//正序读写完毕
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xf1, LEN, (char *)&clear);//清除错误计数器
   printf("P2020 forward write end\n");
   
   /********************FPGA write******************************/
   while(checkF!=0xa5)//2020查询FPGA数据是否填充完整
     {
  	   i2cRead( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xfe, LEN, (char *)&checkF);
     }
   //p2020读取00-f0数据
   for( i = 0 ; i<0xf1 ;i++)	
   {
	   i2cRead( 0, FGGA_I2C_ID , DEVICE_TYPE , i, LEN, (char *)&reCheck);
	   if(i!=(0xf0-reCheck))
	   {
		   reErrNum++;//2020读写错误计数
		   printf("ERR  for FPGA read  [%d ]=%x\n",i,reCheck);
		   
	   }
   }
   printf("FPGA write reErrNum=%d\n",reErrNum);
   //FPGA写错误计数
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xf2, LEN, (char *)&reErrNum);
   //2020设置握手寄存器0xfe
   i2cWrite( 0, FGGA_I2C_ID , DEVICE_TYPE , 0xfe, LEN, (char *)&rehand);
   //测试完毕
   printf("I2C LOOP test complete!\n");
   //taskDelay(1);
   reErrNum=0;
 }   
   
   
   
	
}



void getgput()
{
	struct carddata_bit_test_temperature temperature={0,{0,0,0},0};
		bit_test tempTest = {BIT_MODULE_CARDDATA, BIT_CARDDATA_TEMPERATURE, &temperature, sizeof(temperature)};
	    
	    if (BIT_SUCCESS != CoreAVIRunBitTests(1, &tempTest))
	    {
	    	printf("CARDDATA: Temperature test FAILED!\n\n");
	    }
	    else
	    {
			printf("TS0 / TS1 / TS2: %0.1f / %0.1f / %0.1f Celsius, Fan %0.0f%%\n", temperature.sensorTemp[0], temperature.sensorTemp[1], temperature.sensorTemp[2], temperature.fanDutyCycle);
			printf("CARDDATA: Temperature test PASSED!\n\n");
	    }
}

void getTemperature()
{
	struct carddata_bit_test_temperature temperature={0,{0,0,0},0};
	bit_test tempTest = {BIT_MODULE_CARDDATA, BIT_CARDDATA_TEMPERATURE, &temperature, sizeof(temperature)};
    char buf[4];
    
    //get gpu temperature
    i2cRead( 0, 0x52, 4, 0x42, 2, &buf[0]);
    //get cpu temperature
    i2cRead( 0, 0x53, 4, 0x42, 2, &buf[2]);

    int degree = (int)(buf[1]) - 64;
    printf("\nTemperature of M96 is %d degree\n", degree);
    degree = (int)(buf[3]) - 64;
    printf("Temperature of P2020 is %d degree\n", degree);
    
    
    if (BIT_SUCCESS != CoreAVIRunBitTests(1, &tempTest))
    {
    	printf("CARDDATA: Temperature test FAILED!\n\n");
    }
    else
    {
		//printf("TS0 / TS1 / TS2: %0.1f / %0.1f / %0.1f Celsius, Fan %0.0f%%\n", temperature.sensorTemp[0], temperature.sensorTemp[1], temperature.sensorTemp[2], temperature.fanDutyCycle);
    	printf("TS0: %0.1f \n", temperature.sensorTemp[0]);
    			
    	printf("CARDDATA: Temperature test PASSED!\n\n");
    }
}



static GLfloat xRot = 0.0f;
static GLfloat yRot = 0.0f;

void ggmLine(float x1, float y1, float x2, float y2)/*画直线段*/
{
	glEnable (GL_LINE_SMOOTH);
	glEnable (GL_BLEND);
	glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glHint (GL_LINE_SMOOTH_HINT, GL_DONT_CARE);
	
	glBegin(GL_LINES);	
	glVertex2f(x1, y1);	
	glVertex2f(x2, y2);	
	glEnd();

	glDisable (GL_LINE_SMOOTH);
	glDisable(GL_BLEND);	
}
void RenderScene(void)
    {
    float fZ,bZ;


       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

       fZ = 100.0f;
       bZ = -100.0f;
       
       yRot += 1.0f;
                   

     yRot = (GLfloat)((const int)yRot % 360);

    glPushMatrix();
    glRotatef(xRot, 1.0f, 0.0f, 0.0f);
    glRotatef(yRot, 0.0f, 1.0f, 0.0f);


    glColor3f(1.0f, 0.0f, 0.0f);

    /**************/
    glLineWidth(5);
    ggmSetColorRGB(0, 255, 0);
    ggmLine(20,20,30,30);
    ggmLine(20,20,-30,-30);
    ggmLine(-20,-20,-30,-30);
    ggmLine(-20,-20,30,30);
    /**************/

    glBegin(GL_QUADS);
   
        glNormal3f(0.0f, 0.0f, 1.0f);	

     
        glVertex3f(-50.0f, 50.0f, fZ);
        glVertex3f(-50.0f, -50.0f, fZ);
        glVertex3f(-35.0f, -50.0f, fZ);
        glVertex3f(-35.0f,50.0f,fZ);

        
        glVertex3f(50.0f, 50.0f, fZ);
        glVertex3f(35.0f, 50.0f, fZ);
        glVertex3f(35.0f, -50.0f, fZ);
        glVertex3f(50.0f,-50.0f,fZ);

        
        glVertex3f(-35.0f, 50.0f, fZ);
        glVertex3f(-35.0f, 35.0f, fZ);
        glVertex3f(35.0f, 35.0f, fZ);
        glVertex3f(35.0f, 50.0f,fZ);

        
        glVertex3f(-35.0f, -35.0f, fZ);
        glVertex3f(-35.0f, -50.0f, fZ);
        glVertex3f(35.0f, -50.0f, fZ);
        glVertex3f(35.0f, -35.0f,fZ);

        
       
        glNormal3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-50.0f, 50.0f, fZ);
        glVertex3f(50.0f, 50.0f, fZ);
        glVertex3f(50.0f, 50.0f, bZ);
        glVertex3f(-50.0f,50.0f,bZ);
		
       
        glNormal3f(0.0f, -1.0f, 0.0f);
        glVertex3f(-50.0f, -50.0f, fZ);
        glVertex3f(-50.0f, -50.0f, bZ);
        glVertex3f(50.0f, -50.0f, bZ);
        glVertex3f(50.0f, -50.0f, fZ);

      
        glNormal3f(1.0f, 0.0f, 0.0f);
        glVertex3f(50.0f, 50.0f, fZ);
        glVertex3f(50.0f, -50.0f, fZ);
        glVertex3f(50.0f, -50.0f, bZ);
        glVertex3f(50.0f, 50.0f, bZ);

        
        glNormal3f(-1.0f, 0.0f, 0.0f);
        glVertex3f(-50.0f, 50.0f, fZ);
        glVertex3f(-50.0f, 50.0f, bZ);
        glVertex3f(-50.0f, -50.0f, bZ);
        glVertex3f(-50.0f, -50.0f, fZ);
    glEnd();

    glFrontFace(GL_CW);		

    glBegin(GL_QUADS);
        
        glNormal3f(0.0f, 0.0f, -1.0f);	

        glVertex3f(-50.0f, 50.0f, bZ);
        glVertex3f(-50.0f, -50.0f, bZ);
        glVertex3f(-35.0f, -50.0f, bZ);
        glVertex3f(-35.0f,50.0f,bZ);

       
        glVertex3f(50.0f, 50.0f, bZ);
        glVertex3f(35.0f, 50.0f, bZ);
        glVertex3f(35.0f, -50.0f, bZ);
        glVertex3f(50.0f,-50.0f,bZ);

        
        glVertex3f(-35.0f, 50.0f, bZ);
        glVertex3f(-35.0f, 35.0f, bZ);
        glVertex3f(35.0f, 35.0f, bZ);
        glVertex3f(35.0f, 50.0f,bZ);

     
        glVertex3f(-35.0f, -35.0f, bZ);
        glVertex3f(-35.0f, -50.0f, bZ);
        glVertex3f(35.0f, -50.0f, bZ);
        glVertex3f(35.0f, -35.0f,bZ);
	
     
    	glColor3f(0.75f, 0.75f, 0.75f);

    
        glNormal3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-35.0f, 35.0f, fZ);
        glVertex3f(35.0f, 35.0f, fZ);
        glVertex3f(35.0f, 35.0f, bZ);
        glVertex3f(-35.0f,35.0f,bZ);
		
        
        glNormal3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-35.0f, -35.0f, fZ);
        glVertex3f(-35.0f, -35.0f, bZ);
        glVertex3f(35.0f, -35.0f, bZ);
        glVertex3f(35.0f, -35.0f, fZ);

    
        glNormal3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-35.0f, 35.0f, fZ);
        glVertex3f(-35.0f, 35.0f, bZ);
        glVertex3f(-35.0f, -35.0f, bZ);
        glVertex3f(-35.0f, -35.0f, fZ);

       
        glNormal3f(-1.0f, 0.0f, 0.0f);
        glVertex3f(35.0f, 35.0f, fZ);
        glVertex3f(35.0f, -35.0f, fZ);
        glVertex3f(35.0f, -35.0f, bZ);
        glVertex3f(35.0f, 35.0f, bZ);
    glEnd();

    glFrontFace(GL_CCW);		

  
    glPopMatrix();


 
    }

void ChangeSize(int w, int h)
    {
    GLfloat nRange = 120.0f;
   
    if(h == 0)
        h = 1;

  
    glViewport(0, 0, w, h);


    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
#if 0
    if (w <= h) 
        glOrtho (-nRange, nRange, -nRange*h/w, nRange*h/w, -nRange*2.0f, nRange*2.0f);
    else 
        glOrtho (-nRange*w/h, nRange*w/h, -nRange, nRange, -nRange*2.0f, nRange*2.0f);
#endif 
    glOrtho (-512, 512, -384, 384, -1000.0f, 1000.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    }


void SetupRC()
    {
   
    GLfloat  whiteLight[] = { 0.45f, 0.45f, 0.45f, 1.0f };
    GLfloat  sourceLight[] = { 0.25f, 0.25f, 0.25f, 1.0f };
    GLfloat	 lightPos[] = { -50.f, 25.0f, 250.0f, 0.0f };

    glEnable(GL_DEPTH_TEST);	
    glFrontFace(GL_CCW);		
    glEnable(GL_CULL_FACE);		

   
    glEnable(GL_LIGHTING);

   
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,whiteLight);
    glLightfv(GL_LIGHT0,GL_AMBIENT,sourceLight);
    glLightfv(GL_LIGHT0,GL_DIFFUSE,sourceLight);
    glLightfv(GL_LIGHT0,GL_POSITION,lightPos);
    glEnable(GL_LIGHT0);

  
    glEnable(GL_COLOR_MATERIAL);
	
    
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);

    
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f );
    }
/*************************** start **********************************************/
void ggmSetColorRGB(float red, float green, float blue)
{
	glColor3f(red / 255., green / 255., blue / 255.);
}
void ggmFillRect(float x, float y, float w, float h,int u_d)/*实心矩形框*/
{
	if (u_d==0) /*x,y为左上角的坐标，高度向下加*/
	{
		glBegin(GL_POLYGON);
			glVertex2f(x, y);
			glVertex2f(x+w, y);
			glVertex2f(x+w, y+h);
			glVertex2f(x, y+h);
		glEnd();
	}
	else /*x,y为左下角的坐标，高度向上加*/
	{
		glBegin(GL_POLYGON);
			glVertex2f(x, y);
			glVertex2f(x+w, y);
			glVertex2f(x+w, y-h);
			glVertex2f(x, y-h);
		glEnd();
	}
}
/******************************** end **************************************/
int ad10(void)
{
	static int i = 0;

   /*P CALL TcwInitializeWindow */
    F_InitializeWindow();
    printf("F_InitializeWindow ok\n");
     
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	ChangeSize(1024,768);
	 printf("ChangeSize ok\n");
	while(1)
	{

		RenderScene();
		SetupRC();
		eglSwapBuffers(f_dpy, f_surface);
	    /**************/
	    glLineWidth(5);
	    ggmSetColorRGB(0, 255, 0);
	    ggmLine(20,20,30,30);
	    ggmLine(20,20,-30,-30);
	    ggmLine(-20,-20,-30,-30);
	    ggmLine(-20,-20,30,30);
	    /**************/
		
		taskDelay(1);
		getTemperature();
	}
	printf("while end\n");
    /* Shutdown */
    eglMakeCurrent(f_dpy, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroyContext(f_dpy, f_eglContext);
    eglDestroySurface(f_dpy, f_surface);
    CoreAVIDestroyWindow(f_win);
    eglTerminate(f_dpy);
    CoreAVICloseDisplay(f_disp_id);
    CoreAVIUninitializeDriver();
    return 0;
}
void draw_colorbar(void)
    {
    // Clear the window with current clearing color
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
    glPushMatrix();

    glRotatef(xRot, 1.0f, 0.0f, 0.0f);
    glRotatef(yRot, 0.0f, 1.0f, 0.0f);

    // Draw  quads 0
	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);// P0
	glVertex2f(-512,-384);  
	
	glColor3f(1.0f, 0.0f, 0.0f);//P1
	glVertex2f(-256.0f,-384);   
	
	glColor3f(1.0f, 0.0f, 0.0f);//P2
	glVertex2f(-256,384);
	
	glColor3f(0.0f, 1.0f, 0.0f);//P3
	glVertex2f(-512,384);
	glEnd();
  // Draw  quads 1
	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);// P0
	glVertex2f(-256,-384);  
	
	glColor3f(1.0f, 1.0f, 0.0f);//P1
	glVertex2f(-0.0f,-384);   
	
	glColor3f(1.0f, 1.0f, 0.0f);//P2
	glVertex2f(-0,384);
	
	glColor3f(0.0f, 1.0f, 1.0f);//P3
	glVertex2f(-256,384);
	glEnd();	
  // Draw  quads 2
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);// P0
	glVertex2f(0,-384);  
	
	glColor3f(0.5f, 1.0f, 0.0f);//P1
	glVertex2f(256.0f,-384);   
	
	glColor3f(0.5f, 1.0f, 0.0f);//P2
	glVertex2f(256.0f,384);
	
	glColor3f(0.0f, 0.0f, 1.0f);//P3
	glVertex2f(0,384);
	glEnd();	
 // Draw  quads 3
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);// P0
	glVertex2f(256,-384);  
	
	glColor3f(1.0f, 1.0f, 0.0f);//P1
	glVertex2f(512.0f,-384);   
	
	glColor3f(1.0f, 1.0f, 0.0f);//P2
	glVertex2f(512.0f,384);
	
	glColor3f(1.0f, 0.0f, 0.0f);//P3
	glVertex2f(256,384);
	glEnd();	
    glPopMatrix();

    // Show the graphics
   // glutSwapBuffers();
    }

int ad11(void)
{


   /*P CALL TcwInitializeWindow */
    F_InitializeWindow();
    printf("F_InitializeWindow ok\n");
     
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	ChangeSize(1024,768);
	 printf("ChangeSize ok\n");
	while(1)
	{

		draw_colorbar();
		//SetupRC();
		eglSwapBuffers(f_dpy, f_surface);
		taskDelay(1);
	}
	printf("while end\n");
    /* Shutdown */
    eglMakeCurrent(f_dpy, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroyContext(f_dpy, f_eglContext);
    eglDestroySurface(f_dpy, f_surface);
    CoreAVIDestroyWindow(f_win);
    eglTerminate(f_dpy);
    CoreAVICloseDisplay(f_disp_id);
    CoreAVIUninitializeDriver();
    return 0;
}

/*******************************************************
 Method Name : F_GlInitialize
 Description : Initialize GL related items such as
               initializing the window and clear color.
 Parameters  : None
 Errors      : None
 Return value: None
*******************************************************/
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
 	chipInfo.pcieLanes   = 1;
 	chipInfo.pcieGen     = 1;
 	chipInfo.fcram.enable = 0;
 	chipInfo.selfUpdatingTextureHeapSize = 0;
 	chipInfo.gartMiscHeapSize   = 0;
     
 	initInfo.cardId = 0;
 	initInfo.chipInitInfo = &chipInfo;
    
	memset(&GPUSpecificInfo1, 0x00, sizeof(GPUSpecificInfo1));
    GPUSpecificInfo1.frameBufHeapSize = 0;
    GPUSpecificInfo1.fcvm.enable = 0;
    GPUSpecificInfo1.hSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.vSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.rotation = 0;
    GPUSpecificInfo1.syncWithOtherHead = 0;

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
#ifdef PERF_BENCH
        eglSwapInterval(f_dpy, 0);
#else
        eglSwapInterval(f_dpy, 1);
#endif
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


static void F_InitializeWindow_back(void)
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
    GPUSpecificInfo1.fcvm.enable = FALSE;
    GPUSpecificInfo1.hSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.vSyncPolarity = E4690_SYNC_POLARITY_LOW;
    GPUSpecificInfo1.rotation = 0;
    GPUSpecificInfo1.syncWithOtherHead = FALSE;

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
/*
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

*/
    return;
}
