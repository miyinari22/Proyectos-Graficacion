#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

void inicializa();
void piernaDer();
void piernaIzq();
void tronco();
void brazoL();
void brazoC();
void cabeza();
void boca();
void ojo();
void pupila();
void pinta();
void mueve();

int main(int argc, char** argv){
	glutInitWindowSize(800,600);
	glutInit(&argc, argv);
	glutCreateWindow("Martinez Reyes Octavio Augusto");
	inicializa();
	glutDisplayFunc(mueve);
	glutMainLoop();
	return 0;
}



void inicializa (void){
	glClearColor(1.0,1.0,1.0,0.0); //Color del fondo RGBA (A no interesa por ahora)
	glMatrixMode(GL_PROJECTION); //Para el tipo de matriz a usar
	gluOrtho2D(-400,400,-400,400);
}



void piernaDer(void){
	glColor3f(0.0,0.0,128.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(0,-90); glVertex2i(120,-90);
	glEnd();
}	
	
void piernaIzq(void){
	glColor3f(0.0,0.0,128.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(0,-100); glVertex2i(100,-100);
	glEnd();
}	

void tronco (void){
	glColor3f(255.0/255.0,127.0/255,9.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(0,-100); glVertex2i(0,90);
	glEnd();
}
	
void brazoL (void){
	glColor3f(0.0,0.0,128.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(0,50); glVertex2i(100,50);
	glEnd();
}
	
void brazoC(void){
	glColor3f(0.0,0.0,128.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(0,40); glVertex2i(70,40);
	glEnd();
}
	


void cabeza(void){
	double radio=80.0,teta,incremento,x,y;
	int n=500;
	incremento=2*M_PI/n;
	glPointSize(2.0);
	glColor3f(1,0,1);
	
	for(int i=0;i<=n;i++){
		teta=i*incremento;
		x=radio*cos(teta);
		y=radio*sin(teta);
		glBegin(GL_POINTS);
		glVertex2f(x,y+170);
		glEnd();
	}
	
}
	
void boca (void){
	glColor3f(0.0,0.0,0.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2i(0,120); glVertex2i(55,120);
	glEnd();
}
	
void ojo (void){
	double radio=17.0,teta,incremento,x,y;
	int n=500;
	incremento=2*M_PI/n;
	glPointSize(2.0);
	glColor3f(0,0,0);
	
	for(int i=0;i<=n;i++){
		teta=i*incremento;
		x=radio*cos(teta);
		y=radio*sin(teta);
		glBegin(GL_POINTS);
		glVertex2f(x+40,y+180);
		glEnd();
	}
}
	
void pupila (void){
	glPointSize(6);
	glColor3f(0,0,0);
	glBegin(GL_POINTS);
	glVertex2i(40,180);
	glEnd();
}

	
void brazoC1(void){
	glColor3f(0.0,0.0,128.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(350,365); glVertex2i(450,465);
	glEnd();
}	

void boca1(void){
	glColor3f(0.0,0.0,0.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2i(320,450); glVertex2i(400,450);
	glEnd();
}

	
	
void pupila1 (void){
	glPointSize(6);
	glColor3f(0,0,0);
	glBegin(GL_POINTS);
	glVertex2i(363,520);
	glEnd();
}	
	
void pinta(void){
	piernaDer();
	piernaIzq();
	tronco();
	brazoL();
	brazoC();
	cabeza();
	boca();
	ojo();
	pupila();
}

void pinta1(void){
	piernaDer();
	piernaIzq();
	tronco();
	brazoL();
	brazoC1();
	cabeza();
	boca1();
	ojo();
	pupila1();
}	
	
void mueve(void){
	int i;
	glTranslated(-300,-250,0);
	for(i=0; i<16; i++){
		glPushMatrix();
		glClear(GL_COLOR_BUFFER_BIT);
		glTranslated(600 -(i*20),0,0);
		glScalef(-1,1,0);
		pinta();
		glPopMatrix();
		glTranslated(20,0,0);
		pinta();
		Sleep(100);
		glFlush();
	}
}

