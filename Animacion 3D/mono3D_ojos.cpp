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
	glutSolidSphere(.5,40,30);
	glPopMatrix();
}

void ojoD(){
	glColor3f(1,1,1);
	glPushMatrix();
	glScalef(.5,.9,1);
	glTranslatef(-.5,.2,0);
	glutSolidSphere(.2,40,30);
	glPopMatrix();
}
	
void pupilaD(){
	glColor3f(1,0,1);
	glPushMatrix();
	glScalef(.2,.4,1);
	glTranslatef(-1.3,.4,0);
	glutSolidSphere(.2,40,30);
	glPopMatrix();
}
	
void pupilaD1(){
	glColor3f(1,0,1);
	glPushMatrix();
	glScalef(.2,.4,1);
	glTranslatef(-1,.4,0);
	glutSolidSphere(.2,40,30);
	glPopMatrix();
}
 	
void ojoI(){
	glColor3f(1,1,1);
	glPushMatrix();
	glScalef(.5,.9,1);
	glTranslatef(.5,.2,0);
	glutSolidSphere(.2,40,30);
	glPopMatrix();
}
	
void pupilaI(){
	glColor3f(1,0,1);
	glPushMatrix();
	glScalef(.2,.4,1);
	glTranslatef(1.3,.4,0);
	glutSolidSphere(.2,40,30);
	glPopMatrix();
}

void pupilaI1(){
	glColor3f(1,0,1);
	glPushMatrix();
	glScalef(.2,.4,1);
	glTranslatef(1,.4,0);
	glutSolidSphere(.2,40,30);
	glPopMatrix();
}
	
void boca(){
	glColor3f(1,0,0);
	glPushMatrix();
	glScalef(1.1,0.2,1);
	glTranslatef(0,-.9,0);
	glutSolidSphere(.2,40,30);
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
	int i;
	for(i=0; i<200; i++){
		glClear(GL_COLOR_BUFFER_BIT);
		glClear(GL_DEPTH_BUFFER_BIT);
		cabeza();
		ojoD();
		ojoI();
		if(i%2==0){
			glPushMatrix();
			pupilaI();
			pupilaD();
			glPopMatrix();
		}else{
			glPushMatrix();
			pupilaI1();
			pupilaD1();
			glPopMatrix();
		}
		boca();
		cuerpo();
		piernaI();
		piernaD();
		brazoD();
		brazoI();
		glFlush();
		Sleep(150);
	}
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
