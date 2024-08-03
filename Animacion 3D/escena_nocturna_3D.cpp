#include <GL/glut.h>

void inicializa(void){ /*Inicializa la ventana */
	glClearColor(32.0f/255.0f, 39.0f/255.0f, 65.0f/255.0f, 1.0f);  /*Cambia el color de la ventana a color azul fuerte*/
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,0,5,0,0,0,0,1,5);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(45,1,1,22);
}

void luna(){
	glColor3f(1,1,1);
	glPushMatrix();
	glScalef(1.5,1.5,1);
	glTranslatef(1,1,0);
	glutSolidSphere(.4,40,30);
	glPopMatrix();
}
void calle(){
	glColor3f(127.0/255.0,127.0/255.0,127.0/255.0);
	glPushMatrix();
	glRotated(10,1,1,0);
	glTranslated(.1,-4.9,-6);
	glScaled(1,-.1,1);
	glutSolidCube(14.0);
	glPopMatrix();
}
	
//Casa
void casa(){
	glColor3f(128.0/255.0,0.0,64.0/255);
	glPushMatrix();
	glRotated(10,0,1,0);
	glTranslatef(1.6,-.2,-6);
	glScalef(6,3,1);
	glutSolidCube(1.3);
	glPopMatrix();
}
	
void puerta(){
	glColor3f(128.0/255.0,64.0/255.0,64.0/255.0);
	glPushMatrix();
	glRotated(10,0,1,0);
	glTranslatef(1.6,-.9,-5.9);
	glScalef(1,2,1);
	glutSolidCube(1.3);
	glPopMatrix();
}

void ventana1(){
	glColor3f(128.0/255.0,1,1);
	glPushMatrix();
	glRotated(10,0,1,0);
	glTranslatef(3.8,-.1,-5.9);
	glScalef(1.5,1,1);
	glutSolidCube(1.3);
	glPopMatrix();
}
	
void ventana2(){
	glColor3f(128.0/255.0,1,1);
	glPushMatrix();
	glRotated(10,0,1,0);
	glTranslatef(-1,-.1,-5.91);
	glScalef(1.7,1,1);
	glutSolidCube(1.3);
	glPopMatrix();
}

void picaporte(){
	glColor3f(190.0/255.0,168.0/255.0,44.0/255.0);
	glPushMatrix();
	glRotated(10,0,1,0);
	glTranslatef(2,-1,-4.9);
	glutSolidSphere(.09,6,3);
	glPopMatrix();
}
	
void texto(){
	GLfloat x=0.58;
	GLfloat y=0.14;
	GLfloat z=3.1;
	GLubyte label[]={'F','A','M','.',' ','R', 'E', 'Y', 'E' ,'S'};
	GLint k;
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glRotated(10,0,1,0);
	for (k=0; k<10 ;k++){
		glRasterPos3f(x,y,z);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k]);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k+1]);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k+2]);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k+3]);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k+4]);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k+5]);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k+6]);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k+7]);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k+8]);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, label[k+9]);
		x+=15.0;
	}
	glPopMatrix();
}
//Arboles
void tronco(){
	glColor3f(128.0/255.0,64.0/255.0,0.0);
	glPushMatrix();
	glTranslatef(-3,-2.9,-4.5);
	glScalef(1,2.5,1.1);
	glutSolidSphere(.4,20,30);
	glPopMatrix();
}
	
void pino(){
	glColor3f(128.0/255.0,1.0,0.0);
	glPushMatrix();
	glTranslated(-3,2.4,-10);
	glRotated(-90,1,0,0);
	glutSolidCone(.9,4,10,22);
	glPopMatrix();
	glFlush();
}
	
void tronco2(){
	glColor3f(128.0/255.0,64.0/255.0,0.0);
	glPushMatrix();
	glTranslatef(3.5,-2.9,-5.5);
	glScalef(1,2.5,1.1);
	glutSolidSphere(.4,20,30);
	glPopMatrix();
}
	
void pino2(){
	glColor3f(128.0/255.0,1.0,0.0);
	glPushMatrix();
	glTranslated(3.5,2.4,-11);
	glRotated(-90,1,0,0);
	glutSolidCone(.9,4,10,22);
	glPopMatrix();
	glFlush();
}

