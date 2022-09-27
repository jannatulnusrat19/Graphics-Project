#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
float _moveb1 = 0.00f;
float _movel1= 0.00f;
float _movecarright= 0.00f;
float _movecarright2=0.00f;
float _movecarright3=0.00f;
float _speedcarright=0.00f;
float _speedboat=0.00f;


void updateb1(int value) {
 _moveb1 += .02;
if(_moveb1 > 1.00)
{
_moveb1 = -1.00;
}
_moveb1 +=_speedboat;
glutPostRedisplay();
glutTimerFunc(100, updateb1, 0);
}

void updatecl2(int value) {
 _movel1 += .02;
if(_movel1 > 1.00)
{
_movel1 = -1.00;
}

glutPostRedisplay();
glutTimerFunc(200, updatecl2, 0);
}

void updatecarright(int value) {
 _movecarright += .02;
if(_movecarright > 1.00)
{
_movecarright = -0.80;
}
_movecarright +=_speedcarright;

glutPostRedisplay();
glutTimerFunc(80, updatecarright, 0);
}
void updatecarright2(int value) {
 _movecarright2 += .02;
if(_movecarright2 > 1.00)
{
_movecarright2 = -0.80;
}
_movecarright2 +=_speedcarright;

glutPostRedisplay();
glutTimerFunc(80, updatecarright2, 0);
}
void updatecarright3(int value) {
 _movecarright3 += .02;
if(_movecarright3 > 1.00)
{
_movecarright3 = -0.80;
}
_movecarright3 +=_speedcarright;

glutPostRedisplay();
glutTimerFunc(80, updatecarright3, 0);
}




