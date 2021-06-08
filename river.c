
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
void timer(int a);
int x1 = 800,x2=600,x3=1500,x4=1300,x5=670,x6=1430,x7=930;
int X1=-1800,X2=-2000,X3=400,X4=-100,X5=-1930,X6=-1880,X7=-200,X8=100,X9=60,X10=-
30,X11=-1640,
 X12=-1440,X13=-70,X14=-150,X15=-1670,X16=-1480,X17=-1900,X18=-
1600,X19=-1450,X20=-1350,X21=-1200;
void sky()
{
 glBegin(GL_POLYGON);
 glColor3ub (124,185,232);
 glVertex2d (-2000,2000);
 glVertex2d (2000,2000);
 glColor3ub (255,255,255);
 glVertex2d (2000,650);
 glVertex2d (-2000,650);
 glEnd();
}void river()
{
 glBegin(GL_POLYGON);
 glColor3ub (0,105,148);
 glVertex2d (-2000,650);
 glColor3ub (124,185,232);
 glVertex2d (2000,650);
 glColor3ub (0,105,148);
 glVertex2d (2000,-2000);
 glVertex2d (-2000,-2000);
 glEnd();
}
void hill()
{
 glBegin(GL_POLYGON);
 //left firstone
 glColor3ub (181,101,29);
 glVertex2d (-1500,650);
 glVertex2d (-1200,1000);
 glColor3ub (205,133,63);
 glVertex2d (-1000,650);
 glEnd();
 //left secondOne
 glBegin(GL_POLYGON);
 glColor3ub (150,75,0); glVertex2d (-1100,650);
 glVertex2d (-800,1100);
 glVertex2d (-600,650);
 glEnd();
 //left 3rdone
 glBegin(GL_POLYGON);
 glColor3ub (150,75,0);
 glVertex2d (-800,650);
 glVertex2d (-200,900);
 glColor3ub (205,133,63);
 glVertex2d (400,650);
 glEnd();
}
void tree()
{
 glBegin(GL_POLYGON);
 glColor3ub (101,67,30);
 glVertex2d (-1400,650);
 glVertex2d (-1450,650);
 glVertex2d (-1450,1100);
 glVertex2d (-1400,1100); glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (34,139,34);
 glVertex2d (-1650,1000);
 glColor3ub (0,255,0);
 glVertex2d (-1425,1400);
 glColor3ub (0,255,0);
 glVertex2d (-1200,1000);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (34,139,34);
 glVertex2d (-1650,1150);
 glColor3ub (0,255,0);
 glVertex2d (-1425,1550);
 glColor3ub (0,255,0);
 glVertex2d (-1200,1150);
 glEnd();
 //tree 2nd one
 glBegin(GL_POLYGON);
 glColor3ub (101,67,30);
 glVertex2d (-400,650);
 glVertex2d (-450,650);
 glVertex2d (-450,1100);
 glVertex2d (-400,1100);
 glEnd();
 glBegin(GL_POLYGON); glColor3ub (34,139,34);
 glVertex2d (-650,1000);
 glColor3ub (0,255,0);
 glVertex2d (-425,1400);
 glColor3ub (0,255,0);
 glVertex2d (-200,1000);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (34,139,34);
 glVertex2d (-650,1150);
 glColor3ub (0,255,0);
 glVertex2d (-425,1550);
 glColor3ub (0,255,0);
 glVertex2d (-200,1150);
 glEnd();
 //another tree
 glBegin(GL_POLYGON);
 glColor3ub (101,67,30);
 glVertex2d (320,650);
 glVertex2d (370,650);
 glVertex2d (370,1100);
 glVertex2d (320,1100);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (34,139,34);
 glVertex2d (120,1000); glColor3ub (0,255,0);
 glVertex2d (345,1400);
 glColor3ub (0,255,0);
 glVertex2d (570,1000);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (34,139,34);
 glVertex2d (120,1150);
 glColor3ub (0,255,0);
 glVertex2d (345,1550);
 glColor3ub (0,255,0);
 glVertex2d (570,1150);
 glEnd();
}
void ship()
{
 glBegin(GL_POLYGON);
 glColor3ub (0,0,0);
 glVertex2d (X1,-1950);
 glVertex2d (X2,-1400);
 glVertex2d (X3,-1400);
 glVertex2d (X4,-1950);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (203,204,204); glVertex2d (X5,-1400);
 glVertex2d (X5,-800);
 glVertex2d (X6,-800);
 glVertex2d (X6,-1400);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (153,142,131);
 glVertex2d (X6,-1400);
 glVertex2d (X6,-700);
 glVertex2d (X7,-700);
 glVertex2d (X8,-1400);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (255,255,255);
 glVertex2d (X9,-1300);
 glVertex2d (X10,-1100);
 glVertex2d (X11,-1100);
 glVertex2d (X12,-1300);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (255,255,255);
 glVertex2d (X13,-1000);
 glVertex2d (X14,-800);
 glVertex2d (X15,-800);
 glVertex2d (X16,-1000);
 glEnd(); glBegin(GL_POLYGON);
 glColor3ub (255,255,255);
 glVertex2d (X17,-650);
 glVertex2d (X17,-700);
 glVertex2d (X14,-700);
 glVertex2d (X14,-650);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (0,0,0);
 glVertex2d (X18,-650);
 glVertex2d (X18,-400);
 glVertex2d (X19,-400);
 glVertex2d (X19,-650);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (101,67,30);
 glVertex2d (X18,-350);
 glVertex2d (X18,-400);
 glVertex2d (X19,-400);
 glVertex2d (X19,-350);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (0,0,0); glVertex2d (X20,-650);
 glVertex2d (X20,-400);
 glVertex2d (X21,-400);
 glVertex2d (X21,-650);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (101,67,30);
 glVertex2d (X20,-350);
 glVertex2d (X20,-400);
 glVertex2d (X21,-400);
 glVertex2d (X21,-350);
 glEnd();
}
void boat()
{
 glBegin(GL_POLYGON);
 glColor3ub (101,67,30);
 glVertex2d (x1,-350);
 glVertex2d (x2,-150);
 glVertex2d (x3,-150);
 glVertex2d (x4,-350);
 glEnd();
 glBegin(GL_POLYGON); glColor3ub (255,255,255);
 glVertex2d (x1,50);
 glVertex2d (x5,-150);
 glVertex2d (x6,-150);
 glVertex2d (x4,50);
 glEnd();
 glBegin(GL_POLYGON);
 glColor3ub (205,212,235);
 glVertex2d (x1,50);
 glVertex2d (x5,-150);
 glVertex2d (x7,-150);
 glEnd();
}
void sun()
{
 glPushMatrix();
 //glTranslatef(1,1,0);
 int i,j,x,y,p,r =250;
 p = 1-r;
 x=0;
 y=r;
 glBegin(GL_POLYGON);
 glColor3ub (255,219,0);
 do
 { glVertex2d (1435+x,1420+y);
 glVertex2d (1435+y,1420+x);
 glVertex2d (1435-y,1420+x);
 glVertex2d (1435-x,1420+y);
 glVertex2d (1435-x,1420-y);
 glVertex2d (1435-y,1420-x);
 glVertex2d (1435+y,1420-x);
 glVertex2d (1435+x,1420-y);
 if(p >= 0)
 {
 x = x+1;
 y = y-1;
 p = p + 2*x + 1 -2*y;
 }
 else
 {
 x = x+1;
 p = p + 2*x+1;
 }
 } while(x<y);
 glEnd();
}
void display(void)
{
 glClear (GL_COLOR_BUFFER_BIT);
 sky();
 sun();
 river();
 tree();
 hill();
 ship();
 boat();
 glutSwapBuffers();
}
void init (void)
{
 glClearColor (0.0, 0.0, 0.0, 0.0);
 glMatrixMode(GL_PROJECTION); glLoadIdentity();
 gluOrtho2D(-2000,2000,-2000,2000);
}
void timer(int a)
{
 glutPostRedisplay();
 glutTimerFunc(1000/60,timer,0);
 if(x2<=2500 || X2<=2000)
 {
 if(x2<=2500)
 {
 x1+=6;
 x2+=6;
 x3+=6;
 x4+=6;
 x5+=6;
 x6+=6;
 x7+=6;
 }
 if(X2<=2000)
 {
 X1+=5;
 X2+=5;
 X3+=5; X4+=5;
 X5+=5;
 X6+=5;
 X7+=5;
 X8+=5;
 X9+=5;
 X10+=5;
 X11+=5;
 X12+=5;
 X13+=5;
 X14+=5;
 X15+=5;
 X16+=5;
 X17+=5;
 X18+=5;
 X19+=5;
 X20+=5;
 X21+=5;
 }
 }
 else
 {
 //int x1 = 800,x2=600,x3=1500,x4=1300,x5=670,x6=1430,x7=930; x1-=5000;
 x2-=5000;
 x3-=5000;
 x4-=5000;
 x5-=5000;
 x6-=5000;
 x7-=5000;
 X1-=6000;
 X2-=6000;
 X3-=6000;
 X4-=6000;
 X5-=6000;
 X6-=6000;
 X7-=6000;
 X8-=6000;
 X9-=6000;
 X10-=6000;
 X11-=6000;
 X12-=6000;
 X13-=6000;
 X14-=6000;
 X15-=6000;
 X16-=6000;
 X17-=6000;
 X18-=6000;
 X19-=6000; X20-=6000;
 X21-=6000;
 }
}
int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
 glutInitWindowSize (900,900);
 glutInitWindowPosition (300, 0);
 glutCreateWindow ("171-15-9557");
 init ();
 glutDisplayFunc(display);
 glutTimerFunc(0,timer,0);
 glutMainLoop();
 return 0;
}