void estrellas(){ //Estrellas u OVNIS
	glColor3f(205.0/255.0,205.0/255.0,205.0/255.0);
	
	glPushMatrix();
	glScaled(.2,.2,.5);
	glTranslated(-3.5,24.4,-31);
	glutSolidSphere(1,10,10);
	glPopMatrix();

	glPushMatrix();
	glScaled(.2,.2,.5);
	glTranslated(-3.5,34.4,-31);
	glutSolidSphere(1,10,10);
	glPopMatrix();
	
	glPushMatrix();
	glScaled(.2,.2,.5);
	glTranslated(-10.5,24.4,-31);
	glutSolidSphere(1,10,10);
	glPopMatrix();
	
	glPushMatrix();
	glScaled(.2,.2,.5);
	glTranslated(-15.5,34.4,-31);
	glutSolidSphere(1,10,10);
	glPopMatrix();
	
	glPushMatrix();
	glScaled(.2,.2,.5);
	glTranslated(-20.5,24.4,-31);
	glutSolidSphere(1,10,10);
	glPopMatrix();
	glPushMatrix();
	glScaled(.2,.2,.5);
	glTranslated(-30.5,34.4,-31);
	glutSolidSphere(1,10,10);
	glPopMatrix();
	

	glPushMatrix();
	glScaled(.2,.2,.5);
	glTranslated(-25.5,31.4,-31);
	glutSolidSphere(1,10,10);
	glPopMatrix();
	
	glFlush();
}
	
//Patin del diablo
void fierro(){
	glColor3f(1.0,140.0/255.0,13.0/255);
	glPushMatrix();
	glTranslatef(1.25,-1.4,-0.5);
	glScalef(1,.1,1);
	glutSolidCube(.8);
	glPopMatrix();
}

void manubrio(){
	glColor3f(1.0,140.0/255.0,13.0/255);
	glPushMatrix();
	glTranslatef(.8,-1.1,-.3);
	glRotated(-90,0,0,1);
	glScalef(.9,.1,1);
	glutSolidCube(.5);
	glPopMatrix();
}
void rueda1Bici(){
	glColor3f(49.0/255.0,49.0/255.0,49.0/255.0);
	glPushMatrix();
	glTranslated(1.7,-1.4,-0.6);
	glScalef(-.5,-.5,1);
	glutSolidTorus(.1,.2,10,30);
	glPopMatrix();
}

void rueda2Bici(){
	glColor3f(49.0/255.0,49.0/255.0,49.0/255.0);
	glPushMatrix();
	glTranslated(.75,-1.4,-0.3);
	glScalef(-.5,-.5,1);
	glutSolidTorus(.1,.2,10,30);
	glPopMatrix();
}
//muñeco
void cabeza(){
	glColor3f(230.0/255.0,143.0/255.0,106.0/255.0);
	glPushMatrix();
	glTranslatef(1.4,-.4,0);
	glutSolidSphere(.2,20,10);
	glPopMatrix();
}
	
void cuerpo(){
	glColor3f(128.0/255.0,1.0,1.0);
	glPushMatrix();
	glScalef(.5,1.4,1);
	glTranslatef(2.8,-.68,0);
	glutSolidSphere(.3,20,10);
	glPopMatrix();
}
void ojoD(){
	glColor3f(0,0,0);
	glPushMatrix();
	glScalef(.2,.2,1);
	glTranslatef(6.5,-1.6,0);
	glutSolidSphere(.2,10,30);
	glPopMatrix();
}
	
void ojoI(){
	glColor3f(0,0,0);
	glPushMatrix();
	glScalef(.2,.2,1);
	glTranslatef(7.5,-1.6,0);
	glutSolidSphere(.2,10,30);
	glPopMatrix();
}
	
void pierna1(){
	glColor3f(211.0/255.0,240.0/255.0,123.0/255.0);
	glPushMatrix();
	glScalef(.3,1.5,1);
	glTranslatef(4.3,-1,0);
	glutSolidSphere(.26,20,10);
	glPopMatrix();
}

void pierna2(){
	glColor3f(211.0/255.0,240.0/255.0,123.0/255.0);
	glPushMatrix();
	glScalef(.3,1.5,1);
	glTranslatef(5.1,-1,0);
	glutSolidSphere(.26,20,10);
	glPopMatrix();
}

void brazo1(){
	glColor3f(230.0/255.0,143.0/255.0,106.0/255.0);
	glPushMatrix();
	glScalef(1,.5,1);
	glTranslatef(1.2,-1.5,0);
	glutSolidSphere(.23,20,10);
	glPopMatrix();
}

void brazo2(){
	glColor3f(230.0/255.0,143.0/255.0,106.0/255.0);
	glPushMatrix();
	glScalef(1,.5,1);
	glTranslatef(1.6,-1.5,0);
	glutSolidSphere(.23,20,10);
	glPopMatrix();
}

void boca(){
	glColor3f(1,0,0);
	glPushMatrix();
	glScalef(0.3,0.2,1);
	glTranslatef(4.8,-2,.4);
	glutSolidSphere(.2,40,30);
	glPopMatrix();
}
	
