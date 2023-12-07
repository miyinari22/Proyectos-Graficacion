/*Alumno: Octavio Augusto Martinez Reyes     	Matricula:201904948 */
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

void inicializa();
void luna();
void estrellas();
void escena();
void persona();
void escoba();
void basura();
void pinta();
void anima();
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

void inicializa(void){ /*Inicializa la ventana */
	glClearColor(32.0f/255.0f, 39.0f/255.0f, 65.0f/255.0f, 1.0f); /*Cambia el color de la ventana aun gris azulado*/
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-400,400,-400,400);
}

void luna(void){
	float i = 0, radio=200, calx, caly;
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	
	for (i=0;i<10; i+=0.01){
		calx= radio * cos(i);
		caly= radio * sin(i);
		glVertex2f(calx+400,caly+400);
	}
	glEnd();
}

	
void estrellas(void){
	glColor3f(1,1,1);
	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex2i(50,225); glVertex2i(70,245); glVertex2i(100,225); glVertex2i(90,235);
	glVertex2i(-110,225); glVertex2i(100,245); glVertex2i(-90,255); glVertex2i(-90,225);
	glVertex2i(-329,210); glVertex2i(250,345); glVertex2i(100,300); glVertex2i(-200,235);
	glVertex2i(-250,310); glVertex2i(-180,245); glVertex2i(-119,390); glVertex2i(-119,250);
	glVertex2i(-90,299); glVertex2i(-301,265); glVertex2i(-389,282); glVertex2i(-80,260);
	glEnd();
}
		
