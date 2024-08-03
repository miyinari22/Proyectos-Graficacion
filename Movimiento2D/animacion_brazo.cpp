#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

void inicializa (void){
	glClearColor(1.0,1.0,1.0,0.0); //Color del fondo RGBA (A no interesa por ahora)
	glMatrixMode(GL_PROJECTION); //Para el tipo de matriz a usar
	gluOrtho2D(0,800,0,800);
}

void asientoEspalda(void){
	glColor3f(128.0/255.0,0.0,64.0/255);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(200,700); glVertex2i(200,150);
	glEnd();
}

void asiento(void){
	glColor3f(128.0/255.0,128.0/255,64.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(200,150); glVertex2i(590,150);
	glEnd();
}

void piernaDer(void){
	glColor3f(251.0/255.0,199.0/255,159.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(350,170); glVertex2i(500,170);
	glEnd();
}	
	
void piernaIzq(void){
	glColor3f(255.0/255.0,164.0/255,209.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(350,185); glVertex2i(480,185);
	glEnd();
}	

void tronco (void){
	glColor3f(255.0/255.0,127.0/255,9.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(350,400); glVertex2i(350,165);
	glEnd();
}
	
void brazoL (void){
	glColor3f(0.0,0.0,128.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(350,350); glVertex2i(480,350);
	glEnd();
}
	
void brazoC(void){
	glColor3f(0.0,0.0,128.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(350,365); glVertex2i(450,365);
	glEnd();
}

void brazoC1(void){
	glColor3f(0.0,0.0,128.0/255.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(350,365); glVertex2i(450,465);
	glEnd();
}


void cabeza(void){
	double radio=100.0,teta,incremento,x,y;
	int n=500;
	incremento=2*M_PI/n;
	glPointSize(2.0);
	glColor3f(1,0,1);
	
	for(int i=0;i<=n;i++){
		teta=i*incremento;
		x=radio*cos(teta);
		y=radio*sin(teta);
		glBegin(GL_POINTS);
		glVertex2f(x+350,y+500);
		glEnd();
	}
	
}
	
void boca (void){
	glColor3f(0.0,0.0,0.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2i(350,450); glVertex2i(440,450);
	glEnd();
}

void boca1(void){
	glColor3f(0.0,0.0,0.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2i(320,450); glVertex2i(400,450);
	glEnd();
}	
	
void ojo(void){
	double radio=20.0,teta,incremento,x,y;
	int n=500;
	incremento=2*M_PI/n;
	glPointSize(2.0);
	glColor3f(0,0,0);
	
	for(int i=0;i<=n;i++){
		teta=i*incremento;
		x=radio*cos(teta);
		y=radio*sin(teta);
		glBegin(GL_POINTS);
		glVertex2f(x+378,y+520);
		glEnd();
	}
}
	
void pupila (void){
	glPointSize(6);
	glColor3f(0,0,0);
	glBegin(GL_POINTS);
	glVertex2i(390,520);
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
	glClear(GL_COLOR_BUFFER_BIT);
	asientoEspalda();
	asiento();
	piernaDer();
	piernaIzq();
	tronco();
	brazoL();
	brazoC();
	cabeza();
	boca();
	ojo();
	pupila();
	glFlush();
}
	
	
void pinta1(void){
	glClear(GL_COLOR_BUFFER_BIT);
	asientoEspalda();
	asiento();
	piernaDer();
	piernaIzq();
	tronco();
	brazoL();
	brazoC1();
	cabeza();
	boca();
	ojo();
	pupila();
	glFlush();
}
		
void anima(void){
	int i;
	for(i=0;i<50;i++){
		if(i%5==0){
			pinta();
			Sleep(100);
		}else{
			pinta1();
			Sleep(100);
		}
	}
}

int main(int argc, char** argv){
	glutInitWindowSize(400,400);
	glutInit(&argc, argv);
	glutCreateWindow("Martinez Reyes Octavio Augusto");
	inicializa();
	glutDisplayFunc(anima);
	glutMainLoop();
	return 0;
}
