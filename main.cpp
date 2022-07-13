/*  Rubaiya Tasnim Sholi    */
/*  ID: 191-15-12361    */

#include<windows.h>
#include<math.h>
#include <GL/glut.h>
#define PI   3.14159265358979323846
#include <stdlib.h>
float txx = 0.0;
float tyy = 0.0;
int tx=255;

void init()
{
    glClearColor(0,0,0,0.0f);

    glOrtho(0,100,0,70,0,100);
}
void delay()
{
     for(int i=0;i<10000000;i++);
}
void window()
{
     //window frame outer
    glColor3ub(242, 235, 233);
    glBegin(GL_QUADS);
    glVertex2f(28,37);
    glVertex2f(28,63);
    glVertex2f(60,63);
    glVertex2f(60,37);
    glEnd();

   //window middle
    glColor3ub(26,34,85);
    glBegin(GL_QUADS);
    glVertex2f(29,37.8);
    glVertex2f(58.9,37.8);
    glVertex2f(58.9,62.3);
    glVertex2f(29,62.3);
    glEnd();

    //window left
    glColor3ub(227,164,47);
    glBegin(GL_QUADS);
    glVertex2f(29,37.8);
    glVertex2f(35.5,40);
    glVertex2f(35.5,61.5);
    glVertex2f(29,62.3);
    glEnd();

    // Window left design outer box
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(30,61);
    glVertex2f(34.5,60.8);
    glVertex2f(34.5,40.4);
    glVertex2f(30,39.1);
    glEnd();

    // Window left design inner boxes
    //box1
    glColor3ub(26,34,85);
    glBegin(GL_QUADS);
    glVertex2f(30.2,60.8);
    glVertex2f(32,60.75);
    glVertex2f(32,50.5);
    glVertex2f(30.2,50.3);
    glEnd();

    //box2
    glColor3ub(26,34,85);
    glBegin(GL_QUADS);
    glVertex2f(32.2,60.75);
    glVertex2f(34.2,60.7);
    glVertex2f(34.2,50.9);
    glVertex2f(32.2,50.54);
    glEnd();

    //box3
    glColor3ub(26,34,85);
    glBegin(GL_QUADS);
    glVertex2f(30.2,49.9);
    glVertex2f(32,50.1);
    glVertex2f(32,39.9);
    glVertex2f(30.2,39.4);
    glEnd();

    //box4
    glColor3ub(26,34,85);
    glBegin(GL_QUADS);
    glVertex2f(32.2,50.14);
    glVertex2f(34.2,50.5);
    glVertex2f(34.2,40.5);
    glVertex2f(32.2,39.96);
    glEnd();



    // Window left design inner


    //window right
    glColor3ub(227,164,47);
    glBegin(GL_QUADS);
    glVertex2f(52.5,61.5);
    glVertex2f(58.9,62.3);
    glVertex2f(58.9,37.8);
    glVertex2f(52.5,40);
    glEnd();

    // Window right design outer box
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(53.5,60.6);
    glVertex2f(58,61);
    glVertex2f(58,39.2);
    glVertex2f(53.5,40.6);
    glEnd();

    // Window right design inner boxes
    //box1
    glColor3ub(26,34,85);
    glBegin(GL_QUADS);
    glVertex2f(53.7,60.4);
    glVertex2f(55.4,60.6);
    glVertex2f(55.4,50.15);
    glVertex2f(53.7,50.3);
    glEnd();

    //box2
    glColor3ub(26,34,85);
    glBegin(GL_QUADS);
    glVertex2f(55.6,60.6);
    glVertex2f(57.8,60.8);
    glVertex2f(57.8,50.06);
    glVertex2f(55.6,50.14);
    glEnd();

    //box3
    glColor3ub(26,34,85);
    glBegin(GL_QUADS);
    glVertex2f(53.7,49.9);
    glVertex2f(55.4,49.75);
    glVertex2f(55.4,40.3);
    glVertex2f(53.7,40.8);
    glEnd();

    //box4
    glColor3ub(26,34,85);
    glBegin(GL_QUADS);
    glVertex2f(55.6,49.74);
    glVertex2f(57.8,49.65);
    glVertex2f(57.8,39.4);
    glVertex2f(55.6,40.22);
    glEnd();
}
void clock()
{
     // outer clock
    int i;
    int amount = 500;
    GLfloat twicepi = 2.0f * PI;
    GLfloat x = 10.0f;
    GLfloat y = 55.0f;
    GLfloat r = 4;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(6,80,120);
    glVertex2f(x,y);
    for(i=0; i<=amount; i++){
        glVertex2f(
            x + (r*cos(i*twicepi/amount)),
            y + (r*sin(i*twicepi/amount))
        );
    }
    glEnd();
    //inner
    GLfloat r1 = 3.5;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,238,240);
    glVertex2f(x,y);
    for(i=0; i<=amount; i++){
        glVertex2f(
            x + (r1*cos(i*twicepi/amount)),
            y + (r1*sin(i*twicepi/amount))
        );
    }
    glEnd();

    //center dot
    GLfloat r2 = 0.3;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(6,80,120);
    glVertex2f(x,y);
    for(i=0; i<=amount; i++){
        glVertex2f(
            x + (r2*cos(i*twicepi/amount)),
            y + (r2*sin(i*twicepi/amount))
        );
    }
    glEnd();


    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    // hour hand
    glVertex2f(10,55);
    glVertex2f(11.8,55);
    // minute hand
    glVertex2f(10,55);
    glVertex2f(9.5,57.3);

    // time
    glVertex2f(10,58.2);
    glVertex2f(10,57.66);

    glVertex2f(11.58,57.76);
    glVertex2f(11.32,57.28);

    glVertex2f(12.63,55);
    glVertex2f(13.19,55);

    glVertex2f(12.3,56.33);
    glVertex2f(12.73,56.57);

    glVertex2f(11.32,52.7);
    glVertex2f(11.57,52.27);

    glVertex2f(12.3,53.67);
    glVertex2f(12.72,53.43);

    glVertex2f(8.41,52.25);
    glVertex2f(8.67,52.7);

    glVertex2f(10,52.34);
    glVertex2f(10,51.84);

    glVertex2f(7.25,53.41);
    glVertex2f(7.7,53.67);

    glVertex2f(6.85,55);
    glVertex2f(7.36,55);

    glVertex2f(7.25,56.58);
    glVertex2f(7.69,56.33);

    glVertex2f(8.42,57.74);
    glVertex2f(8.68,57.28);


    glEnd();

}