void circleSolid(float x, float y, float radius)
{

	int triangleAmount = 100; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount)));
		}
    glEnd();
}
void sky()
{

   glBegin(GL_POLYGON);
glColor3ub(130, 202, 255);
glVertex2f(-0.50f,0.00f);
glVertex2f(0.50f,0.00f);
glVertex2f(.50f,.50f);
glVertex2f(-0.50f,.50f);
glEnd();

///sun
glColor3ub( 253, 208, 23);
circleSolid(0.08f,0.40f,0.07);
//circleSolid(0.31f,0.05f,0.01);
}
void skynight()
{
    glBegin(GL_POLYGON);
glColor3ub(58, 58, 58);
glVertex2f(-0.50f,0.00f);
glVertex2f(0.50f,0.00f);
glVertex2f(.50f,.50f);
glVertex2f(-0.50f,.50f);
glEnd();

///sun
glColor3ub( 255,255,255);
circleSolid(0.08f,0.40f,0.07);

circleSolid(-0.08f,0.40f,0.0025);
circleSolid(-0.18f,0.40f,0.0025);
circleSolid(-0.28f,0.40f,0.0025);
circleSolid(-0.38f,0.40f,0.0025);
circleSolid(-0.48f,0.40f,0.0025);

//circleSolid(0.08f,0.40f,0.07);
circleSolid(-0.04f,0.45f,0.0025);
circleSolid(-0.14f,0.45f,0.0025);
circleSolid(-0.24f,0.45f,0.0025);
circleSolid(-0.34f,0.45f,0.0025);
circleSolid(-0.44f,0.45f,0.0025);


//circleSolid(0.08f,0.40f,0.07);
circleSolid(-0.04f,0.35f,0.0025);
circleSolid(-0.14f,0.35f,0.0025);
circleSolid(-0.24f,0.35f,0.0025);
circleSolid(-0.34f,0.35f,0.0025);
circleSolid(-0.44f,0.35f,0.0025);



circleSolid(0.08f,0.40f,0.0025);
circleSolid(0.18f,0.40f,0.0025);
circleSolid(0.28f,0.40f,0.0025);
circleSolid(0.38f,0.40f,0.0025);
circleSolid(0.48f,0.40f,0.0025);

circleSolid(0.08f,0.40f,0.07);
circleSolid(0.04f,0.45f,0.0025);
circleSolid(0.17f,0.45f,0.0025);
circleSolid(0.24f,0.45f,0.0025);
circleSolid(0.34f,0.45f,0.0025);
circleSolid(0.44f,0.45f,0.0025);


circleSolid(0.08f,0.40f,0.07);
circleSolid(0.04f,0.25f,0.0025);
circleSolid(0.14f,0.28f,0.0025);
circleSolid(0.24f,0.25f,0.0025);
circleSolid(0.34f,0.28f,0.0025);
circleSolid(0.44f,0.25f,0.0025);


circleSolid(0.08f,0.40f,0.07);
circleSolid(0.04f,0.35f,0.0025);
circleSolid(0.17f,0.35f,0.0025);
circleSolid(0.24f,0.35f,0.0025);
circleSolid(0.34f,0.35f,0.0025);
circleSolid(0.44f,0.35f,0.0025);

}
void skyevening()
{
    glBegin(GL_POLYGON);
glColor3ub(255, 208, 0);
glVertex2f(-0.50f,0.00f);
glVertex2f(0.50f,0.00f);
glVertex2f(.50f,.50f);
glVertex2f(-0.50f,.50f);
glEnd();

///sun
glColor3ub( 235, 69, 0);
circleSolid(0.05f,0.19f,0.07);

}
void plane()
{
glPushMatrix();
glTranslatef(_movel1,-0.00f,0.00f);

glBegin(GL_POLYGON);
glColor3ub(0,0, 155);
glVertex2f(-0.23f,0.43f);
glVertex2f(-0.30f,0.43f);
glVertex2f(-0.30f,0.40f);
glVertex2f(-0.21f,0.40f);
glEnd();
    glBegin(GL_POLYGON);
glColor3ub(221,255, 155);
glVertex2f(-0.32f,0.45f);
glVertex2f(-0.32f,0.40f);
glVertex2f(-0.30f,0.40f);
glVertex2f(-0.30f,0.43f);
glEnd();
    glBegin(GL_POLYGON);
glColor3ub(0,200, 0);
glVertex2f(-0.45f,0.44f);
glVertex2f(-0.45f,0.39f);
glVertex2f(-0.37f,0.39f);
glVertex2f(-0.37f,0.44f);
glEnd();
glColor3ub( 255, 255, 255);///chaka
    circleSolid(-0.24f,0.40f,0.01);
    circleSolid(-0.29f,0.40f,0.01);
    circleSolid(-0.28f,0.40f,0.01);
///front glass
glBegin(GL_POLYGON);
glColor3ub(0,200, 0);
glVertex2f(-0.23f,0.43f);
glVertex2f(-0.25f,0.43f);
glVertex2f(-0.25f,0.415f);
glVertex2f(-0.22f,0.415f);
glEnd();
///windows
glBegin(GL_POLYGON);
glColor3ub(255,0, 0);
glVertex2f(-0.28f,0.43f);
glVertex2f(-0.30f,0.43f);
glVertex2f(-0.30f,0.415f);
glVertex2f(-0.28f,0.415f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255,255, 0);
glVertex2f(-0.24f,0.43f);
glVertex2f(-0.28f,0.43f);
glVertex2f(-0.28f,0.415f);
glVertex2f(-0.24f,0.415f);
glEnd();

glLineWidth(03);
glBegin(GL_LINES);
    glColor3ub(0,0,255);
    glVertex2f(-0.28f,0.43f);
    glVertex2f(-0.28f,0.415f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,255);
    glVertex2f(-0.24f,0.43f);
    glVertex2f(-0.24f,0.415f);
    glEnd();
       glBegin(GL_LINES);
    glColor3ub(0,0,255);
    glVertex2f(-0.30f,0.43f);
    glVertex2f(-0.30f,0.40f);
    glEnd();
    glColor3ub( 0,0,0);///chaka
    circleSolid(-0.24f,0.40f,0.01);
    circleSolid(-0.29f,0.40f,0.01);
    circleSolid(-0.28f,0.40f,0.01);
        glColor3ub( 255,255,255);///chaka
    circleSolid(-0.24f,0.40f,0.005);
    circleSolid(-0.29f,0.40f,0.005);
    circleSolid(-0.28f,0.40f,0.005);

///flag


glColor3ub( 255, 0,0);
    circleSolid(-0.41f,0.415f,0.0150);
glLineWidth(01);
       ///rope
    glBegin(GL_LINES);///borders
    glColor3ub(222,255,255);
    glVertex2f(-0.32f,0.42f);
    glVertex2f(-0.37f,0.42f);
    glEnd();
     glBegin(GL_LINES);///borders
    glColor3ub(222,255,255);
    glVertex2f(-0.32f,0.41f);
    glVertex2f(-0.37f,0.41f);
    glEnd();
    glPopMatrix();
    glutSwapBuffers();


}
void river()
{

glBegin(GL_POLYGON);
glColor3ub(0, 0, 155);
glVertex2f(-0.50f,-0.30f);
glVertex2f(-0.50f,-0.50f);
glVertex2f(0.50f,-0.50f);
glVertex2f(0.50f,-0.30f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(200, 129, 65);
glVertex2f(-0.50f,-0.26f);
glVertex2f(-0.50f,-0.30f);
glVertex2f(0.50f,-0.30f);
glVertex2f(0.50f,-0.26f);
glEnd();



}
void Nightriver()
{
    glBegin(GL_POLYGON);
glColor3ub(0, 0, 80);
glVertex2f(-0.50f,-0.30f);
glVertex2f(-0.50f,-0.50f);
glVertex2f(0.50f,-0.50f);
glVertex2f(0.50f,-0.30f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(170, 109, 45);
glVertex2f(-0.50f,-0.26f);
glVertex2f(-0.50f,-0.30f);
glVertex2f(0.50f,-0.30f);
glVertex2f(0.50f,-0.26f);
glEnd();
}

void footpath()
{
glBegin(GL_POLYGON);
glColor3ub(150, 111, 51);
glVertex2f(-0.50f,-0.00f);
glVertex2f(-0.50f,-0.05f);
glVertex2f(0.50f,-0.05f);
glVertex2f(0.50f,-0.00f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(153, 0, 18);
glVertex2f(-0.15f,-0.00f);
glVertex2f(-0.20f,-0.05f);
glVertex2f(0.20f,-0.05f);
glVertex2f(0.15f,0.00f);
glEnd();
 glColor3ub(255,51,51); //body
    glBegin(GL_POLYGON);
        glVertex2f(-0.075f, -0.05f);
        glVertex2f(-0.065f, -0.025f);
        glVertex2f(-0.045f, -0.0f);
        glVertex2f(0.045f, -0.0f);
        glVertex2f(0.065f, -0.025f);
        glVertex2f(0.075f, -0.05f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
     glVertex2f(-0.20f,-0.05f);
	glVertex2f(0.20f,-0.05f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
     glVertex2f(-0.19f,-0.04f);
	glVertex2f(0.19f,-0.04f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
     glVertex2f(-0.18f,-0.03f);
	glVertex2f(0.18f,-0.03f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
     glVertex2f(-0.17f,-0.02f);
	glVertex2f(0.17f,-0.02f);
    glEnd();
      glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
     glVertex2f(-0.17f,-0.02f);
	glVertex2f(-0.20f,-0.05f);
    glEnd();
         glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
     glVertex2f(0.17f,-0.02f);
	glVertex2f(0.20f,-0.05f);
    glEnd();

///footpath middle

}
void Road()
{

glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(-0.50f,-0.05f);
glVertex2f(-0.50f,-0.06f);
glVertex2f(0.50f,-0.06f);
glVertex2f(0.50f,-0.05f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
glVertex2f(-0.50f,-0.06f);
glVertex2f(-0.50f,-0.25f);
glVertex2f(0.50f,-0.25f);
glVertex2f(0.50f,-0.06f);
glEnd();
///Divider
glBegin(GL_POLYGON);
glColor3ub(255, 255,255);
glVertex2f(-0.55f,-0.14f);
glVertex2f(-0.55f,-0.15f);
glVertex2f(-0.45f,-0.15f);
glVertex2f(-0.45f,-0.14f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(253, 208, 23);
glVertex2f(-0.40f,-0.14f);
glVertex2f(-0.40f,-0.15f);
glVertex2f(-0.30f,-0.15f);
glVertex2f(-0.30f,-0.14f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255,255);
glVertex2f(-0.25f,-0.14f);
glVertex2f(-0.25f,-0.15f);
glVertex2f(-0.15f,-0.15f);
glVertex2f(-0.15f,-0.14f);
glEnd();
///mid
glBegin(GL_POLYGON);
glColor3ub(253, 208, 23);
glVertex2f(0.55f,-0.14f);
glVertex2f(0.55f,-0.15f);
glVertex2f(0.45f,-0.15f);
glVertex2f(0.45f,-0.14f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255,255);
glVertex2f(0.40f,-0.14f);
glVertex2f(0.40f,-0.15f);
glVertex2f(0.30f,-0.15f);
glVertex2f(0.30f,-0.14f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(253, 208, 23);
glVertex2f(0.25f,-0.14f);
glVertex2f(0.25f,-0.15f);
glVertex2f(0.15f,-0.15f);
glVertex2f(0.15f,-0.14f);
glEnd();
}
void roadDivider()
{
glBegin(GL_POLYGON);
glColor3ub(255, 165, 0);
glVertex2f(-0.18f,-0.23f);
glVertex2f(-0.20f,-0.25f);
glVertex2f(0.20f,-0.25f);
glVertex2f(0.18f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255,255);
glVertex2f(-0.14f,-0.19f);
glVertex2f(-0.17f,-0.22f);
glVertex2f(0.17f,-0.22f);
glVertex2f(0.14f,-0.19f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255, 165, 0);
glVertex2f(-0.11f,-0.16f);
glVertex2f(-0.13f,-0.18f);
glVertex2f(0.13f,-0.18f);
glVertex2f(0.11f,-0.16f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255,255);
glVertex2f(-0.08f,-0.13f);
glVertex2f(-0.10f,-0.15f);
glVertex2f(0.10f,-0.15f);
glVertex2f(0.08f,-0.13f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 165, 0);
glVertex2f(-0.05f,-0.10f);
glVertex2f(-0.07f,-0.12f);
glVertex2f(0.07f,-0.12f);
glVertex2f(0.05f,-0.10f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255,255);
glVertex2f(-0.02f,-0.07f);
glVertex2f(-0.04f,-0.09f);
glVertex2f(0.04f,-0.09f);
glVertex2f(0.02f,-0.07f);
glEnd();
}
void rightBuilding()
{
    glColor3ub(255,255,255);
circleSolid(0.48f,0.09f,0.03);

   glBegin(GL_POLYGON);
glColor3ub(18, 173, 43);
glVertex2f(.445f,.10f);
glVertex2f(.445f,.00f);
glVertex2f(.55f,.00f);
glVertex2f(.55f,.10f);
glEnd();

glColor3ub(255,255,255);
circleSolid(0.48f,0.02f,0.01);glColor3ub(226, 245, 22 );
circleSolid(0.48f,0.05f,0.01);glColor3ub(255,255,255);
circleSolid(0.48f,0.08f,0.01);

}
void NightrightBuilding()
{
    glColor3ub(226, 245, 22 );
circleSolid(0.48f,0.09f,0.03);

   glBegin(GL_POLYGON);
glColor3ub(18, 173, 43);
glVertex2f(.445f,.10f);
glVertex2f(.445f,.00f);
glVertex2f(.55f,.00f);
glVertex2f(.55f,.10f);
glEnd();

glColor3ub(226, 245, 22 );
circleSolid(0.48f,0.02f,0.01);glColor3ub(255,255,255);
circleSolid(0.48f,0.05f,0.01);glColor3ub(226, 245, 22 );
circleSolid(0.48f,0.08f,0.01);
}
void smallHouse()
{
  glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(.33f,.05f);
glVertex2f(.44f,.05f);
glVertex2f(.41f,.10f);
glVertex2f(.36f,.10f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(0.35f,0.05f);
glVertex2f(0.35f,0.04f);
glVertex2f(0.42f,0.04f);
glVertex2f(0.42f,0.05f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);
glVertex2f(0.33f,0.04f);
glVertex2f(0.33f,0.0f);
glVertex2f(0.44f,0.0f);
glVertex2f(0.44f,0.04f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);
glVertex2f(0.35f,0.05f);
glVertex2f(0.35f,0.04f);
glVertex2f(0.42f,0.04f);
glVertex2f(0.42f,0.05f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(0.34f,0.03f);
glVertex2f(0.34f,0.01f);
glVertex2f(0.36f,0.01f);
glVertex2f(0.36f,0.03f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(0.41f,0.03f);
glVertex2f(0.41f,0.01f);
glVertex2f(0.43f,0.01f);
glVertex2f(0.43f,0.03f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(0.37f,0.00f);
glVertex2f(0.40f,0.00f);
glVertex2f(0.40f,0.03f);
glVertex2f(0.37f,0.03f);
glEnd();
}
void smallLeftBuilding()
{
{

   glBegin(GL_POLYGON);
glColor3ub(18, 173, 43);
glVertex2f(-.455f,.20f);
glVertex2f(-.455f,.00f);
glVertex2f(-.50f,.00f);
glVertex2f(-.50f,.20f);
glEnd();
   glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-.465f,.19f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.19f);
glEnd();
   glBegin(GL_POLYGON);
glColor3ub(108, 196, 23);
glVertex2f(-.465f,.17f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.17f);
glEnd();
   glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-.465f,.15f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.15f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(108, 196, 23);
glVertex2f(-.465f,.13f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.13f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-.465f,.11f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.11f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(108, 196, 23);
glVertex2f(-.465f,.09f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.09f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-.465f,.07f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.07f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(108, 196, 23);
glVertex2f(-.465f,.05f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.05f);
glEnd();

}
}
void NightsmallLeftBuilding()
{
{

   glBegin(GL_POLYGON);
glColor3ub(18, 173, 43);
glVertex2f(-.455f,.20f);
glVertex2f(-.455f,.00f);
glVertex2f(-.50f,.00f);
glVertex2f(-.50f,.20f);
glEnd();
   glBegin(GL_POLYGON);
glColor3ub(255, 165, 0 );
glVertex2f(-.465f,.19f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.19f);
glEnd();
   glBegin(GL_POLYGON);
glColor3ub(108, 196, 23);
glVertex2f(-.465f,.17f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.17f);
glEnd();
   glBegin(GL_POLYGON);
glColor3ub(255, 165, 0);
glVertex2f(-.465f,.15f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.15f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(108, 196, 23);
glVertex2f(-.465f,.13f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.13f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255, 165, 0 );
glVertex2f(-.465f,.11f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.11f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(108, 196, 23);
glVertex2f(-.465f,.09f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.09f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255, 165, 0 );
glVertex2f(-.465f,.07f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.07f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(108, 196, 23);
glVertex2f(-.465f,.05f);
glVertex2f(-.465f,.00f);
glVertex2f(-.49f,.00f);
glVertex2f(-.49f,.05f);
glEnd();

}
}

void LeftBuilding()
{
    glBegin(GL_POLYGON);                  //Main structure
glColor3ub(37, 56, 60);
glVertex2f(-0.45f,0.25f);
glVertex2f(-0.45f,0.00f);
glVertex2f(-0.31f,0.0f);
glVertex2f(-0.31f,0.25f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.44f,0.26f);
glVertex2f(-0.44f,0.25f);
glVertex2f(-0.32f,0.25f);
glVertex2f(-0.32f,0.26f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-0.42f,0.27f);
glVertex2f(-0.42f,0.26f);
glVertex2f(-0.34f,0.26f);
glVertex2f(-0.34f,0.27f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.41f,0.28f);
glVertex2f(-0.41f,0.27f);
glVertex2f(-0.35f,0.27f);
glVertex2f(-0.35f,0.28f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-0.40f,0.29f);
glVertex2f(-0.40f,0.28f);
glVertex2f(-0.36f,0.28f);
glVertex2f(-0.36f,0.29f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.39f,0.30f);
glVertex2f(-0.39f,0.29f);
glVertex2f(-0.37f,0.29f);
glVertex2f(-0.37f,0.30f);
glEnd();


//Window

 glBegin(GL_POLYGON);
glColor3ub(173, 216, 230);
glVertex2f(-0.41f,0.22f);
glVertex2f(-0.41f,0.20f);
glVertex2f(-0.35f,0.20f);
glVertex2f(-0.35f,0.22f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.42f,0.23f);
glVertex2f(-0.42f,0.19f);
glVertex2f(-0.41f,0.20f);
glVertex2f(-0.41f,0.22f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.42f,0.19f);
glVertex2f(-0.34f,0.19f);
glVertex2f(-0.35f,0.20f);
glVertex2f(-0.41f,0.20f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.35f,0.20f);
glVertex2f(-0.34f,0.19f);
glVertex2f(-0.34f,0.23f);
glVertex2f(-0.35f,0.22f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.34f,0.23f);
glVertex2f(-0.42f,0.23f);
glVertex2f(-0.41f,0.22f);
glVertex2f(-0.35f,0.22f);
glEnd();


///WINDOW 2


  glBegin(GL_POLYGON);
glColor3ub(173, 216, 230);
glVertex2f(-0.41f,0.16f);
glVertex2f(-0.35f,0.16f);
glVertex2f(-0.35f,0.11f);
glVertex2f(-0.41f,0.11f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.41f,0.16f);
glVertex2f(-0.41f,0.11f);
glVertex2f(-0.40f,0.12f);
glVertex2f(-0.40f,0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.40f,0.12f);
glVertex2f(-0.41f,0.11f);
glVertex2f(-0.35f,0.11f);
glVertex2f(-0.36f,0.12f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.41f,0.16f);
glVertex2f(-0.40f,0.15f);
glVertex2f(-0.36f,0.15f);
glVertex2f(-0.35f,0.16f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.35f,0.16f);
glVertex2f(-0.36f,0.15f);
glVertex2f(-0.36f,0.12f);
glVertex2f(-0.35f,0.11f);
glEnd();


///window 3


glBegin(GL_POLYGON);
glColor3ub(173, 216, 230);
glVertex2f(-0.43f,0.09f);
glVertex2f(-0.43f,0.05f);
glVertex2f(-0.40f,0.05f);
glVertex2f(-0.40f,0.09f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.43f,0.09f);
glVertex2f(-0.43f,0.05f);
glVertex2f(-0.42f,0.06f);
glVertex2f(-0.42f,0.08f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.43f,0.05f);
glVertex2f(-0.40f,0.05f);
glVertex2f(-0.41f,0.06f);
glVertex2f(-0.42f,0.06f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.41f,0.06f);
glVertex2f(-0.40f,0.05f);
glVertex2f(-0.40f,0.09f);
glVertex2f(-0.41f,0.08f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.43f,0.09f);
glVertex2f(-0.42f,0.08f);
glVertex2f(-0.41f,0.08f);
glVertex2f(-0.40f,0.09f);

glEnd();


///Window  4

glBegin(GL_POLYGON);
glColor3ub(173, 216, 230 );
glVertex2f(-0.36f,0.09f);
glVertex2f(-0.36f,0.05f);
glVertex2f(-0.33f,0.05f);
glVertex2f(-0.33f,0.09f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.36f,0.09f);
glVertex2f(-0.36f,0.05f);
glVertex2f(-0.35f,0.06f);
glVertex2f(-0.35f,0.08f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.36f,0.05f);
glVertex2f(-0.33f,0.05f);
glVertex2f(-0.34f,0.06f);
glVertex2f(-0.35f,0.06f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.34f,0.06f);
glVertex2f(-0.33f,0.05f);
glVertex2f(-0.33f,0.09f);
glVertex2f(-0.34f,0.08f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255,255, 255);
glVertex2f(-0.36f,0.09f);
glVertex2f(-0.35f,0.08f);
glVertex2f(-0.34f,0.08f);
glVertex2f(-0.33f,0.09f);

glEnd();


///Dooor



glBegin(GL_POLYGON);
glColor3ub(41, 166, 166);
glVertex2f(-0.40f,0.04f);
glVertex2f(-0.40f,0.00f);
glVertex2f(-0.36f,0.00f);
glVertex2f(-0.36f,0.04f);

glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.39f,0.03f);
glVertex2f(-0.39f,0.00f);
glVertex2f(-0.37f,0.00f);
glVertex2f(-0.37f,0.03f);


glEnd();


}

void Mosque()
{///DOORWINDOW
  glBegin(GL_POLYGON);
glColor3ub( 48, 103, 84);
glVertex2f(-0.30f,0.15f);
glVertex2f(-0.30f,0.00f);
glVertex2f(-0.18f,0.0f);
glVertex2f(-0.18f,0.15f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.265f,0.06f);
glVertex2f(-0.27f,0.04f);
glVertex2f(-0.29f,0.02f);
glVertex2f(-0.29f,0.00f);
glVertex2f(-0.24f,0.00f);
glVertex2f(-0.24f,0.02f);
glVertex2f(-0.26f,0.04f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.22f,0.06f);
glVertex2f(-0.22f,0.00f);
glVertex2f(-0.19f,0.00f);
glVertex2f(-0.19f,0.06f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.22f,0.06f);
glVertex2f(-0.22f,0.00f);
glVertex2f(-0.19f,0.00f);
glVertex2f(-0.19f,0.06f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.27f,0.14f);
glVertex2f(-0.28f,0.12f);
glVertex2f(-0.29f,0.12f);
glVertex2f(-0.29f,0.10f);
glVertex2f(-0.25f,0.10f);
glVertex2f(-0.25f,0.12f);
glVertex2f(-0.26f,0.12f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.21f,0.14f);
glVertex2f(-0.22f,0.12f);
glVertex2f(-0.23f,0.12f);
glVertex2f(-0.23f,0.10f);
glVertex2f(-0.19f,0.10f);
glVertex2f(-0.19f,0.12f);
glVertex2f(-0.20f,0.12f);
glEnd();
///ROOF
 glBegin(GL_POLYGON);
glColor3ub( 48, 103, 84);
glVertex2f(-0.23f,0.25f);
glVertex2f(-0.26f,0.20f);
glVertex2f(-0.26f,0.17f);
glVertex2f(-0.23f,0.15f);
glVertex2f(-0.20f,0.17f);
glVertex2f(-0.20f,0.20f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub( 255,255,255);
glVertex2f(-0.23f,0.22f);
glVertex2f(-0.26f,0.20f);
glVertex2f(-0.26f,0.17f);
glVertex2f(-0.23f,0.19f);
glVertex2f(-0.20f,0.17f);
glVertex2f(-0.20f,0.20f);
glEnd();
}
void NightMosque()
{///DOORWINDOW
   glBegin(GL_POLYGON);
glColor3ub( 48, 103, 84);
glVertex2f(-0.30f,0.15f);
glVertex2f(-0.30f,0.00f);
glVertex2f(-0.18f,0.0f);
glVertex2f(-0.18f,0.15f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(132, 227, 43);
glVertex2f(-0.265f,0.06f);
glVertex2f(-0.27f,0.04f);
glVertex2f(-0.29f,0.02f);
glVertex2f(-0.29f,0.00f);
glVertex2f(-0.24f,0.00f);
glVertex2f(-0.24f,0.02f);
glVertex2f(-0.26f,0.04f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(132, 227, 43);
glVertex2f(-0.22f,0.06f);
glVertex2f(-0.22f,0.00f);
glVertex2f(-0.19f,0.00f);
glVertex2f(-0.19f,0.06f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(132, 227, 43);
glVertex2f(-0.22f,0.06f);
glVertex2f(-0.22f,0.00f);
glVertex2f(-0.19f,0.00f);
glVertex2f(-0.19f,0.06f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(132, 227, 43);
glVertex2f(-0.27f,0.14f);
glVertex2f(-0.28f,0.12f);
glVertex2f(-0.29f,0.12f);
glVertex2f(-0.29f,0.10f);
glVertex2f(-0.25f,0.10f);
glVertex2f(-0.25f,0.12f);
glVertex2f(-0.26f,0.12f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(132, 227, 43);
glVertex2f(-0.21f,0.14f);
glVertex2f(-0.22f,0.12f);
glVertex2f(-0.23f,0.12f);
glVertex2f(-0.23f,0.10f);
glVertex2f(-0.19f,0.10f);
glVertex2f(-0.19f,0.12f);
glVertex2f(-0.20f,0.12f);
glEnd();
///ROOF
 glBegin(GL_POLYGON);
glColor3ub( 48, 103, 84);
glVertex2f(-0.23f,0.25f);
glVertex2f(-0.26f,0.20f);
glVertex2f(-0.26f,0.17f);
glVertex2f(-0.23f,0.15f);
glVertex2f(-0.20f,0.17f);
glVertex2f(-0.20f,0.20f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(132, 227, 43);
glVertex2f(-0.23f,0.22f);
glVertex2f(-0.26f,0.20f);
glVertex2f(-0.26f,0.17f);
glVertex2f(-0.23f,0.19f);
glVertex2f(-0.20f,0.17f);
glVertex2f(-0.20f,0.20f);
glEnd();
}

void NM()
{

    glBegin(GL_TRIANGLES);///L1
    glColor3ub(117, 117, 117);
    glVertex2f(-0.11f,0.01f);
	glVertex2f(-0.15f,0.00f);
	glVertex2f(-0.13f, 0.00f);
	glEnd();

	glBegin(GL_TRIANGLES);///L2
    glColor3ub(80, 74, 75);
    glVertex2f(-0.07f,0.03f);
	glVertex2f(-0.13f,0.00f);
	glVertex2f(-0.10f, 0.00f);
	glEnd();
    glBegin(GL_TRIANGLES);///L3
    glColor3ub(117, 117, 117);
    glVertex2f(-0.05f,0.05f);
	glVertex2f(-0.10f,0.00f);
	glVertex2f(-0.08f, 0.00f);
	glEnd();
	glBegin(GL_TRIANGLES);///L4
    glColor3ub(80, 74, 75);
    glVertex2f(-0.03f,0.08f);
	glVertex2f(-0.08f,0.00f);
	glVertex2f(-0.06f, 0.00f);
	glEnd();
	glBegin(GL_TRIANGLES);///L5
    glColor3ub(117, 117, 117);
    glVertex2f(-0.01f,0.13f);
	glVertex2f(-0.06f,0.00f);
	glVertex2f(-0.04f, 0.00f);
	glEnd();
	glBegin(GL_TRIANGLES);///L6
    glColor3ub(80, 74, 75);
    glVertex2f(-0.00f,0.20f);
	glVertex2f(-0.04f,0.00f);
	glVertex2f(-0.02f, 0.00f);
	glEnd();
    glBegin(GL_TRIANGLES);///L7
    glColor3ub(117, 117, 117);
    glVertex2f(-0.00f,0.25f);
	glVertex2f(-0.02f,0.00f);
	glVertex2f(-0.00f, 0.00f);
	glEnd();
	///border
	glLineWidth(0.05);
     glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.11f,0.01f);
    glVertex2f(-0.15f,0.00f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.07f,0.03f);
    glVertex2f(-0.13f,0.00f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.05f,0.05f);
    glVertex2f(-0.10f,0.00f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
     glVertex2f(-0.03f,0.08f);
	glVertex2f(-0.08f,0.00f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
   glVertex2f(-0.0040f,0.19f);
	glVertex2f(-0.04f,0.00f);
    glEnd();

        glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
   glVertex2f(-0.00f,0.25f);
	glVertex2f(-0.02f,0.00f);
    glEnd();


     glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.022f,0.10f);
    glVertex2f(-0.06f,0.00f);
    glEnd();

///RIGHT

        glBegin(GL_TRIANGLES);///L1
    glColor3ub(117,117,117);
    glVertex2f(0.11f,0.01f);
	glVertex2f(0.15f,0.00f);
	glVertex2f(0.13f, 0.00f);
	glEnd();
	glBegin(GL_TRIANGLES);///L2
    glColor3ub(80, 74, 75);
    glVertex2f(0.07f,0.03f);
	glVertex2f(0.13f,0.00f);
	glVertex2f(0.10f, 0.00f);
	glEnd();
    glBegin(GL_TRIANGLES);///L3
    glColor3ub(117,117,117);
    glVertex2f(0.05f,0.05f);
	glVertex2f(0.10f,0.00f);
	glVertex2f(0.08f, 0.00f);
	glEnd();
	glBegin(GL_TRIANGLES);///L4
    glColor3ub(80, 74, 75);
    glVertex2f(0.03f,0.08f);
	glVertex2f(0.08f,0.00f);
	glVertex2f(0.06f, 0.00f);
	glEnd();
	glBegin(GL_TRIANGLES);///L5
    glColor3ub(117,117,117);
    glVertex2f(0.01f,0.13f);
	glVertex2f(0.06f,0.00f);
	glVertex2f(0.04f, 0.00f);
	glEnd();
	glBegin(GL_TRIANGLES);///L5
    glColor3ub(80, 74, 75);
    glVertex2f(0.00f,0.20f);
	glVertex2f(0.04f,0.00f);
	glVertex2f(0.02f, 0.00f);
	glEnd();
    glBegin(GL_TRIANGLES);///L5
    glColor3ub(117,117,117);
    glVertex2f(0.00f,0.25f);
	glVertex2f(0.02f,0.00f);
	glVertex2f(0.00f, 0.00f);
	glEnd();

///border
     	glLineWidth(01);
     glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.11f,0.01f);
    glVertex2f(0.15f,0.00f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.07f,0.03f);
    glVertex2f(0.13f,0.00f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.05f,0.05f);
    glVertex2f(0.10f,0.00f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
     glVertex2f(0.03f,0.08f);
	glVertex2f(0.08f,0.00f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
   glVertex2f(0.0040f,0.19f);
	glVertex2f(0.04f,0.00f);
    glEnd();

        glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
   glVertex2f(0.00f,0.25f);
	glVertex2f(0.02f,0.00f);
    glEnd();

         glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.022f,0.10f);
    glVertex2f(0.06f,0.00f);
    glEnd();
    ///mid border
        glBegin(GL_TRIANGLES);///mid tri
    glColor3ub(80, 74, 75);
    glVertex2f(0.00f,0.08f);
	glVertex2f(-0.01f,0.04f);
    glVertex2f(0.01f,0.04f);
	glEnd();
    glBegin(GL_TRIANGLES);///mid tri
    glColor3ub(80, 74, 75);
	glVertex2f(-0.01f,0.04f);
    glVertex2f(0.00f,0.01f);
    glVertex2f(0.01f,0.04f);
	glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.00f,0.08f);
    glVertex2f(0.01f,0.04f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.00f,0.08f);
    glVertex2f(-0.01f,0.04f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.01f,0.04f);
    glVertex2f(0.00f,0.01f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.01f,0.04f);
    glVertex2f(-0.00f,0.01f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.01f,0.04f);
    glVertex2f(0.01f,0.04f);

    glEnd();


}

void flag()
{
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.10f,0.18f);
glVertex2f(-0.10f,-0.02f);
glVertex2f(-0.0950f,-0.02f);
glVertex2f(-0.0950f,0.18f);
glEnd();
   glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-0.11f,-0.00f);
glVertex2f(-0.11f,-0.01f);
glVertex2f(-0.08f,-0.01f);
glVertex2f(-0.08f,-0.00f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-0.12f,-0.01f);
glVertex2f(-0.12f,-0.02f);
glVertex2f(-0.07f,-0.02f);
glVertex2f(-0.07f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,255,0);
glVertex2f(-0.0950f,0.17f);
glVertex2f(-0.0950f,0.12f);
glVertex2f(-0.03f,0.12f);
glVertex2f(-0.03f,0.17f);
glEnd();

glColor3ub( 255, 0,0);
circleSolid(-0.06f,0.1450f,0.0125);

}
void flagnight()
{
    glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-0.10f,0.18f);
glVertex2f(-0.10f,-0.02f);
glVertex2f(-0.0950f,-0.02f);
glVertex2f(-0.0950f,0.18f);
glEnd();
   glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-0.11f,-0.00f);
glVertex2f(-0.11f,-0.01f);
glVertex2f(-0.08f,-0.01f);
glVertex2f(-0.08f,-0.00f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-0.12f,-0.01f);
glVertex2f(-0.12f,-0.02f);
glVertex2f(-0.07f,-0.02f);
glVertex2f(-0.07f,-0.01f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,255,0);
glVertex2f(-0.0950f,0.17f);
glVertex2f(-0.0950f,0.12f);
glVertex2f(-0.03f,0.12f);
glVertex2f(-0.03f,0.17f);
glEnd();

glColor3ub( 255, 0,0);
circleSolid(-0.06f,0.1450f,0.0125);
}
void singleLineBuilding()
{
 glBegin(GL_POLYGON);
glColor3ub(48, 103, 84);
glVertex2f(-0.16f,0.20f);
glVertex2f(-0.16f,0.00f);
glVertex2f(-0.15f,0.00f);
glVertex2f(-0.15f,0.20f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(48, 103, 84);
glVertex2f(-0.15f,0.26f);
glVertex2f(-0.15f,0.25f);
glVertex2f(-0.16f,0.25f);
glVertex2f(-0.16f,0.26f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(0,0,150);
glVertex2f(0.16f,0.20f);
glVertex2f(0.16f,0.00f);
glVertex2f(0.15f,0.00f);
glVertex2f(0.15f,0.20f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(225,225,225);
glVertex2f(0.15f,0.25f);
glVertex2f(0.12f,0.23f);
glVertex2f(0.19f,0.23f);
glVertex2f(0.16f,0.25f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 69, 0);
glVertex2f(0.12f,0.23f);
glVertex2f(0.15f,0.20f);
glVertex2f(0.16f,0.20f);
glVertex2f(0.19f,0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,150);
glVertex2f(0.15f,0.26f);
glVertex2f(0.15f,0.25f);
glVertex2f(0.16f,0.25f);
glVertex2f(0.16f,0.26f);
glEnd();
glColor3ub(48, 103, 84);
circleSolid(-0.155f,0.21f,0.04);
glColor3ub(255,255,255);
circleSolid(-0.155f,0.21f,0.03);

}

void NightsingleLineBuilding()
{
 glBegin(GL_POLYGON);
glColor3ub(48, 103, 84);
glVertex2f(-0.16f,0.20f);
glVertex2f(-0.16f,0.00f);
glVertex2f(-0.15f,0.00f);
glVertex2f(-0.15f,0.20f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(48, 103, 84);
glVertex2f(-0.15f,0.26f);
glVertex2f(-0.15f,0.25f);
glVertex2f(-0.16f,0.25f);
glVertex2f(-0.16f,0.26f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(0,0,255);
glVertex2f(0.16f,0.20f);
glVertex2f(0.16f,0.00f);
glVertex2f(0.15f,0.00f);
glVertex2f(0.15f,0.20f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 0,0);
glVertex2f(0.15f,0.25f);
glVertex2f(0.12f,0.23f);
glVertex2f(0.19f,0.23f);
glVertex2f(0.16f,0.25f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(253, 208, 23);
glVertex2f(0.12f,0.23f);
glVertex2f(0.15f,0.20f);
glVertex2f(0.16f,0.20f);
glVertex2f(0.19f,0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,255);
glVertex2f(0.15f,0.26f);
glVertex2f(0.15f,0.25f);
glVertex2f(0.16f,0.25f);
glVertex2f(0.16f,0.26f);
glEnd();
glColor3ub(48, 103, 84);
circleSolid(-0.155f,0.21f,0.04);
glColor3ub(132, 227, 43);
circleSolid(-0.155f,0.21f,0.03);

}

void park()
{
        ///grill
    glLineWidth(02);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.25f,0.10f);
    glVertex2f(0.18f,0.10f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.25f,0.10f);
    glVertex2f(0.19f,0.15f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.25f,0.18f);
    glVertex2f(0.25f,0.10f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.31f,0.15f);
    glVertex2f(0.25f,0.10f);
    glEnd();

        glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.33f,0.10f);
    glVertex2f(0.25f,0.10f);
    glEnd();
       glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.31f,0.05f);
    glVertex2f(0.25f,0.10f);
    glEnd();

       glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.19f,0.05f);
    glVertex2f(0.25f,0.10f);
    glEnd();

       glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.25f,0.02f);
    glVertex2f(0.25f,0.10f);
    glEnd();


     glColor3ub( 0,0,0);
    GLfloat x=0.25f; GLfloat y=0.10f; GLfloat radius =0.08f;
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

    glColor3ub( 253, 208, 23);
   circleSolid(0.25f,0.10f,0.02);
    glColor3ub( 255,0,0);
    circleSolid(0.25f,0.10f,0.01);



    glColor3ub( 255, 0,0);
	circleSolid(0.19f,0.05f,0.01);
	glColor3ub( 253, 208, 23);
	circleSolid(0.19f,0.15f,0.01);
	glColor3ub( 0, 0, 255);
	circleSolid(0.17f,0.10f,0.01);
	glColor3ub( 255, 0,0);
    circleSolid(0.25f,0.18f,0.01);
    glColor3ub( 253, 208, 23);
    circleSolid(0.31f,0.15f,0.01);
    glColor3ub( 0, 0, 255);
    circleSolid(0.33f,0.10f,0.01);
    glColor3ub( 255, 0,0);
    circleSolid(0.31f,0.05f,0.01);

///hanger triangle
    glBegin(GL_TRIANGLES);///L5
    glColor3ub(255, 0, 0);
    glVertex2f(0.20f,0.00f);
	glVertex2f(0.25f,0.00f);
	glVertex2f(0.25f, 0.04f);
	glEnd();
	    glBegin(GL_TRIANGLES);///L5
    glColor3ub(255, 0, 0);
	glVertex2f(0.25f,0.00f);
	glVertex2f(0.30f,0.00f);
	glVertex2f(0.25f,0.03f);
	glEnd();








}
void parknight()
{
    ///grill
    glLineWidth(02);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.25f,0.10f);
    glVertex2f(0.18f,0.10f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.25f,0.10f);
    glVertex2f(0.19f,0.15f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.25f,0.18f);
    glVertex2f(0.25f,0.10f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.31f,0.15f);
    glVertex2f(0.25f,0.10f);
    glEnd();

        glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.33f,0.10f);
    glVertex2f(0.25f,0.10f);
    glEnd();
       glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.31f,0.05f);
    glVertex2f(0.25f,0.10f);
    glEnd();

       glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.19f,0.05f);
    glVertex2f(0.25f,0.10f);
    glEnd();

       glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.25f,0.02f);
    glVertex2f(0.25f,0.10f);
    glEnd();


     glColor3ub(255,255,255);
    GLfloat x=0.25f; GLfloat y=0.10f; GLfloat radius =0.08f;
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

    glColor3ub( 253, 208, 23);
   circleSolid(0.25f,0.10f,0.02);
    glColor3ub( 255,0,0);
    circleSolid(0.25f,0.10f,0.01);

    glColor3ub( 255, 0,0);
	circleSolid(0.19f,0.05f,0.01);glColor3ub( 253, 208, 23);
	circleSolid(0.19f,0.15f,0.01);glColor3ub( 0, 0, 255);
	circleSolid(0.17f,0.10f,0.01);glColor3ub( 255, 0,0);
    circleSolid(0.25f,0.18f,0.01);glColor3ub( 253, 208, 23);
    circleSolid(0.31f,0.15f,0.01);glColor3ub( 0, 0, 255);
    circleSolid(0.33f,0.10f,0.01);glColor3ub( 255, 0,0);
    circleSolid(0.31f,0.05f,0.01);

///hanger triangle
    glBegin(GL_TRIANGLES);///L5
    glColor3ub(255, 0, 0);
    glVertex2f(0.20f,0.00f);
	glVertex2f(0.25f,0.00f);
	glVertex2f(0.25f, 0.04f);
	glEnd();
	    glBegin(GL_TRIANGLES);///L5
    glColor3ub(255, 0, 0);
	glVertex2f(0.25f,0.00f);
	glVertex2f(0.30f,0.00f);
	glVertex2f(0.25f,0.03f);
	glEnd();
}
void clouds()
{
glPushMatrix();
    glTranslatef(_movel1,-0.00f,0.00f);


     glColor3ub( 255, 255, 255);
    circleSolid(0.23f,0.40f,0.02);
    circleSolid(0.21f,0.39f,0.02);
    circleSolid(0.21f,0.37f,0.02);
    circleSolid(0.23f,0.38f,0.02);
    circleSolid(0.19f,0.40f,0.02);
    circleSolid(0.19f,0.37f,0.02);
    circleSolid(0.17f,0.39f,0.02);
    circleSolid(0.18f,0.38f,0.02);
    circleSolid(0.16f,0.38f,0.02);

           glColor3ub( 255, 255, 255);
    circleSolid(-0.43f,0.35f,0.02);
    circleSolid(-0.41f,0.34f,0.02);
    circleSolid(-0.41f,0.33f,0.02);
    circleSolid(-0.43f,0.34f,0.02);
    circleSolid(-0.39f,0.35f,0.02);
    circleSolid(-0.39f,0.33f,0.02);
    circleSolid(-0.37f,0.34f,0.02);
    circleSolid(-0.38f,0.33f,0.02);
    circleSolid(-0.36f,0.34f,0.02);

     glColor3ub( 255, 255, 255);
    circleSolid(0.43f,0.35f,0.02);
    circleSolid(0.41f,0.34f,0.02);
    circleSolid(0.41f,0.33f,0.02);
    circleSolid(0.43f,0.34f,0.02);
    circleSolid(0.39f,0.35f,0.02);
    circleSolid(0.39f,0.33f,0.02);
    circleSolid(0.37f,0.34f,0.02);
    circleSolid(0.38f,0.33f,0.02);
    circleSolid(0.36f,0.34f,0.02);

     glColor3ub( 255, 255, 255);
    circleSolid(-0.13f,0.40f,0.02);
    circleSolid(-0.11f,0.39f,0.02);
    circleSolid(-0.11f,0.37f,0.02);
    circleSolid(-0.13f,0.38f,0.02);
    circleSolid(-0.09f,0.40f,0.02);
    circleSolid(-0.09f,0.37f,0.02);
    circleSolid(-0.07f,0.39f,0.02);
    circleSolid(-0.08f,0.38f,0.02);
    circleSolid(-0.06f,0.38f,0.02);



    glPopMatrix();
    glutSwapBuffers();


}

void boat1()
{

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
     glPushMatrix();
    glTranslatef(_moveb1,-0.50f,0.00f);


     glColor3ub(255,51,51); ///body
     glBegin(GL_POLYGON);
        glVertex2f(0.10f,-0.37f);
        glVertex2f(-0.10f,-0.37f);
        glVertex2f(-0.07f,-0.43f);
        glVertex2f(0.07f,-0.43f);
    glEnd();

    glColor3ub(0,0,0); ///stick
    glBegin(GL_POLYGON);
        glVertex2f(-0.0025f, -0.375f);
        glVertex2f(-0.0025f, -0.25f);
        glVertex2f(0.0025f, -0.25f);
        glVertex2f(0.0025f, -0.375f);
    glEnd();

    glColor3ub(0,51,51);
    glBegin(GL_POLYGON);
        glVertex2f(0.0025f, -0.36f);
        glVertex2f(0.03f, -0.31f);
        glVertex2f(0.03f, -0.26f);
        glVertex2f(0.0025f, -0.26f);
    glEnd();

    glColor3ub(0,102,0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.0025f, -0.36f);
        glVertex2f(-0.03f, -0.325f);
        glVertex2f(-0.03f, -0.26f);
        glVertex2f(-0.0025f, -0.26f);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();

}
void boat2()
{
glPushMatrix();
    glTranslatef(_moveb1,-0.30f,0.00f);
     glColor3ub(255,51,51);
  //body
    glBegin(GL_POLYGON);
        glVertex2f(0.10f,-0.37f);
        glVertex2f(-0.10f,-0.37f);
        glVertex2f(-0.07f,-0.43f);
        glVertex2f(0.07f,-0.43f);
    glEnd();

    glColor3ub(0,0,0); //stick
    glBegin(GL_POLYGON);
        glVertex2f(-0.0025f, -0.375f);
        glVertex2f(-0.0025f, -0.25f);
        glVertex2f(0.0025f, -0.25f);
        glVertex2f(0.0025f, -0.375f);
    glEnd();

    glColor3ub(0,51,51);
    glBegin(GL_POLYGON);
        glVertex2f(0.0025f, -0.36f);
        glVertex2f(0.03f, -0.31f);
        glVertex2f(0.03f, -0.26f);
        glVertex2f(0.0025f, -0.26f);
    glEnd();

    glColor3ub(0,102,0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.0025f, -0.36f);
        glVertex2f(-0.03f, -0.325f);
        glVertex2f(-0.03f, -0.26f);
        glVertex2f(-0.0025f, -0.26f);
    glEnd();
    glPopMatrix();
    glutSwapBuffers();
}
void trees()
{
glBegin(GL_POLYGON);///down part left
glColor3ub(139, 0, 0);
glVertex2f(-0.44f,-0.01f);
glVertex2f(-0.44f,-0.06f);
glVertex2f(-0.43f,-0.06f);
glVertex2f(-0.43f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.39f,-0.01f);
glVertex2f(-0.39f,-0.06f);
glVertex2f(-0.38f,-0.06f);
glVertex2f(-0.38f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.34f,-0.01f);
glVertex2f(-0.34f,-0.06f);
glVertex2f(-0.33f,-0.06f);
glVertex2f(-0.33f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.29f,-0.01f);
glVertex2f(-0.29f,-0.06f);
glVertex2f(-0.28f,-0.06f);
glVertex2f(-0.28f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.24f,-0.01f);
glVertex2f(-0.24f,-0.06f);
glVertex2f(-0.23f,-0.06f);
glVertex2f(-0.23f,-0.01f);
glEnd();


glBegin(GL_POLYGON);///down part Right
glColor3ub(139, 0, 0);
glVertex2f(0.44f,-0.01f);
glVertex2f(0.44f,-0.06f);
glVertex2f(0.43f,-0.06f);
glVertex2f(0.43f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.39f,-0.01f);
glVertex2f(0.39f,-0.06f);
glVertex2f(0.38f,-0.06f);
glVertex2f(0.38f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.34f,-0.01f);
glVertex2f(0.34f,-0.06f);
glVertex2f(0.33f,-0.06f);
glVertex2f(0.33f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.29f,-0.01f);
glVertex2f(0.29f,-0.06f);
glVertex2f(0.28f,-0.06f);
glVertex2f(0.28f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.24f,-0.01f);
glVertex2f(0.24f,-0.06f);
glVertex2f(0.23f,-0.06f);
glVertex2f(0.23f,-0.01f);
glEnd();

///trees
 glColor3ub( 255, 255, 255);

circleSolid(-0.235f,-0.01f,0.015);
circleSolid(-0.335f,-0.01f,0.015);
circleSolid(-0.435f,-0.01f,0.015);
circleSolid(0.235f,-0.01f,0.015);
circleSolid(0.335f,-0.01f,0.015);
circleSolid(0.435f,-0.01f,0.015);

glBegin(GL_TRIANGLES);///left tree 1
    glColor3ub(25,225,0);
    glVertex2f(-0.41f,-0.04f);
	glVertex2f(-0.36f,-0.04f);
	glVertex2f(-0.385f, 0.03f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(-0.41f,-0.02f);
	glVertex2f(-0.36f,-0.02f);
	glVertex2f(-0.385f, 0.03f);
	glEnd();


	glBegin(GL_TRIANGLES);///Left tree 2
    glColor3ub(25,225,0);
    glVertex2f(-0.31f,-0.04f);
	glVertex2f(-0.26f,-0.04f);
	glVertex2f(-0.285f, 0.03f);
	glEnd();
		glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(-0.31f,-0.02f);
	glVertex2f(-0.26f,-0.02f);
	glVertex2f(-0.285f, 0.03f);
	glEnd();





	glBegin(GL_TRIANGLES);///Right tree 1
    glColor3ub(25,225,0);
    glVertex2f(0.41f,-0.04f);
	glVertex2f(0.36f,-0.04f);
	glVertex2f(0.385f, 0.03f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(0.41f,-0.02f);
	glVertex2f(0.36f,-0.02f);
	glVertex2f(0.385f, 0.03f);
	glEnd();





	glBegin(GL_TRIANGLES);//Right tree 2
    glColor3ub(25,225,0);
    glVertex2f(0.31f,-0.04f);
	glVertex2f(0.26f,-0.04f);
	glVertex2f(0.285f, 0.03f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(0.31f,-0.02f);
	glVertex2f(0.26f,-0.02f);
	glVertex2f(0.285f, 0.03f);
	glEnd();




}
void Nighttrees()
{
glBegin(GL_POLYGON);///down part left
glColor3ub(139, 0, 0);
glVertex2f(-0.44f,-0.01f);
glVertex2f(-0.44f,-0.06f);
glVertex2f(-0.43f,-0.06f);
glVertex2f(-0.43f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.39f,-0.01f);
glVertex2f(-0.39f,-0.06f);
glVertex2f(-0.38f,-0.06f);
glVertex2f(-0.38f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.34f,-0.01f);
glVertex2f(-0.34f,-0.06f);
glVertex2f(-0.33f,-0.06f);
glVertex2f(-0.33f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.29f,-0.01f);
glVertex2f(-0.29f,-0.06f);
glVertex2f(-0.28f,-0.06f);
glVertex2f(-0.28f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.24f,-0.01f);
glVertex2f(-0.24f,-0.06f);
glVertex2f(-0.23f,-0.06f);
glVertex2f(-0.23f,-0.01f);
glEnd();


glBegin(GL_POLYGON);///down part Right
glColor3ub(139, 0, 0);
glVertex2f(0.44f,-0.01f);
glVertex2f(0.44f,-0.06f);
glVertex2f(0.43f,-0.06f);
glVertex2f(0.43f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.39f,-0.01f);
glVertex2f(0.39f,-0.06f);
glVertex2f(0.38f,-0.06f);
glVertex2f(0.38f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.34f,-0.01f);
glVertex2f(0.34f,-0.06f);
glVertex2f(0.33f,-0.06f);
glVertex2f(0.33f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.29f,-0.01f);
glVertex2f(0.29f,-0.06f);
glVertex2f(0.28f,-0.06f);
glVertex2f(0.28f,-0.01f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.24f,-0.01f);
glVertex2f(0.24f,-0.06f);
glVertex2f(0.23f,-0.06f);
glVertex2f(0.23f,-0.01f);
glEnd();

///trees
 glColor3ub(246, 53, 138);
circleSolid(-0.235f,-0.01f,0.015); glColor3ub( 22, 245, 41);
circleSolid(-0.335f,-0.01f,0.015); glColor3ub( 255,255,0);
circleSolid(-0.435f,-0.01f,0.015); glColor3ub(246, 53, 138);
circleSolid(0.235f,-0.01f,0.015); glColor3ub( 22, 245, 41);
circleSolid(0.335f,-0.01f,0.015); glColor3ub( 255,255,0);
circleSolid(0.435f,-0.01f,0.015);

glBegin(GL_TRIANGLES);///left tree 1
    glColor3ub(25,225,0);
    glVertex2f(-0.41f,-0.04f);
	glVertex2f(-0.36f,-0.04f);
	glVertex2f(-0.385f, 0.03f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(-0.41f,-0.02f);
	glVertex2f(-0.36f,-0.02f);
	glVertex2f(-0.385f, 0.03f);
	glEnd();


	glBegin(GL_TRIANGLES);///Left tree 2
    glColor3ub(25,225,0);
    glVertex2f(-0.31f,-0.04f);
	glVertex2f(-0.26f,-0.04f);
	glVertex2f(-0.285f, 0.03f);
	glEnd();
		glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(-0.31f,-0.02f);
	glVertex2f(-0.26f,-0.02f);
	glVertex2f(-0.285f, 0.03f);
	glEnd();





	glBegin(GL_TRIANGLES);///Right tree 1
    glColor3ub(25,225,0);
    glVertex2f(0.41f,-0.04f);
	glVertex2f(0.36f,-0.04f);
	glVertex2f(0.385f, 0.03f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(0.41f,-0.02f);
	glVertex2f(0.36f,-0.02f);
	glVertex2f(0.385f, 0.03f);
	glEnd();





	glBegin(GL_TRIANGLES);//Right tree 2
    glColor3ub(25,225,0);
    glVertex2f(0.31f,-0.04f);
	glVertex2f(0.26f,-0.04f);
	glVertex2f(0.285f, 0.03f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(0.31f,-0.02f);
	glVertex2f(0.26f,-0.02f);
	glVertex2f(0.285f, 0.03f);
	glEnd();




}
void Nighttreeriverside()
{
   glBegin(GL_POLYGON);///down part left
glColor3ub(139, 0, 0);
glVertex2f(-0.44f,-0.23f);
glVertex2f(-0.44f,-0.28f);
glVertex2f(-0.43f,-0.28f);
glVertex2f(-0.43f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.39f,-0.23f);
glVertex2f(-0.39f,-0.28f);
glVertex2f(-0.38f,-0.28f);
glVertex2f(-0.38f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.34f,-0.23f);
glVertex2f(-0.34f,-0.28f);
glVertex2f(-0.33f,-0.28f);
glVertex2f(-0.33f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.29f,-0.23f);
glVertex2f(-0.29f,-0.28f);
glVertex2f(-0.28f,-0.28f);
glVertex2f(-0.28f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.24f,-0.23f);
glVertex2f(-0.24f,-0.28f);
glVertex2f(-0.23f,-0.28f);
glVertex2f(-0.23f,-0.23f);
glEnd();


glBegin(GL_POLYGON);///down part Right
glColor3ub(139, 0, 0);
glVertex2f(0.44f,-0.23f);
glVertex2f(0.44f,-0.28f);
glVertex2f(0.43f,-0.28f);
glVertex2f(0.43f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.39f,-0.23f);
glVertex2f(0.39f,-0.28f);
glVertex2f(0.38f,-0.28f);
glVertex2f(0.38f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.34f,-0.23f);
glVertex2f(0.34f,-0.28f);
glVertex2f(0.33f,-0.28f);
glVertex2f(0.33f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.29f,-0.23f);
glVertex2f(0.29f,-0.28f);
glVertex2f(0.28f,-0.28f);
glVertex2f(0.28f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.24f,-0.23f);
glVertex2f(0.24f,-0.28f);
glVertex2f(0.23f,-0.28f);
glVertex2f(0.23f,-0.23f);
glEnd();

///trees
 glColor3ub( 255,255,0);

circleSolid(-0.235f,-0.23f,0.015);glColor3ub(22, 245, 41);
circleSolid(-0.335f,-0.23f,0.015);glColor3ub(246, 53, 138);
circleSolid(-0.435f,-0.23f,0.015);glColor3ub( 255,255,0);
circleSolid(0.235f,-0.23f,0.015);glColor3ub(22, 245, 41);
circleSolid(0.335f,-0.23f,0.015);glColor3ub(246, 53, 138);
circleSolid(0.435f,-0.23f,0.015);

glBegin(GL_TRIANGLES);///left tree 1
    glColor3ub(25,225,0);
    glVertex2f(-0.41f,-0.26f);
	glVertex2f(-0.36f,-0.26f);
	glVertex2f(-0.385f,-0.20f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(-0.41f,-0.24f);
	glVertex2f(-0.36f,-0.24f);
	glVertex2f(-0.385f,-0.19f);
	glEnd();


	glBegin(GL_TRIANGLES);///Left tree 2
    glColor3ub(25,225,0);
    glVertex2f(-0.31f,-0.26f);
	glVertex2f(-0.26f,-0.26f);
	glVertex2f(-0.285f,-0.20f);
	glEnd();
		glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(-0.31f,-0.24f);
	glVertex2f(-0.26f,-0.24f);
	glVertex2f(-0.285f,-0.19f);
	glEnd();





	glBegin(GL_TRIANGLES);///Right tree 1
    glColor3ub(25,225,0);
    glVertex2f(0.41f,-0.26f);
	glVertex2f(0.36f,-0.26f);
	glVertex2f(0.385f,-0.20f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(0.41f,-0.24f);
	glVertex2f(0.36f,-0.24f);
	glVertex2f(0.385f,-0.19f);
	glEnd();





	glBegin(GL_TRIANGLES);//Right tree 2
    glColor3ub(25,225,0);
    glVertex2f(0.31f,-0.26f);
	glVertex2f(0.26f,-0.26f);
	glVertex2f(0.285f,-0.20f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(0.31f,-0.24f);
	glVertex2f(0.26f,-0.24f);
	glVertex2f(0.285f,-0.19f);
	glEnd();

}
void treeriverside()
{
   glBegin(GL_POLYGON);///down part left
glColor3ub(139, 0, 0);
glVertex2f(-0.44f,-0.23f);
glVertex2f(-0.44f,-0.28f);
glVertex2f(-0.43f,-0.28f);
glVertex2f(-0.43f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.39f,-0.23f);
glVertex2f(-0.39f,-0.28f);
glVertex2f(-0.38f,-0.28f);
glVertex2f(-0.38f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.34f,-0.23f);
glVertex2f(-0.34f,-0.28f);
glVertex2f(-0.33f,-0.28f);
glVertex2f(-0.33f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.29f,-0.23f);
glVertex2f(-0.29f,-0.28f);
glVertex2f(-0.28f,-0.28f);
glVertex2f(-0.28f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub( 139, 0, 0);
glVertex2f(-0.24f,-0.23f);
glVertex2f(-0.24f,-0.28f);
glVertex2f(-0.23f,-0.28f);
glVertex2f(-0.23f,-0.23f);
glEnd();


glBegin(GL_POLYGON);///down part Right
glColor3ub(139, 0, 0);
glVertex2f(0.44f,-0.23f);
glVertex2f(0.44f,-0.28f);
glVertex2f(0.43f,-0.28f);
glVertex2f(0.43f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.39f,-0.23f);
glVertex2f(0.39f,-0.28f);
glVertex2f(0.38f,-0.28f);
glVertex2f(0.38f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.34f,-0.23f);
glVertex2f(0.34f,-0.28f);
glVertex2f(0.33f,-0.28f);
glVertex2f(0.33f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.29f,-0.23f);
glVertex2f(0.29f,-0.28f);
glVertex2f(0.28f,-0.28f);
glVertex2f(0.28f,-0.23f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 0, 0);
glVertex2f(0.24f,-0.23f);
glVertex2f(0.24f,-0.28f);
glVertex2f(0.23f,-0.28f);
glVertex2f(0.23f,-0.23f);
glEnd();

///trees
 glColor3ub( 255, 255, 255);

circleSolid(-0.235f,-0.23f,0.015);
circleSolid(-0.335f,-0.23f,0.015);
circleSolid(-0.435f,-0.23f,0.015);
circleSolid(0.235f,-0.23f,0.015);
circleSolid(0.335f,-0.23f,0.015);
circleSolid(0.435f,-0.23f,0.015);

glBegin(GL_TRIANGLES);///left tree 1
    glColor3ub(25,225,0);
    glVertex2f(-0.41f,-0.26f);
	glVertex2f(-0.36f,-0.26f);
	glVertex2f(-0.385f,-0.20f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(-0.41f,-0.24f);
	glVertex2f(-0.36f,-0.24f);
	glVertex2f(-0.385f,-0.19f);
	glEnd();


	glBegin(GL_TRIANGLES);///Left tree 2
    glColor3ub(25,225,0);
    glVertex2f(-0.31f,-0.26f);
	glVertex2f(-0.26f,-0.26f);
	glVertex2f(-0.285f,-0.20f);
	glEnd();
		glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(-0.31f,-0.24f);
	glVertex2f(-0.26f,-0.24f);
	glVertex2f(-0.285f,-0.19f);
	glEnd();





	glBegin(GL_TRIANGLES);///Right tree 1
    glColor3ub(25,225,0);
    glVertex2f(0.41f,-0.26f);
	glVertex2f(0.36f,-0.26f);
	glVertex2f(0.385f,-0.20f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(0.41f,-0.24f);
	glVertex2f(0.36f,-0.24f);
	glVertex2f(0.385f,-0.19f);
	glEnd();





	glBegin(GL_TRIANGLES);//Right tree 2
    glColor3ub(25,225,0);
    glVertex2f(0.31f,-0.26f);
	glVertex2f(0.26f,-0.26f);
	glVertex2f(0.285f,-0.20f);
	glEnd();
	glBegin(GL_TRIANGLES);///L1
    glColor3ub(150,225,0);
    glVertex2f(0.31f,-0.24f);
	glVertex2f(0.26f,-0.24f);
	glVertex2f(0.285f,-0.19f);
	glEnd();

}
void car1()
{
  glBegin(GL_POLYGON);
glColor3ub(0, 65, 194);
glVertex2f(-0.48f,-0.10f);
glVertex2f(-0.48f,-0.12f);
glVertex2f(-0.38f,-0.12f);
glVertex2f(-0.38f,-0.10f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(-0.43f,-0.08f);
glVertex2f(-0.45f,-0.10f);
glVertex2f(-0.38f,-0.10f);
glVertex2f(-0.38f,-0.08f);
glEnd();
 glBegin(GL_POLYGON);
glColor3ub(0, 65, 194);
glVertex2f(-0.38f,-0.09f);
glVertex2f(-0.38f,-0.11f);
glVertex2f(-0.37f,-0.11f);
glVertex2f(-0.37f,-0.09f);
glEnd();

glLineWidth(03);
  glBegin(GL_LINES);///borders
    glColor3ub(0, 65, 194);
    glVertex2f(-0.43f,-0.08f);
    glVertex2f(-0.45,-0.10f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(0, 65, 194);
    glVertex2f(-0.43f,-0.08f);
    glVertex2f(-0.38,-0.08f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0, 65, 194);
    glVertex2f(-0.48f,-0.10f);
    glVertex2f(-0.38f,-0.10f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(0, 65, 194);
    glVertex2f(-0.41f,-0.08f);
    glVertex2f(-0.41f,-0.12f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 65, 194);
    glVertex2f(-0.39f,-0.08f);
    glVertex2f(-0.39f,-0.12f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(0, 65, 194);
    glVertex2f(-0.38f,-0.11f);
    glVertex2f(-0.38f,-0.10f);
    glEnd();
    glColor3ub(128, 128, 128);///chaka
    circleSolid(-0.45f,-0.12f,0.01);
    circleSolid(-0.40f,-0.12f,0.01);

    glColor3ub( 255, 255, 255);///chaka
    circleSolid(-0.45f,-0.12f,0.0060);
    circleSolid(-0.40f,-0.12f,0.0060);
    glBegin(GL_LINES);///light
    glColor3ub(0,233,0);
    glVertex2f(-0.48f,-0.11f);
    glVertex2f(-0.47f,-0.11f);
    glEnd();
      glBegin(GL_LINES);
    glColor3ub(255,233,0);
    glVertex2f(-0.48f,-0.105f);
    glVertex2f(-0.47f,-0.105f);
    glEnd();
      glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.38f,-0.105f);
    glVertex2f(-0.39f,-0.105f);
    glEnd();
      glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.38f,-0.11f);
    glVertex2f(-0.39f,-0.11f);
    glEnd();



}
void car2()
{
    glBegin(GL_POLYGON);
glColor3ub(52, 124, 44);
glVertex2f(-0.36f,-0.10f);
glVertex2f(-0.36f,-0.12f);
glVertex2f(-0.28f,-0.12f);
glVertex2f(-0.28f,-0.10f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(139, 255, 200);
glVertex2f(-0.34f,-0.08f);
glVertex2f(-0.36f,-0.10f);
glVertex2f(-0.28f,-0.10f);
glVertex2f(-0.28f,-0.08f);
glEnd();
glColor3ub( 128, 128, 128);///chaka
    circleSolid(-0.30f,-0.12f,0.01);
    circleSolid(-0.34f,-0.12f,0.01);

    glColor3ub( 255, 255, 255);///chaka
    circleSolid(-0.30f,-0.12f,0.006);
    circleSolid(-0.34f,-0.12f,0.006);

glBegin(GL_LINES);///light
    glColor3ub(255,255,255);
    glVertex2f(-0.36f,-0.11f);
    glVertex2f(-0.35f,-0.11f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.36f,-0.105f);
    glVertex2f(-0.35f,-0.105f);
    glEnd();
     glBegin(GL_LINES);
        glColor3ub(255,255,255);
    glVertex2f(-0.28f,-0.11f);
    glVertex2f(-0.29f,-0.11f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.28f,-0.105f);
    glVertex2f(-0.29f,-0.105f);
    glEnd();
    ///border
    glBegin(GL_LINES);///borders
    glColor3ub(52, 124, 44);
    glVertex2f(-0.36f,-0.10f);
    glVertex2f(-0.34,-0.08f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(52, 124, 44);
    glVertex2f(-0.34f,-0.08f);
    glVertex2f(-0.28,-0.08f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(52, 124, 44);
    glVertex2f(-0.36f,-0.10f);
    glVertex2f(-0.28f,-0.10f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(52, 124, 44);
    glVertex2f(-0.32f,-0.08f);
    glVertex2f(-0.32f,-0.12f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(52, 124, 44);
    glVertex2f(-0.29f,-0.08f);
    glVertex2f(-0.29f,-0.12f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(52, 124, 44);
    glVertex2f(-0.29f,-0.08f);
    glVertex2f(-0.29f,-0.10f);
    glEnd();

}
void car3()
{
    glBegin(GL_POLYGON);
glColor3ub(247, 13, 26);
glVertex2f(-0.25f,-0.10f);
glVertex2f(-0.25f,-0.12f);
glVertex2f(-0.14f,-0.12f);
glVertex2f(-0.14f,-0.10f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(139, 255, 200);
glVertex2f(-0.23f,-0.08f);
glVertex2f(-0.25f,-0.10f);
glVertex2f(-0.14f,-0.10f);
glVertex2f(-0.14f,-0.08f);
glEnd();

glColor3ub( 128, 128, 128);///chaka
    circleSolid(-0.17f,-0.12f,0.01);
    circleSolid(-0.23f,-0.12f,0.01);
glColor3ub( 255, 255, 255);///chaka
    circleSolid(-0.17f,-0.12f,0.006);
    circleSolid(-0.23f,-0.12f,0.006);
glLineWidth(03);
    ///border
    glBegin(GL_LINES);///borders
    glColor3ub(247, 13, 26);
    glVertex2f(-0.25f,-0.10f);
    glVertex2f(-0.23,-0.08f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(247, 13, 26);
    glVertex2f(-0.23f,-0.08f);
    glVertex2f(-0.14,-0.08f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(247, 13, 26);
    glVertex2f(-0.25f,-0.10f);
    glVertex2f(-0.14f,-0.10f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(247, 13, 26);
    glVertex2f(-0.20f,-0.08f);
    glVertex2f(-0.20f,-0.12f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(247, 13, 26);
    glVertex2f(-0.16f,-0.08f);
    glVertex2f(-0.16f,-0.12f);
    glEnd();



    glBegin(GL_LINES);///light
    glColor3ub(255,255,255);
    glVertex2f(-0.25f,-0.11f);
    glVertex2f(-0.24f,-0.11f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.25f,-0.105f);
    glVertex2f(-0.24f,-0.105f);
    glEnd();
     glBegin(GL_LINES);
        glColor3ub(255,255,255);
    glVertex2f(-0.14f,-0.11f);
    glVertex2f(-0.15f,-0.11f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.14f,-0.105f);
    glVertex2f(-0.15f,-0.105f);
    glEnd();

}

void car4()
{
     glBegin(GL_POLYGON);
glColor3ub(152, 175, 199 );
glVertex2f(-0.13f,-0.10f);
glVertex2f(-0.13f,-0.12f);
glVertex2f(-0.02f,-0.12f);
glVertex2f(-0.02f,-0.10f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-0.08f,-0.08f);
glVertex2f(-0.10f,-0.10f);
glVertex2f(-0.02f,-0.10f);
glVertex2f(-0.03f,-0.08f);
glEnd();

glColor3ub( 128, 128, 128);///chaka
    circleSolid(-0.04f,-0.12f,0.01);
    circleSolid(-0.10f,-0.12f,0.01);

    glColor3ub( 255, 255, 255);///chaka
    circleSolid(-0.04f,-0.12f,0.006);
    circleSolid(-0.10f,-0.12f,0.006);
glLineWidth(04);
     ///border
    glBegin(GL_LINES);///borders
    glColor3ub(0, 0, 255 );
    glVertex2f(-0.10f,-0.10f);
    glVertex2f(-0.08,-0.08f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(0, 0, 255 );
    glVertex2f(-0.08f,-0.08f);
    glVertex2f(-0.03,-0.08f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 255);
    glVertex2f(-0.13f,-0.10f);
    glVertex2f(-0.02f,-0.10f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,255 );
    glVertex2f(-0.05f,-0.08f);
    glVertex2f(-0.05f,-0.0975f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(0,0,255);
    glVertex2f(-0.03f,-0.08f);
    glVertex2f(-0.02f,-0.10f);
    glEnd();


  ///light

      glBegin(GL_POLYGON);
glColor3ub(139, 255, 200);
glVertex2f(-0.13f,-0.10f);
glVertex2f(-0.13f,-0.11f);
glVertex2f(-0.12f,-0.11f);
glVertex2f(-0.12f,-0.10f);
glEnd();
      glBegin(GL_POLYGON);
glColor3ub(255,0,0);
glVertex2f(-0.03f,-0.10f);
glVertex2f(-0.03f,-0.11f);
glVertex2f(-0.02f,-0.11f);
glVertex2f(-0.02f,-0.10f);
glEnd();


}
void car5()
{
         glBegin(GL_POLYGON);
glColor3ub(55,25,155);
glVertex2f(0.01f,-0.10f);
glVertex2f(0.01f,-0.12f);
glVertex2f(0.15f,-0.12f);
glVertex2f(0.15f,-0.10f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(0.06f,-0.08f);
glVertex2f(0.04f,-0.10f);
glVertex2f(0.10f,-0.10f);
glVertex2f(0.10f,-0.08f);
glEnd();
glColor3ub( 128, 128, 128);///chaka
    circleSolid(0.04f,-0.12f,0.01);
    circleSolid(0.12f,-0.12f,0.01);

    glColor3ub( 255, 255, 255);///chaka
    circleSolid(0.04f,-0.12f,0.006);
    circleSolid(0.12f,-0.12f,0.006);

  ///border
    glBegin(GL_LINES);///borders
    glColor3ub(0, 255, 0 );
    glVertex2f(0.06f,-0.08f);
    glVertex2f(0.04f,-0.10f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(0, 255, 0 );
    glVertex2f(0.06f,-0.08f);
    glVertex2f(0.10f,-0.08f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 255, 0 );
    glVertex2f(0.01f,-0.10f);
    glVertex2f(0.15f,-0.10f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(0, 255, 0 );
    glVertex2f(0.08f,-0.08f);
    glVertex2f(0.08f,-0.12f);
    glEnd();
          glBegin(GL_LINES);
    glColor3ub(0, 255, 0 );
    glVertex2f(0.10f,-0.065f);
    glVertex2f(0.10f,-0.12f);
    glEnd();
              glBegin(GL_LINES);
    glColor3ub(0, 255, 0 );
    glVertex2f(0.10f,-0.065f);
    glVertex2f(0.13f,-0.10f);
    glEnd();

    glBegin(GL_POLYGON);///light
glColor3ub(139, 255, 200);
glVertex2f(0.01f,-0.10f);
glVertex2f(0.01f,-0.11f);
glVertex2f(0.02f,-0.11f);
glVertex2f(0.02f,-0.10f);
glEnd();
      glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(0.15f,-0.10f);
glVertex2f(0.15f,-0.11f);
glVertex2f(0.14f,-0.11f);
glVertex2f(0.14f,-0.10f);
glEnd();


}
void car6()
{
    glBegin(GL_POLYGON);
glColor3ub(54, 245, 127);
glVertex2f(0.16f,-0.10f);
glVertex2f(0.16f,-0.12f);
glVertex2f(0.26f,-0.12f);
glVertex2f(0.26f,-0.10f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(0.21f,-0.08f);
glVertex2f(0.19f,-0.10f);
glVertex2f(0.26f,-0.10f);
glVertex2f(0.26f,-0.08f);
glEnd();
glColor3ub(128, 128, 128);///chaka
    circleSolid(0.18f,-0.12f,0.01);
    circleSolid(0.24f,-0.12f,0.01);

    glColor3ub( 255, 255, 255);///chaka
    circleSolid(0.18f,-0.12f,0.006);
    circleSolid(0.24f,-0.12f,0.006);
    ///border
    glBegin(GL_LINES);///borders
    glColor3ub(54, 245, 127);
    glVertex2f(0.16f,-0.10f);
    glVertex2f(0.26f,-0.10f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(54, 245, 127);
    glVertex2f(0.21f,-0.08f);
    glVertex2f(0.26f,-0.08f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(54, 245, 127);
    glVertex2f(0.21f,-0.08f);
    glVertex2f(0.19f,-0.10f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(54, 245, 127);
    glVertex2f(0.23f,-0.08f);
    glVertex2f(0.23f,-0.12f);
    glEnd();
          glBegin(GL_LINES);
    glColor3ub(54, 245, 127);
    glVertex2f(0.25f,-0.08f);
    glVertex2f(0.25f,-0.12f);
    glEnd();


glBegin(GL_POLYGON);///light
glColor3ub(255,255,255);
glVertex2f(0.16f,-0.10f);
glVertex2f(0.16f,-0.11f);
glVertex2f(0.17f,-0.11f);
glVertex2f(0.17f,-0.10f);
glEnd();
      glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(0.26f,-0.10f);
glVertex2f(0.26f,-0.11f);
glVertex2f(0.25f,-0.11f);
glVertex2f(0.25f,-0.10f);
glEnd();

}
void car7()
{
    glBegin(GL_POLYGON);
glColor3ub(81, 59, 28);
glVertex2f(0.27f,-0.10f);
glVertex2f(0.27f,-0.12f);
glVertex2f(0.35f,-0.12f);
glVertex2f(0.35f,-0.10f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(0.29f,-0.08f);
glVertex2f(0.27f,-0.10f);
glVertex2f(0.35f,-0.10f);
glVertex2f(0.35f,-0.08f);
glEnd();
glColor3ub(128, 128, 128);///chaka
    circleSolid(0.29f,-0.12f,0.01);
    circleSolid(0.33f,-0.12f,0.01);
glColor3ub( 255, 255, 255);///chaka
    circleSolid(0.29f,-0.12f,0.006);
    circleSolid(0.33f,-0.12f,0.006);
    ///border
    glBegin(GL_LINES);///borders
    glColor3ub(81, 59, 28);
    glVertex2f(0.27f,-0.10f);
    glVertex2f(0.27f,-0.10f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(81, 59, 28);
    glVertex2f(0.29f,-0.08f);
    glVertex2f(0.35f,-0.08f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(81, 59, 28);
    glVertex2f(0.29f,-0.08f);
    glVertex2f(0.27f,-0.10f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(81, 59, 28);
    glVertex2f(0.30f,-0.08f);
    glVertex2f(0.30f,-0.12f);
    glEnd();
          glBegin(GL_LINES);
    glColor3ub(81, 59, 28);
    glVertex2f(0.33f,-0.08f);
    glVertex2f(0.33f,-0.11f);
    glEnd();
              glBegin(GL_LINES);
    glColor3ub(81, 59, 28);
    glVertex2f(0.345f,-0.08f);
    glVertex2f(0.345f,-0.10f);
    glEnd();
                glBegin(GL_LINES);
    glColor3ub(81, 59, 28);
    glVertex2f(0.27f,-0.10f);
    glVertex2f(0.35f,-0.10f);
    glEnd();

glBegin(GL_POLYGON);///light
glColor3ub(255,255,255);
glVertex2f(0.27f,-0.10f);
glVertex2f(0.27f,-0.11f);
glVertex2f(0.28f,-0.11f);
glVertex2f(0.28f,-0.10f);
glEnd();
      glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(0.35f,-0.10f);
glVertex2f(0.35f,-0.11f);
glVertex2f(0.34f,-0.11f);
glVertex2f(0.34f,-0.10f);
glEnd();
}
void car8()
{
    glBegin(GL_POLYGON);
glColor3ub(204, 102, 0);
glVertex2f(0.36f,-0.10f);
glVertex2f(0.36f,-0.12f);
glVertex2f(0.47f,-0.12f);
glVertex2f(0.47f,-0.10f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(139, 255, 200);
glVertex2f(0.38f,-0.08f);
glVertex2f(0.36f,-0.10f);
glVertex2f(0.47f,-0.10f);
glVertex2f(0.47f,-0.08f);
glEnd();
glColor3ub(128, 128, 128);///chaka
    circleSolid(0.38f,-0.12f,0.01);
    circleSolid(0.45f,-0.12f,0.01);
glColor3ub( 255, 255, 255);///chaka
    circleSolid(0.38f,-0.12f,0.006);
    circleSolid(0.45f,-0.12f,0.006);
    ///border
    glBegin(GL_LINES);///borders
    glColor3ub(204, 102, 0);
    glVertex2f(0.36f,-0.10f);
    glVertex2f(0.47f,-0.10f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(204, 102, 0);
    glVertex2f(0.38f,-0.08f);
    glVertex2f(0.47f,-0.08f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(204, 102, 0);
    glVertex2f(0.38f,-0.08f);
    glVertex2f(0.36f,-0.10f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(204, 102, 0);
    glVertex2f(0.39f,-0.08f);
    glVertex2f(0.39f,-0.12f);
    glEnd();
          glBegin(GL_LINES);
    glColor3ub(204, 102, 0);
    glVertex2f(0.45f,-0.08f);
    glVertex2f(0.45f,-0.11f);
    glEnd();

                glBegin(GL_LINES);
    glColor3ub(204, 102, 0);
    glVertex2f(0.36f,-0.10f);
    glVertex2f(0.47f,-0.10f);
    glEnd();

    glBegin(GL_POLYGON);///light
glColor3ub(255,255,255);
glVertex2f(0.36f,-0.10f);
glVertex2f(0.36f,-0.11f);
glVertex2f(0.37f,-0.11f);
glVertex2f(0.37f,-0.10f);
glEnd();
      glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(0.47f,-0.10f);
glVertex2f(0.47f,-0.11f);
glVertex2f(0.46f,-0.11f);
glVertex2f(0.46f,-0.10f);
glEnd();

}
void carRight1()
{
    glPushMatrix();
glTranslatef(_movecarright,-0.00f,0.00f);
    glBegin(GL_POLYGON);
glColor3ub(125, 5, 82);
glVertex2f(0.36f,-0.20f);
glVertex2f(0.36f,-0.22f);
glVertex2f(0.28f,-0.22f);
glVertex2f(0.28f,-0.20f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(139, 255, 200);
glVertex2f(0.34f,-0.18f);
glVertex2f(0.36f,-0.20f);
glVertex2f(0.28f,-0.20f);
glVertex2f(0.28f,-0.18f);
glEnd();
glColor3ub(128,128,128);///chaka
    circleSolid(0.30f,-0.22f,0.01);
    circleSolid(0.34f,-0.22f,0.01);
 glColor3ub( 255, 255, 255);///chaka
    circleSolid(0.30f,-0.22f,0.006);
    circleSolid(0.34f,-0.22f,0.006);

glBegin(GL_LINES);///light
    glColor3ub(255,255,255);
    glVertex2f(0.36f,-0.21f);
    glVertex2f(0.35f,-0.21f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.36f,-0.205f);
    glVertex2f(0.35f,-0.205f);
    glEnd();
     glBegin(GL_LINES);
        glColor3ub(255,255,255);
    glVertex2f(0.28f,-0.21f);
    glVertex2f(0.29f,-0.21f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.28f,-0.205f);
    glVertex2f(0.29f,-0.205f);
    glEnd();
    ///border
    glBegin(GL_LINES);///borders
    glColor3ub(125, 5, 82);
    glVertex2f(0.36f,-0.20f);
    glVertex2f(0.34,-0.18f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(125, 5, 82);
    glVertex2f(0.34f,-0.18f);
    glVertex2f(0.28,-0.18f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(125, 5, 82);
    glVertex2f(0.36f,-0.20f);
    glVertex2f(0.28f,-0.20f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(125, 5, 82);
    glVertex2f(0.32f,-0.18f);
    glVertex2f(0.32f,-0.22f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(125, 5, 82);
    glVertex2f(0.29f,-0.18f);
    glVertex2f(0.29f,-0.22f);
    glEnd();

     glPopMatrix();
    glutSwapBuffers();
}
void carRight2()
{
    glPushMatrix();
glTranslatef(_movecarright2,-0.00f,0.00f);
    glBegin(GL_POLYGON);
 glBegin(GL_POLYGON);
glColor3ub(4, 95, 95);
glVertex2f(-0.01f,-0.20f);
glVertex2f(-0.01f,-0.22f);
glVertex2f(-0.15f,-0.22f);
glVertex2f(-0.15f,-0.20f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(255,255,200);
glVertex2f(-0.06f,-0.18f);
glVertex2f(-0.04f,-0.20f);
glVertex2f(-0.10f,-0.20f);
glVertex2f(-0.10f,-0.18f);
glEnd();
glColor3ub( 128, 128, 128);///chaka
    circleSolid(-0.04f,-0.22f,0.01);
    circleSolid(-0.12f,-0.22f,0.01);

    glColor3ub( 255, 255, 255);///chaka
    circleSolid(-0.04f,-0.22f,0.006);
    circleSolid(-0.12f,-0.22f,0.006);

  ///border
    glBegin(GL_LINES);///borders
    glColor3ub(127, 255, 212);
    glVertex2f(-0.06f,-0.18f);
    glVertex2f(-0.04f,-0.20f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(127, 255, 212);
    glVertex2f(-0.06f,-0.18f);
    glVertex2f(-0.10f,-0.18f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(127, 255, 212);
    glVertex2f(-0.01f,-0.20f);
    glVertex2f(-0.15f,-0.20f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(127, 255, 212);
    glVertex2f(-0.08f,-0.18f);
    glVertex2f(-0.08f,-0.22f);
    glEnd();
          glBegin(GL_LINES);
    glColor3ub(127, 255, 212);
    glVertex2f(-0.10f,-0.165f);
    glVertex2f(-0.10f,-0.22f);
    glEnd();
              glBegin(GL_LINES);
    glColor3ub(127, 255, 212);
    glVertex2f(-0.10f,-0.165f);
    glVertex2f(-0.13f,-0.20f);
    glEnd();

    glBegin(GL_POLYGON);///light
glColor3ub(139, 255, 200);
glVertex2f(-0.01f,-0.20f);
glVertex2f(-0.01f,-0.21f);
glVertex2f(-0.02f,-0.21f);
glVertex2f(-0.02f,-0.20f);
glEnd();
      glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(-0.15f,-0.20f);
glVertex2f(-0.15f,-0.21f);
glVertex2f(-0.14f,-0.21f);
glVertex2f(-0.14f,-0.20f);
glEnd();
glPopMatrix();
    glutSwapBuffers();
}
void carRight3()
{
    glPushMatrix();
glTranslatef(_movecarright3,-0.00f,0.00f);
    glBegin(GL_POLYGON);
glColor3ub(4, 95, 95);
glVertex2f(-0.36f,-0.20f);
glVertex2f(-0.36f,-0.22f);
glVertex2f(-0.47f,-0.22f);
glVertex2f(-0.47f,-0.20f);
glEnd();
  glBegin(GL_POLYGON);
glColor3ub(139, 255, 200);
glVertex2f(-0.38f,-0.18f);
glVertex2f(-0.36f,-0.20f);
glVertex2f(-0.47f,-0.20f);
glVertex2f(-0.47f,-0.18f);
glEnd();
glColor3ub(128, 128, 128);///chaka
    circleSolid(-0.38f,-0.22f,0.01);
    circleSolid(-0.45f,-0.22f,0.01);
glColor3ub( 255, 255, 255);///chaka
    circleSolid(-0.38f,-0.22f,0.006);
    circleSolid(-0.45f,-0.22f,0.006);
    ///border
    glBegin(GL_LINES);///borders
    glColor3ub(37, 65, 23);
    glVertex2f(-0.36f,-0.20f);
    glVertex2f(-0.47f,-0.20f);
    glEnd();
    glBegin(GL_LINES);///borders
    glColor3ub(37, 65, 23);
    glVertex2f(-0.38f,-0.18f);
    glVertex2f(-0.47f,-0.18f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(37, 65, 23);
    glVertex2f(-0.38f,-0.18f);
    glVertex2f(-0.36f,-0.20f);
    glEnd();
        glBegin(GL_LINES);
    glColor3ub(37, 65, 23);
    glVertex2f(-0.39f,-0.18f);
    glVertex2f(-0.39f,-0.22f);
    glEnd();
          glBegin(GL_LINES);
    glColor3ub(37, 65, 23);
    glVertex2f(-0.45f,-0.18f);
    glVertex2f(-0.45f,-0.21f);
    glEnd();

                glBegin(GL_LINES);
    glColor3ub(37, 65, 23);
    glVertex2f(-0.36f,-0.20f);
    glVertex2f(-0.47f,-0.20f);
    glEnd();

    glBegin(GL_POLYGON);///light
glColor3ub(255,255,255);
glVertex2f(-0.36f,-0.20f);
glVertex2f(-0.36f,-0.21f);
glVertex2f(-0.37f,-0.21f);
glVertex2f(-0.37f,-0.20f);
glEnd();
      glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(-0.47f,-0.20f);
glVertex2f(-0.47f,-0.21f);
glVertex2f(-0.46f,-0.21f);
glVertex2f(-0.46f,-0.20f);
glEnd();
glPopMatrix();
    glutSwapBuffers();
}


void drawScene2()///night
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    gluOrtho2D(-0.50, 0.50, -0.50, 0.50);


skynight();
NM();
Road();
footpath();
flagnight();
Nightriver();
roadDivider();
smallHouse();
NightrightBuilding();
NightsmallLeftBuilding();
LeftBuilding();
NightMosque();
NightsingleLineBuilding();
parknight();
Nighttrees();

clouds();
car1();
car2();
car3();
car4();
car5();
car6();
car7();
car8();
carRight1();
carRight2();
carRight3();
Nighttreeriverside();
plane();
boat1();
boat2();
glFlush();
}
void drawScene3()///evening
{
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

gluOrtho2D(-0.50, 0.50, -0.50, 0.50);

skyevening();
NM();
Road();
footpath();
flag();
river();
roadDivider();
smallHouse();
rightBuilding();
smallLeftBuilding();
LeftBuilding();
Mosque();
singleLineBuilding();
park();
trees();
clouds();
car1();
car2();
car3();
car4();
car5();
car6();
car7();
car8();
carRight1();
carRight2();
carRight3();
treeriverside();
plane();
boat1();
boat2();

glFlush();
}
void drawScene()///morning
{
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

gluOrtho2D(-0.50, 0.50, -0.50, 0.50);

sky();
NM();
Road();
footpath();
flag();
river();
roadDivider();
smallHouse();
rightBuilding();
smallLeftBuilding();
LeftBuilding();
Mosque();
singleLineBuilding();
park();
trees();
clouds();
car1();
car2();
car3();
car4();
car5();
car6();
car7();
car8();
carRight1();
carRight2();
carRight3();
treeriverside();
plane();
boat1();
boat2();

glFlush();
}



void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{	_speedcarright += 0.01f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{_speedcarright -= 0.01f;   }
glutPostRedisplay();}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'a':
   _speedcarright = 0.00f;
    break;
case 's':
    _speedcarright = 0.05f;
    break;
case 'w':
    _speedboat =0.05;
     break;
case 'q':
    _speedboat =0.00;
     break;

case 'n':
        glutDestroyWindow(1);
//glutInit(&argc, argv);
glutInitWindowSize(600, 600); // Initialize GLUT
glutInitWindowPosition(50, 50);
glutCreateWindow("Night View"); // Create a window with the given title

glutDisplayFunc(drawScene2);



           glutKeyboardFunc(handleKeypress);
           glutMouseFunc(handleMouse);
           glutMainLoop();
break;
case 'm':
    glutDestroyWindow(1);
//glutInit(&argc, argv);
glutInitWindowSize(600, 600); // Initialize GLUT
glutInitWindowPosition(50, 50);
glutCreateWindow("Morning View"); // Create a window with the given title

glutDisplayFunc(drawScene);
           glutKeyboardFunc(handleKeypress);
           glutMouseFunc(handleMouse);
           glutMainLoop();
           break;

case'b':
    glutDestroyWindow(1);
//glutInit(&argc, argv);
glutInitWindowSize(600, 600); // Initialize GLUT
glutInitWindowPosition(50, 50);
glutCreateWindow("Evening View"); // Create a window with the given title

glutDisplayFunc(drawScene3);
           glutKeyboardFunc(handleKeypress);
           glutMouseFunc(handleMouse);
           glutMainLoop();
           break;

	}
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(600, 600); // Initialize GLUT
glutInitWindowPosition(50, 50);
glutCreateWindow("Scenario "); // Create a window with the given title
//glutInitWindowSize(1300, 1300);

//glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

//gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
// Set the window's initial width & height
glutDisplayFunc(drawScene); // Register display callback handler for window re-paint


glutTimerFunc(20, updateb1, 0);
glutTimerFunc(20, updatecl2, 0);
glutTimerFunc(20, updatecarright, 0);
glutTimerFunc(20, updatecarright2, 0);
glutTimerFunc(20, updatecarright3, 0);


   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
glutMainLoop(); // Enter the event-processing loop
return 0;
}
