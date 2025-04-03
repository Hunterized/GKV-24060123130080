// DIMAS A ALBANNA ZAIN

#include <math.h>
#include <GL/glut.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
float angle=0.0, deltaAngle = 0.0, ratio;
float x=0.0f,y=1.75f,z=15.0f; // posisi awal kamera
float lx=0.0f,ly=0.0f,lz=-1.0f;
int deltaMove = 0,h,w;
int bitmapHeight=12;
void Reshape(int w1, int h1)
{
// Fungsi reshape
	if(h1 == 0) h1 = 1;
	w = w1;
	h = h1;
	ratio = 1.0f * w / h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, w, h);
	gluPerspective(45,ratio,0.1,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(
		x, y, z,
		x + lx,y + ly,z + lz,
		0.0f,1.0f,0.0f);
	}
void orientMe(float ang)
{
	// Fungsi ini untuk memutar arah kamera (tengok kiri/kanan)
	lx = sin(ang);
	lz = -cos(ang);
	glLoadIdentity();
	gluLookAt(x, y, z,
	x + lx,y + ly,z + lz,
	0.0f,1.0f,0.0f);
}
void moveMeFlat(int i)
{
	// Fungsi ini untuk maju mundur kamera
	x = x + i*(lx)*0.1;
	z = z + i*(lz)*0.1;
	glLoadIdentity();
	
	gluLookAt(
		x, y, z,
		x + lx,y + ly,z + lz,
		0.0f,1.0f,0.0f);
}
void Grid() {
// Fungsi untuk membuat grid di "lantai"
	double i;
	const float Z_MIN = -50, Z_MAX = 50;
	const float X_MIN = -50, X_MAX = 50;
	const float gap = 1.5;
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_LINES);
	for(i=Z_MIN;i<Z_MAX;i+=gap)
		{
		glVertex3f(i, 0, Z_MIN);
		glVertex3f(i, 0, Z_MAX);
		}
	for(i=X_MIN;i<X_MAX;i+=gap)
		{
		glVertex3f(X_MIN, 0, i);
		glVertex3f(X_MAX, 0, i);
		}
	glEnd();
}
void drawWheel(float x, float y, float z) {
    glPushMatrix();
        glTranslatef(x, y, z);
        glRotatef(90, 0, 1, 0);  
        glColor3f(0.1f, 0.1f, 0.1f);
        glutSolidTorus(0.15f, 0.35f, 16, 16); 
        
		glColor3f(0.5f, 0.5f, 0.5f);
		for (int i = 0; i < 3; i++) {
		    float angle = i * 120.0f; 
		    float x = 0.12f * cos(angle * M_PI / 180.0);
		    float y = 0.12f * sin(angle * M_PI / 180.0);
		
		    glPushMatrix();
		        glTranslatef(x, y, 0.0f);
		        glRotatef(angle, 0, 0, 1); 
		        glScalef(0.4f, 0.1f, 0.15f);
		        glutSolidCube(1.0f);
		    glPopMatrix();
		}
    glPopMatrix();
}