void moon(){

    int i;
    int amount = 150;
    GLfloat twicepi = 2 * PI;
    GLfloat x = 40.0f;
    GLfloat y = 55.0f;
    GLfloat r = 1.9;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(245,201,103);
    glVertex2f(x,y);
    for(i=0; i<=amount; i++){
        glVertex2f(
            x + (r*cos(i*twicepi/amount)),
            y + (r*sin(i*twicepi/amount))
        );
    }

    glEnd();

}
void colorChange()
{
    tx-=.4;
    if(tx<=50)
    {
        tx=255;
    }
    glutPostRedisplay();
}
void star()
{
    //Star 1
    glPushMatrix();
    glColor3ub(tx,tx,tx);
    glTranslatef(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(47.6,53.15);
    glVertex2f(47.1,53.5);
    glVertex2f(47.74,53.54);
    glVertex2f(47.95,54.12);
    glVertex2f(48.18,53.54);
    glVertex2f(48.83,53.5);
    glVertex2f(48.3,53.15);
    glVertex2f(48.5,52.6);
    glVertex2f(47.96,52.92);
    glVertex2f(47.4,52.6);
    glEnd();
    colorChange();
    glPopMatrix();

    //star 2
    glColor3ub(247,249,249);
    glBegin(GL_POLYGON);


    glVertex2f(50.25,55.2);
    glVertex2f(49.7,55.56);
    glVertex2f(50.39,55.58);
    glVertex2f(50.6,56.2);
    glVertex2f(50.81,55.58);
    glVertex2f(51.5,55.56);
    glVertex2f(50.95,55.2);
    glVertex2f(51.2,54.55);
    glVertex2f(50.6,54.93);
    glVertex2f(50.02,54.55);
    glEnd();

    //Star 3
    glColor3ub(247,249,249);
    glBegin(GL_POLYGON);

    glVertex2f(44.66,55.2);
    glVertex2f(44.2,55.5);
    glVertex2f(44.78,55.54);
    glVertex2f(44.97,56.03);
    glVertex2f(45.15,55.54);
    glVertex2f(45.7,55.5);
    glVertex2f(45.28,55.2);
    glVertex2f(45.4,54.7);
    glVertex2f(44.97,54.99);
    glVertex2f(44.5,54.7);

    glEnd();

    //Star 4
    glColor3ub(247,249,249);
    glBegin(GL_POLYGON);

    glVertex2f(45.64,58.1);
    glVertex2f(45.12,58.46);
    glVertex2f(45.76,58.47);
    glVertex2f(45.96,59.03);
    glVertex2f(46.17,58.47);
    glVertex2f(46.8,58.46);
    glVertex2f(46.3,58.1);
    glVertex2f(46.5,57.5);
    glVertex2f(45.96,57.9);
    glVertex2f(45.4,57.5);

    glEnd();

    //Star 5
    glPushMatrix();
    glColor3ub(tx,tx,tx);
    glTranslatef(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(42.73,59.34);
    glVertex2f(42.35,59.6);
    glVertex2f(42.83,59.64);
    glVertex2f(43,60.1);
    glVertex2f(43.18,59.64);
    glVertex2f(43.62,59.6);
    glVertex2f(43.28,59.34);
    glVertex2f(43.4,58.9);
    glVertex2f(43,59.15);
    glVertex2f(42.6,58.9);

    glEnd();
    colorChange();
    glPopMatrix();

    //Star 6
    glPushMatrix();
    glColor3ub(tx,tx,tx);
    glTranslatef(0,0,0);

    glBegin(GL_POLYGON);

    glVertex2f(47.74,60.34);
    glVertex2f(47.35,60.6);
    glVertex2f(47.86,60.65);
    glVertex2f(48.03,61.13);
    glVertex2f(48.21,60.65);
    glVertex2f(48.7,60.6);
    glVertex2f(48.32,60.34);
    glVertex2f(48.44,59.9);
    glVertex2f(48.03,60.15);
    glVertex2f(47.6,59.9);
    glEnd();
    colorChange();
    glPopMatrix();
    //Star 7
    glColor3ub(247,249,249);
    glBegin(GL_POLYGON);

    glVertex2f(49.67,57.77);
    glVertex2f(49.2,58.1);
    glVertex2f(49.79,58.12);
    glVertex2f(50,58.63);
    glVertex2f(50.2,58.12);
    glVertex2f(50.8,58.1);
    glVertex2f(50.34,57.7);
    glVertex2f(50.5,57.2);
    glVertex2f(50,57.55);
    glVertex2f(49.48,57.2);
    glEnd();
}
void lamp()
{
    //lamp matha
    glColor3ub(255,183,43);
    glBegin(GL_POLYGON);

    glVertex2f(4.2,44.8);
    glVertex2f(8,45.3);
    glVertex2f(10,45.3);
    glVertex2f(13.8,44.8);
    glVertex2f(15.4,37);
    glVertex2f(12.7,36);
    glVertex2f(9.5,35.8);
    glVertex2f(8.8,35.8);
    glVertex2f(5,36);
    glVertex2f(2.5,37);

   glEnd();

   //lamp handle base
    glColor3ub(166,75,42);
    glBegin(GL_QUADS);
    glVertex2f(8.8,35.8);
    glVertex2f(9.5,35.8);
    glVertex2f(9.5,30);
    glVertex2f(8.8,30);
    glEnd();

    //lamp handle vertical
    glColor3ub(166,75,42);
    glBegin(GL_QUADS);
    glVertex2f(7.6,30);
    glVertex2f(10.6,30);
    glVertex2f(10.6,29);
    glVertex2f(7.6,29);
    glEnd();

    //lamp handle left
    glColor3ub(166,75,42);
    glBegin(GL_QUADS);
    glVertex2f(8,29);
    glVertex2f(8.8,29);
    glVertex2f(4,14.7);
    glVertex2f(3.4,14.7);
    glEnd();

    //lamp handle middle
    glColor3ub(166,75,42);
    glBegin(GL_QUADS);
    glVertex2f(8.8,29);
    glVertex2f(9.6,29);
    glVertex2f(8.4,15.5);
    glVertex2f(7.9,15.5);
    glEnd();

    //lamp handle right
    glColor3ub(166,75,42);
    glBegin(GL_QUADS);
    glVertex2f(9.6,29);
    glVertex2f(10.6,29);
    glVertex2f(14.8,14.7);
    glVertex2f(14.3,14.7);
    glEnd();

}
void quran()
{
    // quran upper
    //upper outer border
    glColor3ub(233,164,0);
    glBegin(GL_POLYGON);
    glVertex2f(55.75,24);
    glVertex2f(55,22);
    glVertex2f(58.18,20.9);
    glVertex2f(58.72,20.9);
    glVertex2f(61.95,22);
    glVertex2f(61.15,24);
    glVertex2f(60.81,23.9);
    glVertex2f(61.47,22.1);
    glVertex2f(58.72,21.2);
    glVertex2f(58.18,21.2);
    glVertex2f(55.4,22.1);
    glVertex2f(56.1,23.9);


    glEnd();

    //upper inside border
    glColor3ub(29,79,69);
    glBegin(GL_POLYGON);
    glVertex2f(56.1,23.9);
    glVertex2f(56.23,23.9);
    glVertex2f(55.66,22.2);
    glVertex2f(58.18,21.37);
    glVertex2f(58.72,21.37);
    glVertex2f(61.24,22.2);
    glVertex2f(60.81,23.9);
    glVertex2f(61.47,22.1);
    glVertex2f(58.72,21.2);
    glVertex2f(58.18,21.2);
    glVertex2f(55.4,22.1);

    glEnd();

    // quran page upper left
    glColor3ub(247,243,232);
    glBegin(GL_POLYGON);
    glVertex2f(56.37,24.25);
    glVertex2f(57.54,24);
    glVertex2f(58.45,23.6);
    glVertex2f(58.45,21.71);
    glVertex2f(57.2,22.2);
    glVertex2f(55.75,22.6);
    glEnd();

    glColor3ub(248,106,59);
    glBegin(GL_QUADS);
    glVertex2f(56.5,24.12);
    glVertex2f(58.26,23.54);
    glVertex2f(58.26,22.05);
    glVertex2f(56,22.75);
    glEnd();

    glColor3ub(247,243,232);
    glBegin(GL_QUADS);
    glVertex2f(56.6,24);
    glVertex2f(58.13,23.48);
    glVertex2f(58.13,22.25);
    glVertex2f(56.17,22.84);
    glEnd();

    // quran page upper right
    glColor3ub(247,243,232);
    glBegin(GL_POLYGON);
    glVertex2f(58.45,23.6);
    glVertex2f(59.4,24);
    glVertex2f(60.52,24.25);
    glVertex2f(61.15,22.6);
    glVertex2f(59.7,22.3);
    glVertex2f(58.45,21.71);
    glEnd();

    glColor3ub(248,106,59);
    glBegin(GL_QUADS);
    glVertex2f(58.65,23.54);
    glVertex2f(58.65,22.05);
    glVertex2f(60.9,22.75);
    glVertex2f(60.39,24.12);
    glEnd();

    glColor3ub(247,243,232);
    glBegin(GL_QUADS);
    glVertex2f(58.77,23.48);
    glVertex2f(60.3,24);
    glVertex2f(60.74,22.84);
    glVertex2f(58.77,22.24);
    glEnd();


    // quran page down left
    glColor3ub(225,211,176);
    glBegin(GL_POLYGON);
    glVertex2f(55.75,22.6);
    glVertex2f(57.2,22.2);
    glVertex2f(58.45,21.71);
    glVertex2f(58.18,21.37);
    glVertex2f(55.56,22.2);
    glEnd();

    // quran page down right
    glColor3ub(225,211,176);
    glBegin(GL_POLYGON);
    glVertex2f(58.45,21.71);
    glVertex2f(59.7,22.3);
    glVertex2f(61.15,22.6);
    glVertex2f(61.24,22.2);
    glVertex2f(58.72,21.37);
    glEnd();

    // Quran base left
    glColor3ub(150,91,59);
    glBegin(GL_QUADS);
    glVertex2f(55,22);
    glVertex2f(58.18,20.9);
    glVertex2f(58.17,20.65);
    glVertex2f(54.87,21.75);
    glEnd();

    glColor3ub(150,91,59);
    glBegin(GL_QUADS);
    glVertex2f(54.85,19.53);
    glVertex2f(58.17,20.65);
    glVertex2f(58.17,20.4);
    glVertex2f(54.97,19.29);
    glEnd();

    glColor3ub(47,48,42);
    glBegin(GL_TRIANGLES);
    glVertex2f(55.63,21.48);
    glVertex2f(58.17,20.65);
    glVertex2f(54.85,19.53);
    glEnd();


    // Quran base right
    glColor3ub(150,91,59);
    glBegin(GL_QUADS);
    glVertex2f(58.72,20.9);
    glVertex2f(61.95,22);
    glVertex2f(62.05,21.75);
    glVertex2f(58.75,20.65);
    glEnd();

    glColor3ub(150,91,59);
    glBegin(GL_QUADS);
    glVertex2f(58.75,20.65);
    glVertex2f(62.05,19.53);
    glVertex2f(61.93,19.29);
    glVertex2f(58.75,20.4);
    glEnd();

    glColor3ub(47,48,42);
    glBegin(GL_TRIANGLES);
    glVertex2f(58.75,20.65);
    glVertex2f(61.27,21.48);
    glVertex2f(62.05,19.53);
    glEnd();



}
void frames()
{
    //frame design 1
  //border
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(72,50);
    glVertex2f(72,54);
    glVertex2f(77.2,54);
    glVertex2f(77.2,50);
    glEnd();

    //border inner
    glColor3ub(174,219,206);
    glBegin(GL_QUADS);
    glVertex2f(72.25,50.3);
    glVertex2f(72.25,53.75);
    glVertex2f(76.95,53.75);
    glVertex2f(76.95,50.3);
    glEnd();


  //frame design 2
  //border
    glColor3ub(0,0,0);
    glRectf(78.3,50,83.7,57.4);
    //border inner
    glColor3ub(246,198,234);
    glRectf(78.55,50.3,83.45,57.15);

     //frame design 3
    //border
   glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(84.7,55.3);
    glVertex2f(88.6,55.3);
    glVertex2f(88.6,50);
    glVertex2f(84.7,50);
    glEnd();

    //border inner
    glColor3ub(239,159,159);
    glRectf(84.95,50.3,88.35,55);

    //frame design 4
   //border
    glColor3ub(0,0,0);
    glRectf(90,50,95.2,53.9);

    //border inner
    glColor3ub(131,189,117);
    glRectf(90.25,50.3,94.95,53.6);

    //frame design 5
   //border
    glColor3ub(0,0,0);
    glRectf(76.2,43.92,80.15,49.2);

    //border inner
    glColor3ub(206,148,97);
    glRectf(76.45,44.17,79.9,49);

    //frame design 6
   //border
    glColor3ub(0,0,0);
    glRectf(81.2,41.8,86.6,49.2);

    //border inner
    glColor3ub(246,255,164);
    glRectf(81.45,42.1,86.35,48.9);

     //frame design 7
    //border
    glColor3ub(0,0,0);
    glRectf(87.7,45.2,92.87,49.2);

    //border inner
    glColor3ub(152,180,170);
    glRectf(87.95,45.5,92.62,48.9);
}
void tub()
{
    //tub base
    glColor3ub(99,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(94,5.3);
    glVertex2f(98,5.3);
    glVertex2f(99.4,5.5);
    glVertex2f(98,1.3);
    glVertex2f(94.3,1.3);
    glVertex2f(92.6,5.5);
    glEnd();

    //tub upper
    glColor3ub(123,78,50);
    glBegin(GL_POLYGON);

    glVertex2f(94,5.85);
    glVertex2f(98,5.83);
    glVertex2f(99.4,5.5);
    glVertex2f(98,5.3);
    glVertex2f(94,5.3);
    glVertex2f(92.6,5.5);
    glEnd();

    //pata

    // pata 1 outer
    glColor3ub(192,216,15);
    glBegin(GL_POLYGON);
    glVertex2f(97,12);
    glVertex2f(97.78,10);
    glVertex2f(98.17,8);
    glVertex2f(98,7);
    glVertex2f(96.7,5.5);
    glVertex2f(95,7);
    glVertex2f(94.8,8);
    glVertex2f(95.75,10);
    glEnd();

    // pata 1 inner
    glColor3ub(72,128,25);
    glBegin(GL_POLYGON);
    glVertex2f(95.4,8);
    glVertex2f(96.15,10);
    glVertex2f(97,11.3);
    glVertex2f(97.4,10);
    glVertex2f(97.8,8);
    glVertex2f(97.7,7);
    glVertex2f(96.7,5.5);
    glVertex2f(95.62,7);
    glEnd();

    // pata 2 outer
    glColor3ub(192,216,15);
    glBegin(GL_POLYGON);
    glVertex2f(94.2,11);
    glVertex2f(94.4,12.7);
    glVertex2f(95.55,11);
    glVertex2f(95.76,10);
    glVertex2f(95.1,9.2);
    glVertex2f(94.6,9.47);
    glVertex2f(94.3,9.6);
    glEnd();

    // pata 2 inner
    glColor3ub(72,128,25);
    glBegin(GL_QUADS);
    glVertex2f(94.6,9.47);
    glVertex2f(94.6,12.1);
    glVertex2f(95.76,10);
    glVertex2f(95.1,9.2);
    glEnd();

    // pata 3 outer
    glColor3ub(192,216,15);
    glBegin(GL_POLYGON);
    glVertex2f(93.5,7.5);
    glVertex2f(92.5,9.2);
    glVertex2f(91.5,9.9);
    glVertex2f(94.3,9.6);
    glVertex2f(94.6,9.47);
    glVertex2f(95.2,9.2);
    glVertex2f(95.05,8.85);
    glVertex2f(94.8,8);
    glVertex2f(95,7);
    glVertex2f(95.3,6.5);
    glVertex2f(96.7,5.5);
    glEnd();

    // pata 3 inner
    glColor3ub(72,128,25);
    glBegin(GL_POLYGON);
    glVertex2f(94.8,8);
    glVertex2f(95,7);
    glVertex2f(95.3,6.5);
    glVertex2f(94,7.5);
    glVertex2f(92,9.8);
    glVertex2f(95.05,8.85);
    glEnd();

    // pata 4 outer
    glColor3ub(192,216,15);
    glBegin(GL_POLYGON);
    glVertex2f(98.12,8.5);
    glVertex2f(99,9.5);
    glVertex2f(99.2,10);
    glVertex2f(99,8);
    glVertex2f(98.5,7);
    glVertex2f(97.6,5.7);
    glVertex2f(96.7,5.5);
    glVertex2f(98.5,7);
    glVertex2f(98.17,8);
    glEnd();

    // pata 4 inner
    glColor3ub(72,128,25);
    glBegin(GL_POLYGON);
    glVertex2f(98.17,8);
    glVertex2f(99.1,9.4);
    glVertex2f(98.8,8);
    glVertex2f(98,6.5);
    glVertex2f(96.7,5.5);
    glEnd();

    // pata 5 inner
    glColor3ub(72,128,25);
    glBegin(GL_POLYGON);
    glVertex2f(93.5,7.5);
    glVertex2f(92.1,8);
    glVertex2f(93,7);
    glVertex2f(94.6,6);
    glVertex2f(95,5.6);
    glVertex2f(96.7,5.5);

    glEnd();

    // pata 5 outer
    glColor3ub(192,216,15);
    glBegin(GL_POLYGON);
    glVertex2f(95,6.1);
    glVertex2f(93.5,7.5);
    glVertex2f(93,8);
    glVertex2f(91.7,8.3);
    glVertex2f(92,7.6);
    glVertex2f(93,6.7);
    glVertex2f(94.5,5.8);
    glVertex2f(95,5.6);
    glVertex2f(96.7,5.5);
    glEnd();
}
void human()
{

//human


    //body upper
    //glColor3ub(95, 208, 104);
    glColor3ub(189,70,82);
    glBegin(GL_POLYGON);
    glVertex2f(45,30.2);
    glVertex2f(46,30);
    glVertex2f(46.5,29.6);
    glVertex2f(47,29);
    glVertex2f(47.35,28.3);
    glVertex2f(47.33,26.2);
    glVertex2f(47.3,24.4);
    glVertex2f(48.7,22.5);
    glVertex2f(50.1,21);
    glVertex2f(50.8,19);
    glVertex2f(51,17);
    glVertex2f(51.4,12.2);
    glVertex2f(50.6,12);
    glVertex2f(50,11.7);
    glVertex2f(49.3,10);
    glVertex2f(45,9.6);
    glVertex2f(39.4,8);
    glVertex2f(39.5,5);
    glVertex2f(39,4);
    glVertex2f(38.4,5);
    glVertex2f(36.5,8.7);
    glVertex2f(37,12);
    glVertex2f(37.5,16);
    glVertex2f(38.4,20);
    glVertex2f(39.2,21.5);
    glVertex2f(40.5,22.5);

    glVertex2f(41.1,24);
    glVertex2f(42,26.2);
    glVertex2f(42.12,28);
    glVertex2f(42.54,29);
    glVertex2f(43,29.6);
    glVertex2f(44,30.1);

    glEnd();

    //body lower
    //glColor3ub(20, 99, 86);
    glColor3ub(135,37,43);
    glBegin(GL_POLYGON);
    glVertex2f(51.4,12.2);
    glVertex2f(50,10);
    glVertex2f(49.5,8.9);
    glVertex2f(50,7);
    glVertex2f(50.3,5);
    glVertex2f(52,4.5);
    glVertex2f(52.1,3.8);
    glVertex2f(51.2,3.6);
    glVertex2f(50.1,3);
    glVertex2f(48,2.6);
    glVertex2f(45,2.5);
    glVertex2f(40,2.8);
    glVertex2f(38.2,3);
    glVertex2f(37.5,3.8);
    glVertex2f(39,4);
    glVertex2f(38.4,5);
    glVertex2f(39.4,8);
    glVertex2f(45,9.6);

    glEnd();
}
void message()
{
    //Base
    glColor3ub(221,185,50);
    glBegin(GL_QUADS);
    glVertex2f(50,28);
    glVertex2f(52.6,28);
    glVertex2f(52.6,26.4);
    glVertex2f(50,26.4);
    glEnd();
    //triangle 1
    glColor3ub(235,192,41);
    glBegin(GL_TRIANGLES);
    glVertex2f(50,26.4);
    glVertex2f(52.6,26.4);
    glVertex2f(51.3,27.5);
    glEnd();
    //triangle 2
    glColor3ub(253,202,10);
    glBegin(GL_TRIANGLES);
    glVertex2f(50,28);
    glVertex2f(52.6,28);
    glVertex2f(51.3,26.93);
    glEnd();


}
void message_move()
{
    tyy+=0.1;
    if(tyy>=34)
    {
        tyy=0.0;
    }

    glutPostRedisplay();

}
void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    delay();
    //base
    glColor3ub(60,44,62);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(0,30);
    glVertex2f(100,30);
    glVertex2f(100,0);
    glEnd();




    //roof
    glColor3ub(130, 115, 151);
    glBegin(GL_QUADS);
    glVertex2f(0,30);
    glVertex2f(0,70);
    glVertex2f(100,70);
    glVertex2f(100,30);
    glEnd();

    //wall border
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(0,30);
    glVertex2f(0,32);
    glVertex2f(100,32);
    glVertex2f(100,30);
    glEnd();

    //wall inner border

    glColor3ub(133,88,111);
    glBegin(GL_QUADS);
    glVertex2f(0,30.6);
    glVertex2f(0,31.4);
    glVertex2f(100,31.4);
    glVertex2f(100,30.6);
    glEnd();

    //prayer mat low
    glColor3ub(1, 146, 103);
    glBegin(GL_QUADS);
    glVertex2f(30.8,0);
    glVertex2f(32,2);
    glVertex2f(57.5,2);
    glVertex2f(58.4,0);
    glEnd();

    //prayer mat main
    glColor3ub(233,101,137);
    glBegin(GL_QUADS);
    glVertex2f(32,2);
    glVertex2f(36.7,23.4);
    glVertex2f(52.3,23.4);
    glVertex2f(57.5,2);
    glEnd();

    //prayer mat upper
    glColor3ub(1, 146, 103);
    glBegin(GL_QUADS);
    glVertex2f(36.7,23.4);
    glVertex2f(36.9,24.5);
    glVertex2f(52,24.5);
    glVertex2f(52.3,23.4);
    glEnd();


    //prayer mat inner 255,231,107
    glColor3ub(20,99,86);
    glBegin(GL_QUADS);
    glVertex2f(33.3,3.3);
    glVertex2f(37.53,22.7);
    glVertex2f(51.5,22.7);
    glVertex2f(55.8,3.3);
    glEnd();

    //prayer mat most inner
    glColor3ub(233,101,137);
    glBegin(GL_QUADS);
    glVertex2f(36.5,5.5);
    glVertex2f(52.5,5.5);
    glVertex2f(50,21.5);
    glVertex2f(39.2,21.5);
    glEnd();



    window();
    glPushMatrix();
    glTranslatef(txx,tyy,0);
    message();
    message_move();
    glPopMatrix();
    moon();
    clock();

    star();
    lamp();
    quran();

    frames();
    tub();
    human();


    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(900,600);
    glutInitWindowPosition(90,90);
    glutCreateWindow("Night Prayer (Tahajjud)");
    init();
    glutDisplayFunc(myDisplay);
    sndPlaySound("D:\\STUDY\\SEMESTER 11\\Temp\\Night Prayer (Tahajjud)\\1.wav",SND_ASYNC);
    glutMainLoop();
    return 0;
}
