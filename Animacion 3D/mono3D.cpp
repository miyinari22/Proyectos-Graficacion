#include <GL/glut.h>

void inicializa(void){ /*Inicializa la ventana */
	glClearColor(1.0,1.0,1.0,0.0); /*Cambia el color de la ventana a color negro*/
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,0,5,0,0,0,0,1,5);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(45,1,1,12);
}

void cabeza (void){
	glColor3f(0,1,0);
	glPushMatrix();
	glTranslatef(0,.1,0);
	glutWireSphere(.5,40,30);
	glPopMatrix();
}

void cuerpo(void){
	glColor3f(0,1,0);
	glPushMatrix();
	glScalef(.5,1,1);
	glTranslatef(0,-1,0);
	glutWireSphere(.7,40,30);
	glPopMatrix();
}
	
void piernaI(void){
	glColor3f(0,1,0);
	glPushMatrix();
	glScalef(.5,1,1);
	glTranslatef(-.6,-1.5,0);
	glutWireSphere(.5,40,30);
	glPopMatrix();
}
	
void piernaD(void){
	glColor3f(0,1,0);
	glPushMatrix();
	glScalef(.5,1,1);
	glTranslatef(.6,-1.5,0);
	glutWireSphere(.5,40,30);
	glPopMatrix();
}
	
void brazoD(void){
	glColor3f(0,1,0);
	glPushMatrix();
	glScalef(1,.4,1);
	glTranslatef(-.5,-.9,1);
	glutWireSphere(.4,40,30);
	glPopMatrix();
}	

void brazoI(void){
	glColor3f(0,1,0);
	glPushMatrix();
	glScalef(1,.4,1);
	glTranslatef(.5,-.9,1);
	glutWireSphere(.4,40,30);
	glPopMatrix();
}
	
void pintaTodo(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glClear(GL_DEPTH_BUFFER_BIT);
	cabeza();
	cuerpo();
	piernaI();
	piernaD();
	brazoD();
	brazoI();
	glFlush();
}

int main(int argc, char** argv){
	glutInitWindowSize(600,600);
	glutInit(&argc, argv);
	glutCreateWindow("Martinez Reyes Octavio Augusto");
	inicializa();
	glutDisplayFunc(pintaTodo);
	glutMainLoop();
	return 0;
}