void drawMobil(){
	glPushMatrix();
    glTranslatef(1.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.1f, 0.1f, 0.1f);
	    glNormal3f(0.0f, 1.0f, -1.0f);
	    glVertex3f(0.0f, 1.0f, -2.5f); 
	    glVertex3f(0.0f, 0.0f, -2.5f);
	    glVertex3f(0.0f, 0.0f, 2.5f);    
	    glVertex3f(0.0f, 0.7f, 2.65f);
	    glVertex3f(0.0f, 1.5f, 2.65f);
	    glVertex3f(0.0f, 1.5f, -1.7f);
	    glVertex3f(0.0f, 1.5f, -1.7f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-1.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.1f, 0.1f, 0.1f);
	    glNormal3f(0.0f, 1.0f, -1.0f);
	    glVertex3f(0.0f, 1.0f, -2.5f); 
	    glVertex3f(0.0f, 0.0f, -2.5f);
	    glVertex3f(0.0f, 0.0f, 2.5f);    
	    glVertex3f(0.0f, 0.7f, 2.65f);
	    glVertex3f(0.0f, 1.5f, 2.65f);
	    glVertex3f(0.0f, 1.5f, -1.7f);
	    glVertex3f(0.0f, 1.5f, -1.7f);
    glEnd();
    glPopMatrix();
    
    //Extrudes Kanan-Kiri
    glPushMatrix();
    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.1f, 0.1f, 0.1f);
	    glNormal3f(0.0f, 1.0f, -1.0f);
	    glVertex3f(1.0f, 0.0f, -2.5f);
	    glVertex3f(1.0f, 0.0f, 2.5f);  
	    glVertex3f(-1.0f, 0.0f, 2.5f);  
	    glVertex3f(-1.0f, 0.0f, -2.5f);  
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.1f, 0.1f, 0.1f);
	    glNormal3f(0.0f, 1.0f, -1.0f);
	    glVertex3f(1.0f, 1.0f, -2.5f);
	    glVertex3f(1.0f, 0.0f, -2.5f);
	    glVertex3f(-1.0f, 0.0f, -2.5f);
	    glVertex3f(-1.0f, 1.0f, -2.5f); 
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.1f, 0.1f, 0.1f);
	    glNormal3f(0.0f, 1.0f, -1.0f);
	    glVertex3f(1.0f, 1.0f, -2.5f);
	    glVertex3f(1.0f, 1.5f, -1.7f);
	    glVertex3f(-1.0f, 1.5f, -1.7f);
	    glVertex3f(-1.0f, 1.0f, -2.5f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.1f, 0.1f, 0.1f);
	    glNormal3f(0.0f, 1.0f, -1.0f);
	    glVertex3f(1.0f, 1.5f, 2.65f);
	    glVertex3f(1.0f, 1.5f, -1.7f);
	    glVertex3f(-1.0f, 1.5f, -1.7f);
	    glVertex3f(-1.0f, 1.5f, 2.65f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.1f, 0.1f, 0.1f);
	    glNormal3f(0.0f, 1.0f, -1.0f);
	    glVertex3f(1.0f, 1.5f, 2.65f);
	    glVertex3f(1.0f, 0.7f, 2.65f);
	    glVertex3f(-1.0f, 0.7f, 2.65f);
	    glVertex3f(-1.0f, 1.5f, 2.65f);
    glEnd();
    glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.1f, 0.1f, 0.1f);
	    glNormal3f(0.0f, 1.0f, -1.0f);
	    glVertex3f(1.0f, 0.7f, 2.65f);
	    glVertex3f(1.0f, 0.0f, 2.5f);
	    glVertex3f(-1.0f, 0.0f, 2.5f);
	    glVertex3f(-1.0f, 0.7f, 2.65f);
    glEnd();
    glPopMatrix();
    
    //Bumper
    glPushMatrix();
    	glTranslatef(0.0f, 0.2f, -2.5f);
	    glColor3f(0.4f, 0.4f, 0.4f);
		glScalef(1.0f, 0.1f, 0.15f);
		glutSolidCube(2.0f);
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(0.0f, 0.2f, 2.4f);
	    glColor3f(0.4f, 0.4f, 0.4f);
		glScalef(1.1f, 0.1f, 0.15f);
		glutSolidCube(2.0f);
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(1.0f, 0.2f, -2.3f);
    	glRotatef(90, 0, 1, 0);
	    glColor3f(0.4f, 0.4f, 0.4f);
		glScalef(1.34f, 0.4f, 0.6f);
		glutSolidCube(0.5f);
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(-1.0f, 0.2f, -2.3f);
    	glRotatef(90, 0, 1, 0);
	    glColor3f(0.4f, 0.4f, 0.4f);
		glScalef(1.34f, 0.4f, 0.6f);
		glutSolidCube(0.5f);
    glPopMatrix();
    
    //Lights
    glPushMatrix();
    	glTranslatef(0.87f, 0.8f, -2.4f);
    	glRotatef(90, 0, 1, 0);
	    glColor3f(1.0f, 1.0f, 0.0f);
		glScalef(0.4f, 0.2f, 0.3f);
		glutSolidCube(1.0f);
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(-0.87f, 0.8f, -2.4f);
    	glRotatef(90, 0, 1, 0);
	    glColor3f(1.0f, 1.0f, 0.0f);
		glScalef(0.4f, 0.2f, 0.3f);
		glutSolidCube(1.0f);
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(-0.93f, 1.2f, 2.6f);
    	glRotatef(90, 0, 0, 1);
	    glColor3f(0.6f, 0.0f, 0.0f);
		glScalef(0.4f, 0.2f, 0.3f);
		glutSolidCube(1.0f);
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(0.93f, 1.2f, 2.6f);
    	glRotatef(90, 0, 0, 1);
	    glColor3f(0.6f, 0.0f, 0.0f);
		glScalef(0.4f, 0.2f, 0.3f);
		glutSolidCube(1.0f);
    glPopMatrix();
    
    //Frame Kabin
    glPushMatrix();
    	glTranslatef(0.93f, 2.2f, -1.2f);
	    glColor3f(0.1f, 0.1f, 0.1f);
    	glRotatef(116.56, 1, 0, 0);
		glScalef(0.15f, 0.2f, 1.2f);
		glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    	glTranslatef(-0.93f, 2.2f, -1.2f);
	    glColor3f(0.1f, 0.1f, 0.1f);
    	glRotatef(116.56, 1, 0, 0);
		glScalef(0.15f, 0.2f, 1.2f);
		glutSolidCube(1.0f);
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(0.93f, 2.2f, 2.5f);
	    glColor3f(0.1f, 0.1f, 0.1f);
    	glRotatef(85.4, 1, 0, 0);
		glScalef(0.15f, 0.2f, 1.2f);
		glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    	glTranslatef(-0.93f, 2.2f, 2.5f);
	    glColor3f(0.1f, 0.1f, 0.1f);
    	glRotatef(85.4, 1, 0, 0);
		glScalef(0.15f, 0.2f, 1.2f);
		glutSolidCube(1.0f);
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(0.0f, 2.75f, 0.9f);
	    glColor3f(0.1f, 0.1f, 0.1f);
		glScalef(0.5f, 0.03f, 1.0f);
		glutSolidCube(4.0f);
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(0.87f, 1.5f, 0.0f);
	    glColor3f(0.1f, 0.1f, 0.1f);
    	glRotatef(90, 1, 0, 0);
		glScalef(0.15f, 0.02f, 1.25f);
		glutSolidCube(2.0f);
    glPopMatrix();  
	glPushMatrix();
    	glTranslatef(-0.87f, 1.5f, 0.0f);
	    glColor3f(0.1f, 0.1f, 0.1f);
    	glRotatef(90, 1, 0, 0);
		glScalef(0.15f, 0.02f, 1.25f);
		glutSolidCube(2.0f);
    glPopMatrix();
    
    //Spion
    glPushMatrix();
    	glTranslatef(1.2f, 1.7f, -1.4f);
	    glColor3f(0.15f, 0.15f, 0.15f);
    	glRotatef(60, 1, 0, 1);
		glScalef(0.3f, 0.12f, 0.12f);
		glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    	glTranslatef(1.4f, 1.8f, -1.35f);
	    glColor3f(0.15f, 0.15f, 0.15f);
		glScalef(0.4f, 0.3f, 0.15f);
		glutSolidCube(1.0f);
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(-1.2f, 1.7f, -1.4f);
	    glColor3f(0.15f, 0.15f, 0.15f);
    	glRotatef(-60, 1, 0, 1);
		glScalef(0.3f, 0.12f, 0.12f);
		glutSolidCube(1.0f);
    glPopMatrix();
    glPushMatrix();
    	glTranslatef(-1.4f, 1.8f, -1.35f);
	    glColor3f(0.15f, 0.15f, 0.15f);
		glScalef(0.4f, 0.3f, 0.15f);
		glutSolidCube(1.0f);
    glPopMatrix();
}
void drawKabin(){
    glPushMatrix();
    glTranslatef(0.95f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.15f, 0.15f, 0.15f);
	    glVertex3f(0.0f, 1.5f, -1.5f); 
	    glVertex3f(0.0f, 1.5f, 2.6f);
	    glVertex3f(0.0f, 2.5f, 2.6f);   
	    glVertex3f(0.0f, 2.5f, -1.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.95f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.15f, 0.15f, 0.15f);
	    glVertex3f(0.0f, 1.5f, -1.5f); 
	    glVertex3f(0.0f, 1.5f, 2.6f);
	    glVertex3f(0.0f, 2.5f, 2.6f);   
	    glVertex3f(0.0f, 2.5f, -1.0);
    glEnd();
    glPopMatrix();
    
    //Extrudes Kanan-Kiri
    glPushMatrix();
    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.15f, 0.15f, 0.15f);
	    glVertex3f(1.0f, 1.5f, -1.5f); 
	    glVertex3f(1.0f, 2.5f, -1.0f);
	    glVertex3f(-1.0f, 2.5f, -1.0f); 
	    glVertex3f(-1.0f, 1.5f, -1.5f);  
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.15f, 0.15f, 0.15f);
	    glVertex3f(1.0f, 2.5f, -1.0f);
	    glVertex3f(1.0f, 2.5f, 2.5f);
	    glVertex3f(-1.0f, 2.5f, 2.5f); 
	    glVertex3f(-1.0f, 2.5f, -1.0f);  
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, 0.2f, 0.0f);
    glBegin(GL_POLYGON);
	    glColor3f(0.15f, 0.15f, 0.15f);
	    glVertex3f(1.0f, 2.5f, 2.5f);
	    glVertex3f(1.0f, 1.5f, 2.6f);
	    glVertex3f(-1.0f, 1.5f, 2.6f);
	    glVertex3f(-1.0f, 2.5f, 2.5f);
    glEnd();
    glPopMatrix();
    
}