void regadera(){
	glColor3f(195.0/255.0,195.0/255.0,195.0/255.0);
	glPushMatrix();
	glTranslated(.7,-.77,-10);
	glRotated(180,0,1,0);
	glutSolidTeapot(.23);
	glPopMatrix();
}


//Botes de basura
void boteInorganico(){
	glColor3f(1.0,0.0,0.0);
	glPushMatrix();
	glRotated(10,0,1,0);
	glTranslatef(2.3,-1.5,-3);
	glScalef(.5,.7,1);
	glutSolidCube(1.3);
	glPopMatrix();
}

void tapaBoteInorganico(){
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glRotated(10,0,1,0);
	glTranslatef(2.3,-1.4,-3);
	glScalef(.5,.7,1);
	glutSolidCube(1.3);
	glPopMatrix();
}
	
void boteOrganico(){
	glColor3f(181.0/255.0,230.0/255.0,29.0/255.0);
	glPushMatrix();
	glRotated(10,0,1,0);
	glTranslatef(.2,-1.5,-3);
	glScalef(.5,.7,1);
	glutSolidCube(1.3);
	glPopMatrix();
}
	
void tapaBoteOrganico(){
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glRotated(10,0,1,0);
	glTranslatef(.2,-1.4,-3.03);
	glScalef(.5,.6,1);
	glutSolidCube(1.3);
	glPopMatrix();
}

void letrero(){
	glColor3f(128.0/255.0,64.0/255.0,0.0);
	glPushMatrix();
	glRotated(10,0,1,0);
	glTranslatef(1.5,.8,-5.5);
	glScalef(1,.4,1);
	glutSolidCube(1.3);
	glPopMatrix();
}

void muneco(){
	glPushMatrix();
	glTranslated(0,0,-1);
	cabeza();
	cuerpo();
	ojoI();
	ojoD();
	boca();
	pierna1();
	pierna2();
	brazo1();
	brazo2();
	regadera();
	glPopMatrix();
}
	
	
void patin(){
	fierro();
	manubrio();
	rueda1Bici();
	rueda2Bici();
}

void paisaje(){
	calle();
	casa();
	picaporte();
	puerta();
	boteInorganico();
	tapaBoteInorganico();
	tapaBoteOrganico();
	boteOrganico();
	ventana1();
	ventana2();
	letrero();
}
void ilumina2(void){
	GLfloat Posicionytipo[ ]={6,6,6,2};
	GLfloat Colorambiente[ ]={0,0,0,0};
	GLfloat Colordifuso[ ]={1.0,1.0,1.0};
	GLfloat direccion[ ]={0,0,1};
	glLightfv(GL_LIGHT0,GL_POSITION,Posicionytipo);
	glLightfv(GL_LIGHT0,GL_AMBIENT,Colorambiente);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,Colordifuso);
	
	//Material
	glMaterialf(GL_FRONT,GL_SHININESS,1.0);
	glColorMaterial(GL_FRONT,GL_EMISSION);
	
	//atenuación
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

void desactiva_luz(void){
	glDisable(GL_LIGHTING);
	glDisable(GL_COLOR_MATERIAL);
	glDisable(GL_LIGHT0);
	glDisable(GL_LIGHT1);
	glDisable(GL_DEPTH_TEST);
}
	
void mueve(){
	int i;
	for(i=0;i<50;i++){
		glClear(GL_COLOR_BUFFER_BIT);
		glClear(GL_DEPTH_BUFFER_BIT);
		glPushMatrix();
		glTranslated(1.5,0,0);
		luna();
		estrellas();
		paisaje();
		tronco();
		pino();
		tronco2();
		pino2();
		texto();
		glPopMatrix();
		cabeza();
		cuerpo();
		ojoI();
		ojoD();
		boca();
		pierna1();
		pierna2();
		ilumina2();
		if(i%5==0){
			glPushMatrix();
			brazo1();
			regadera();
			glPopMatrix();
		}else{
			glPushMatrix();
			glRotatef(5.0,0.0,0.0,1.0);
			brazo1();
			regadera();
			glPopMatrix();
		}
		brazo2();
		glFlush();
		Sleep(100);
	}
	
}
	
void pintaTodo(){

	int i;
	
	for (i=0; i<20; i++){
		glClear(GL_COLOR_BUFFER_BIT);
		glClear(GL_DEPTH_BUFFER_BIT);
	
		ilumina2();
		glTranslated(-.1,0,0);
		muneco();
		patin();
	
		Sleep(200);
		glFlush();
		
	}

	mueve();
	glPushMatrix(),
	glTranslated(2,.02,2);
	pino();
	tronco();
	glPopMatrix();
	desactiva_luz();
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
