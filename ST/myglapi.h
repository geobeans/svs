#ifndef __MYGLAPI__
#define __MYGLAPI__
#include <gl/gl.h>
#ifdef __cplusplus
extern "C" {
#endif


extern void gluOrtho2D (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top);
extern void gluLookAt (GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble centerX, GLdouble centerY, GLdouble centerZ, GLdouble upX, GLdouble upY, GLdouble upZ);

extern void gluPickMatrix (GLdouble x, GLdouble y, GLdouble delX, GLdouble delY, GLint *viewport);
extern GLint gluProject (GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* winX, GLdouble* winY, GLdouble* winZ);

extern GLint gluUnProject (GLdouble winX, GLdouble winY, GLdouble winZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* objX, GLdouble* objY, GLdouble* objZ);
extern GLint gluUnProject4 (GLdouble winX, GLdouble winY, GLdouble winZ, GLdouble clipW, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble zNear, GLdouble zFar, GLdouble* objX, GLdouble* objY, GLdouble* objZ, GLdouble* objW);




extern void *glutBitmap9By15;
extern void *glutBitmap8By13;
extern void *glutBitmapTimesRoman10;
extern void *glutBitmapTimesRoman24;
extern void *glutBitmapHelvetica10;
extern void *glutBitmapHelvetica12;
extern void *glutBitmapHelvetica18;

#define GLUT_BITMAP_9_BY_15		(glutBitmap9By15)
#define GLUT_BITMAP_8_BY_13		(glutBitmap8By13)
#define GLUT_BITMAP_TIMES_ROMAN_10	(glutBitmapTimesRoman10)
#define GLUT_BITMAP_TIMES_ROMAN_24	(glutBitmapTimesRoman24)
#define GLUT_BITMAP_HELVETICA_10	(glutBitmapHelvetica10)
#define GLUT_BITMAP_HELVETICA_12	(glutBitmapHelvetica12)
#define GLUT_BITMAP_HELVETICA_18	(glutBitmapHelvetica18)

extern void glutBitmapString (void *font, char *c);
extern void glutBitmapCharacter(void *font, int character);
extern int glutBitmapWidth(void *font, int character);

#ifdef __cplusplus
}
#endif



#endif
