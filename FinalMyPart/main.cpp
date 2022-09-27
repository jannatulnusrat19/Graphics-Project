#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
float _moveb1 = 0.00f;
float _movel1= 0.00f;
//float _movecarright= 0.00f;
//float _movecarright2=0.00f;
//float _movecarright3=0.00f;
//float _speedcarright=0.00f;
float _speedboat=0.00f;


void updateb1(int value) {
 _moveb1 += .02;
if(_moveb1 > 1.00)
{
_moveb1 = -1.00;
}
_moveb1 +=_speedboat;
glutPostRedisplay();
glutTimerFunc(20, updateb1, 0);
}

void updatecl2(int value) {
 _movel1 += .02;
if(_movel1 > 1.00)
{
_movel1 = -1.00;
}

glutPostRedisplay();
glutTimerFunc(100, updatecl2, 0);
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
void boat1()
{

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
     glPushMatrix();
    glTranslatef(_moveb1,-0.50f,0.00f);


     glColor3ub(0,0,0); ///body
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

void singleLineBuilding()
{
    ///left one
 glBegin(GL_POLYGON); //left stick
glColor3ub(48, 103, 84);
glVertex2f(-0.16f,0.20f);
glVertex2f(-0.16f,0.00f);
glVertex2f(-0.15f,0.00f);
glVertex2f(-0.15f,0.20f);
glEnd();
glBegin(GL_POLYGON); //white round
glColor3ub(48, 103, 84);
glVertex2f(-0.15f,0.26f);
glVertex2f(-0.15f,0.25f);
glVertex2f(-0.16f,0.25f);
glVertex2f(-0.16f,0.26f);
glEnd();
 glBegin(GL_POLYGON); // right stick
glColor3ub(0,0,150);
glVertex2f(0.16f,0.20f);
glVertex2f(0.16f,0.00f);
glVertex2f(0.15f,0.00f);
glVertex2f(0.15f,0.20f);
glEnd();
glBegin(GL_POLYGON); //right side head
glColor3ub(225,225,225);
glVertex2f(0.15f,0.25f);
glVertex2f(0.12f,0.23f);
glVertex2f(0.19f,0.23f);
glVertex2f(0.16f,0.25f);
glEnd();

glBegin(GL_POLYGON); //right side head
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
/*void sky()
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
} */

void drawScene2()///night
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    gluOrtho2D(-0.50, 0.50, -0.50, 0.50);

Nightriver();
LeftBuilding();
clouds();
boat1();
boat2();
plane();
glFlush();
}
void drawScene3()///evening
{
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

gluOrtho2D(-0.50, 0.50, -0.50, 0.50);

river();
rightBuilding();
LeftBuilding();
singleLineBuilding();
park();
clouds();
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
//sky();
river();
rightBuilding();
LeftBuilding();
singleLineBuilding();
park();
clouds();
plane();
boat1();
boat2();

glFlush();
}



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {

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
           //glutMouseFunc(handleMouse);
           glutMainLoop();
           break;

	}
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(600, 600); // Initialize GLUT
glutInitWindowPosition(50, 50);
glutCreateWindow("Scenario "); // Create a window with the given title

glutDisplayFunc(drawScene); // Register display callback handler for window re-paint


glutTimerFunc(20, updateb1, 0);
glutTimerFunc(100, updatecl2, 0);


   glutKeyboardFunc(handleKeypress);

glutMainLoop(); // Enter the event-processing loop
return 0;
}
