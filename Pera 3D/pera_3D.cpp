#include <GL/glut.h>
void init(void)
{     glClearColor(1,1,1,0.0);
glMatrixMode(GL_MODELVIEW);
gluLookAt(0, 0, 4 ,0 ,0 ,0 ,0,1,0);
glMatrixMode(GL_PROJECTION);
gluPerspective(35, 1, 1, 20);}

void esfera1(void)
{
	glColor3f(77.0/255.0,131.0/255.0,22.0/255.0);
	glPushMatrix();
	glScalef(0.8,1,1);
	glutSolidSphere(.2,40,30);
	glPopMatrix();
}
void esfera2(void)
{
	glColor3f(77.0/255.0,131.0/255.0,22.0/255.0);
	glPushMatrix();
	glScalef(0.9,1,1);
	glTranslatef(0,-0.5,0);
	glutSolidSphere(0.4,40,30);
	glPopMatrix();
}
void tallo(void)
{
	glColor3f(128.0/255.0,64.0/255.0,0.0);
	glPushMatrix();
	glScalef(0.2,1,1);
	glTranslatef(0,0.3,0);
	glutSolidSphere(0.1,40,30);
	glPopMatrix();}

void ilumina2(void)
{
	GLfloat Posicionytipo[ ]={6,6,6,2};
	GLfloat Colorambiente[ ]={0,0,0,0};
	GLfloat Colordifuso[ ]={0.0,0.9,0.0};
	GLfloat direccion[ ]={0,0,1};
	glLightfv(GL_LIGHT0,GL_POSITION,Posicionytipo);
	glLightfv(GL_LIGHT0,GL_AMBIENT,Colorambiente);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,Colordifuso);
	//Material
	glMaterialf(GL_FRONT,GL_SHININESS,1.0);
	glColorMaterial(GL_FRONT,GL_SPECULAR);
	//atenuaci�n
	glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION,1.0);
	glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0);
	glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, 0);
	//DIRECCIONES
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, direccion);
	glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 10);
	glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 20);
	
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);  
	glEnable(GL_LIGHT1);  
	glEnable(GL_DEPTH_TEST);
}
void desactiva_luz(void)
{
	glDisable(GL_LIGHTING);
	glDisable(GL_COLOR_MATERIAL);
	glDisable(GL_LIGHT0);
	glDisable(GL_LIGHT1);
	glDisable(GL_DEPTH_TEST);
}
void pera(void)
{     glClear(GL_COLOR_BUFFER_BIT);
glClear(GL_DEPTH_BUFFER_BIT);
ilumina2();
esfera1();
esfera2();
desactiva_luz();
tallo();      glFlush();  }



int main(int argc, char **argv)
{
	glutInit(&argc, argv);    
	glutInitWindowSize(600, 600);
	glutCreateWindow("Iluminacion");
	init();
	glutDisplayFunc(pera);    
	glutMainLoop();
	return 0;}