void display() {
    if (deltaMove) moveMeFlat(deltaMove);
    if (deltaAngle) {
        angle += deltaAngle;
        orientMe(angle);
    }
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    Grid();
    
    glPushMatrix();
    	drawMobil();
    glPopMatrix();    
    
    glPushMatrix();
    	drawKabin();
	glPopMatrix();    
    
    glPushMatrix();
        drawWheel(-1.0f, 0.2f, 1.5f); 
	    drawWheel( 1.0f, 0.2f, 1.5f);  
	    drawWheel(-1.0f, 0.2f,-1.5f); 
	    drawWheel( 1.0f, 0.2f,-1.5f); 
    glPopMatrix();
    
    glutSwapBuffers();
    glFlush();
}

void pressKey(int key, int x, int y) {
	// Fungsi ini akan dijalankan saat tombol keyboard ditekan dan belum dilepas
	// Selama tombol ditekan, variabel angle dan move diubah => kamera bergerak
	switch (key) {
		case GLUT_KEY_LEFT : deltaAngle = -0.002f; break;
		case GLUT_KEY_RIGHT : deltaAngle = 0.002f; break;
		case GLUT_KEY_UP : deltaMove = 1; break;
		case GLUT_KEY_DOWN : deltaMove = -1; break;
		case GLUT_KEY_PAGE_UP: y += 0.1f; break;
		case GLUT_KEY_PAGE_DOWN: y -= 0.1f; break;
	}
}
void releaseKey(int key, int x, int y) {
	// Fungsi ini akan dijalankan saat tekanan tombol keyboard dilepas
	// Saat tombol dilepas, variabel angle dan move diset nol => kamera berhenti
	switch (key) {
		case GLUT_KEY_LEFT :
		if (deltaAngle < 0.0f)
		deltaAngle = 0.0f;
		break;
		case GLUT_KEY_RIGHT : if (deltaAngle > 0.0f)
		deltaAngle = 0.0f;
		break;
		case GLUT_KEY_UP : if (deltaMove > 0)
		deltaMove = 0;
		break;
		case GLUT_KEY_DOWN : if (deltaMove < 0)
		deltaMove = 0;
		break;
		case GLUT_KEY_PAGE_UP : if (y > 0)
		y = 0;
		break;
		case GLUT_KEY_PAGE_DOWN : if (y < 0)
		y = 0;
		break;
	}
}


// Variable untuk pencahayaan

const GLfloat light_ambient[] = { 0.5f, 0.5f, 0.5f, 0.0f };
const GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 0.0f, 20.0f, 10.0f, 1.0f };
const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

void lighting(){
// Fungsi mengaktifkan pencahayaan
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glEnable(GL_LIGHT0);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
}
void init(void)
{
	glEnable (GL_DEPTH_TEST);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutCreateWindow("3D Lighting");
	glutIgnoreKeyRepeat(1); // Mengabaikan key repeat (saat tombol keyboard dipencet terus)
	glutSpecialFunc(pressKey);
	glutSpecialUpFunc(releaseKey);
	glutDisplayFunc(display);
	
	glutIdleFunc(display); // Fungsi display-nya dipanggil terus-menerus
	
	glutReshapeFunc(Reshape);
	lighting();
	init();
	glutMainLoop();
	return(0);
}