void techo(void){
	glColor3f(127.0/255.0,127.0/255.0,127/255.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(-400,120); glVertex2i(-380,180); glVertex2i(290,180);
	glColor3f(1,1,1);
	glVertex2i(200,120);
	glEnd();
}

void fachada(void){
	glColor3f(128.0/255.0,0.0,64.0/255);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(-400,120); glVertex2i(200,120); glVertex2i(200,-200); 
	glColor3f(74.0/255.0, 0.0, 37.0/255.0);
	glVertex2i(-400,-200);
	glEnd();
}
	
void esquina(void){
	glColor3f(74.0/255.0, 0.0, 37.0/255.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(290,180); glVertex2i(200,120); glVertex2i(200,-200); glVertex2i(290,-150);
	glEnd();
}
	
	
void banqueta(void){
	glColor3f(195.0/255.0, 195.0/255.0, 195.0/255.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(-400,-200); glVertex2i(200,-200);
	glColor3f(74.0/255.0, 74.0/255.0, 74.0/255.0);
	glVertex2i(220,-250); glVertex2i(-400,-250);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(74.0/255.0, 74.0/255.0, 74.0/255.0);
	glVertex2i(200,-200);glVertex2i(290,-150); glVertex2i(350,-150); glVertex2i(220,-250); 
	glEnd();
	
	glColor3f(255.0/255.0,255.0/255.0,125.0/255.0);  ////Linea Amarilla
	glBegin(GL_POLYGON);
	glVertex2i(-400,-250); glVertex2i(-400,-260); glVertex2i(220,-260); glVertex2i(220,-250);
	glEnd();
	glColor3f(164.0/255.0,164.0/255.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(220,-260); glVertex2i(220,-250); glVertex2i(340,-150); glVertex2i(350,-150);
	glEnd();
}
	
void texto(void){
	GLint x=-300;
	GLint y=-260;
	GLubyte label[]={'N','O',' ','E','X','C','A','V','A','R'};
	GLint k;
	glColor3f(0.0,0.0,0.0);
	for (k=0;k<10;k++){
		glRasterPos2i(x,y);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k]);
		x+=15;
	}
}
	
void calle(void){
	glColor3f(255.0/255.0,242.0/255.0,0.0);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(2,0x0C0F);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2i(-400,-320);glVertex2i(400,-320);
	glVertex2i(320,-260); glVertex2i(400,-150);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
	
	////Alcantarillas///
	glColor3f(32.0/255.0,32.0/255.0,32.0/255.0);
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glVertex2i(-400,-260); glVertex2i(-350,-260); glVertex2i(-350,-280); glVertex2i(-400,-280);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(220,-260); glVertex2i(220,-280); glVertex2f(170,-280); glVertex2f(170,-260);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(-390,-260); glVertex2i(-390,-280); glVertex2i(-380,-260); glVertex2i(-380,-280);
	glVertex2i(-370,-260); glVertex2i(-370,-280); glVertex2i(-360,-260); glVertex2i(-360,-280);
	glVertex2i(210,-260); glVertex2i(210,-280); glVertex2i(190,-260); glVertex2i(190,-280);
	glVertex2i(200,-260); glVertex2i(200,-280); glVertex2i(180,-260); glVertex2i(180,-280);
	glEnd();
}
	
void linea_Amarilla(void){
	glColor3f(255.0/255.0,242.0/255.0,0.0);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(2,0x0C0F);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2i(-800,-320);glVertex2i(400,-320);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
}
void reciclaje(){
	glBegin(GL_POLYGON);
	glColor3f(128.0/255.0,255.0/255.0,0.0);
	glVertex2i(-380,-250), glVertex2i(-340,-250); glVertex2i(-340,-210); glVertex2f(-380,-210);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(202.0/255.0,7.0/255.0,2.0/255.0);
	glVertex2i(-320,-250), glVertex2i(-280,-250); glVertex2i(-280,-210); glVertex2f(-320,-210);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(32.0/255.0,32.0/255.0,32.0/255.0);
	glVertex2i(-315,-215), glVertex2i(-285,-215); glVertex2i(-285,-210); glVertex2f(-315,-210);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(32.0/255.0,32.0/255.0,32.0/255.0);
	glVertex2i(-375,-215), glVertex2i(-345,-215); glVertex2i(-345,-210); glVertex2f(-375,-210);
	glEnd();
}
	
void ventanas(void){
	glColor3f(97.0/255.0,197.0/255.0,222.0/255.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(-250,-150); 
	glColor3f(32.0/255.0,38.0/255.0,119.0/255.0);
	glVertex2i(-150,-150); glVertex2i(-150,-70); glVertex2i(-250,-70);
	glEnd();
	
	glColor3f(97.0/255.0,197.0/255.0,222.0/255.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(-250,0); 
	glColor3f(32.0/255.0,38.0/255.0,119.0/255.0);
	glVertex2i(-150,0); glVertex2i(-150,70); glVertex2i(-250,70);
	glEnd();
	
	glColor3f(97.0/255.0,197.0/255.0,222.0/255.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(10,-150); 
	glColor3f(32.0/255.0,38.0/255.0,119.0/255.0);
	glVertex2i(100,-150); glVertex2i(100,-70); glVertex2i(10,-70);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(228.0/255.0,190.0/255.0,35.0/255.0);
	glVertex2i(10,0); 
	glColor3f(97.0/255.0,197.0/255.0,222.0/255.0);
	glVertex2i(100,0); glVertex2i(100,70); glVertex2i(10,70);
	glEnd();
	
	glBegin(GL_LINES); //Herraje
	glColor3f(180.0/255.0,180.0/255.0,180.0/255.0);
	glVertex2i(-200,-150); glVertex2i(-200,-70); glVertex2i(50,-150); glVertex2i(50,-70);
	glVertex2i(-250,-110); glVertex2i(-150, -110); glVertex2f(10,-110); glVertex2i(100,-110);
	glEnd();
	
}

void puerta(void){
	glBegin(GL_POLYGON);
	glColor3f(71.0/255.0,14.0/255.0,3.0/255.0);
	glVertex2i(-350,-200); glVertex2i(-280,-200); 
	glVertex2i(-280,-70); glVertex2i(-350,-70);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(40.0/255.0,7.0/255.0,2.0/255.0);
	glVertex2i(-340,-190); glVertex2i(-290,-190); 
	glVertex2i(-290,-80); glVertex2i(-340,-80); glVertex2i(-340,-190);
	glEnd();
}
void picaporte(void){
	float r=5, x2, y2, i; //Picaporte///

	glBegin(GL_POLYGON);
	glColor3f(228.0/255.0,190.0/255.0,35.0/255.0);
	
	for (i=0;i<10; i+=0.01){
		x2= r * cos(i);
		y2= r * sin(i);
		glVertex2f(x2-290,y2-150);
	}
	glEnd();
}

void arbol(void){
	glBegin(GL_POLYGON); //Tronco del Arbol/
	glColor3f(185.0/255.0,122.0/255.0,87.0/255.0);
	glVertex2i(-70,-150); glVertex2i(-40,-150); 
	glColor3f(72.0/255.0,24.0/255.0,29.0/255.0);
	glVertex2i(-40,-250); glVertex2i(-70,-250);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(10.0/255.0,82.0/255.0,22.0/255.0);
	glVertex2i(-50,0);  
	glColor3f(12.0/255.0,61.0/255.0,27.0/255.0);
	glVertex2i(-35,-25); glVertex2i(-65,-25);
	glColor3f(10.0/255.0,82.0/255.0,22.0/255.0);
	glVertex2i(-50,-15); 
	glColor3f(12.0/255.0,61.0/255.0,27.0/255.0);
	glVertex2i(-20,-50); glVertex2i(-80,-50);
	glColor3f(10.0/255.0,82.0/255.0,22.0/255.0);
	glVertex2i(-50,-30);  
	glColor3f(12.0/255.0,61.0/255.0,27.0/255.0);
	glVertex2i(-5,-100); glVertex2i(-100,-100);
	glColor3f(10.0/255.0,82.0/255.0,22.0/255.0);
	glVertex2i(-50,-45);  
	glColor3f(12.0/255.0,61.0/255.0,27.0/255.0);
	glVertex2i(5,-150); glVertex2i(-120,-150);
	glColor3f(10.0/255.0,82.0/255.0,22.0/255.0);
	glVertex2i(-50,-60); 
	glColor3f(12.0/255.0,61.0/255.0,27.0/255.0);
	glVertex2i(20,-200); glVertex2i(-140,-200);
	glEnd();
}

void faro(void){
	glBegin(GL_LINE_STRIP);
	glColor3f(17.0/255.0,149.0/255.0,122.0/255.0);
	glVertex2i(290,-150); glVertex2i(290,150); glVertex2i(310,150);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,0);
	glVertex2i(310,150);
	glColor3f(32.0/255.0, 39.0/255.0, 65.0/255.0);
	glVertex2i(330,120); glVertex2i(290,120);
	glEnd();
}
	
void bicicleta(void){
	float i;
	
	glBegin(GL_TRIANGLES); ////Asiento
	glColor3f(28.0/255.0,23.0/255.0,28.0/255.0);
	glVertex2i(128,-170); glVertex2i(125,-190); glVertex2i(110,-190);
	glEnd();
		
	float r2=13, calx2, caly2; ////Llantas de la Bicicleta//
		
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
		for (i=0;i<10; i+=0.01){
			calx2= r2 * cos(i);
			caly2= r2 * sin(i);
			glVertex2f(calx2+150,caly2-200);
		}
	glEnd();
		
	float r3=13, p2x, p2y;
		
	glBegin(GL_POLYGON);
	for (i=0;i<10; i+=0.01){
		p2x= r3* cos(i);
		p2y= r3* sin(i);
		glVertex2f(p2x+50,p2y-200);
	}
	glEnd();
		
		
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(255.0/255.0,128.0/255.0,0.0); ////Soporte de la llanta
	glVertex2i(126,-180); glVertex2i(150,-200);
	glVertex2i(80,-160); glVertex2i(50,-200);
	glColor3f(128.0/255.0,255.0/255.0,0.0); ////Manubrio
	glVertex2i(65,-160); glVertex2i(85,-160);
	glEnd();
	
	glBegin(GL_LINE_STRIP); //Estructura de la bicicleta
	glColor3f(255.0/255.0,128.0/255.0,0.0);
	glVertex2i(100,-190); glVertex2i(65,-190); glVertex2i(50,-200); glVertex2i(150,-200);
	glEnd();
}

	

	
void persona(void){
	float r4=10, px, py, i;
	
	glBegin(GL_POLYGON); ////Cabeza
	glColor3f(1.0,176.0/255.0,176.0/255.0);
	for (i=0;i<10; i+=0.01){
		px= r4* cos(i);
		py= r4* sin(i);
		glVertex2f(px+100,py-130);
	}
	glEnd();
	
	glColor3f(177.0/255.0,250.0/255.0,254.0/255.0);
	glBegin(GL_POLYGON); ////Torso
	glVertex2i(90,-140), glVertex2i(110,-140); glVertex2i(120,-180);
	glColor3f(2.0/255.0,109.0/255.0,115.0/255.0);
	glVertex2i(100,-180);
	glEnd();
	
	glColor3f(155.0/255.0,192.0/255.0,146.0/255.0);
	glBegin(GL_POLYGON); ////Piernas
	glVertex2i(100,-180); glVertex2i(120,-180);
	glColor3f(102.0/255.0,153.0/255.0,89.0/255.0);
	glVertex2i(120,-210); glVertex2i(100,-210);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_POLYGON); ////Zapatos
	glVertex2i(120,-210); glVertex2i(100,-210); glVertex2i(100,-215); glVertex2i(120,-215);
	glEnd();
	
	////ojos	
	glColor3f(0,0,0);
	glPointSize(2);
	glBegin(GL_POINTS);
	glVertex2i(95,-132); glVertex2i(101,-132);
	glEnd();
}
	

void escoba(void){
	glColor3f(128.0/255.0,128.0/255,64.0/255.0);
	glBegin(GL_LINES);
	glVertex2i(100,-150); glVertex2i(85,-210);
	glEnd();
		
	glColor3f(199.0/255.0,171.0/255.0,14.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(50,-210); glVertex2i(100,-210); glVertex2i(100,-225); glVertex2i(50,-225);
	glEnd();
}
	
void escoba1(void){
	glColor3f(128.0/255.0,128.0/255,64.0/255.0);
	glBegin(GL_LINES);
	glVertex2i(100,-150); glVertex2i(55,-210);
	glEnd();
	
	glColor3f(199.0/255.0,171.0/255.0,14.0/255.0);
	glBegin(GL_POLYGON);
	glVertex2i(15,-210); glVertex2i(80,-210); glVertex2i(80,-225); glVertex2i(15,-225);
	glEnd();
}

void basura(void){
	glColor3f(0,0,0);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2i(50,-225); glVertex2i(70,-245); glVertex2i(100,-225); glVertex2i(90,-235);
	glEnd();
}

void basura1(void){
	glColor3f(0,0,0);
	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2i(25,-225); glVertex2i(40,-245); glVertex2i(35,-225); glVertex2i(60,-235);
	glEnd();
}
	
void escena(){
	luna();
	estrellas();
	techo();
	fachada();
	esquina();
	banqueta();
	texto();
	calle();
	reciclaje();
	ventanas();
	puerta();
	picaporte();
	arbol();
	faro();
	persona();
}
	
void pinta(void){
	luna();
	estrellas();
	techo();
	fachada();
	esquina();
	banqueta();
	texto();
	calle();
	reciclaje();
	ventanas();
	puerta();
	picaporte();
	arbol();
	faro();	
	persona();
	escoba();
	basura();
}

void pinta1(void){
	luna();
	estrellas();
	techo();
	fachada();
	esquina();
	banqueta();
	texto();
	calle();
	reciclaje();
	ventanas();
	puerta();
	picaporte();
	arbol();
	faro();	
	persona();
	escoba1();
	basura1();
}

	
void anima(void){
	int i;
	for(i=0;i<50;i++){
		if(i%5==0){
			glClear(GL_COLOR_BUFFER_BIT);
			pinta();
			Sleep(90);
			glFlush();
		}else{
			glClear(GL_COLOR_BUFFER_BIT);
			pinta1();
			Sleep(90);
			glFlush();
		}
	}
}
	
void persona_Mueve(){
	int i;
	glTranslated(450,0,0);
	for(i=1;i<10;i++){
		glClear(GL_COLOR_BUFFER_BIT);
		glTranslatef(-50,0,0);
		luna();
		linea_Amarilla();
		bicicleta();
		estrellas();
		persona();
		Sleep(250);
		glFlush();
	}
	
}

void mueve(void){
	glClear(GL_COLOR_BUFFER_BIT);
	persona_Mueve();
	anima();
	escena(); ////Desaparece la escoba y la basura
	glFlush();
}


