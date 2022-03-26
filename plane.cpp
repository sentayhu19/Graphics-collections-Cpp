#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
void main()
{
clrscr();
int gd=0,gm;
initgraph(&gd,&gm,"\\turboc3\\bgi");
////////body/////////
setcolor(3);
line(100,100,200,50);
line(200,50,500,50);
line(500,50,520,5);
line(500,50,540,50);
setfillstyle(1,2);
line(500,50,540,10);
//floodfill(530,40,3);
line(520,50,540,10);
line(520,5,540,5);
line(540,5,540,50);
line(540,50,500,120);
line(500,120,350,180);
line(350,180,200,200);
line(200,200,110,200);
line(110,200,50,190);
line(50,190,30,170);
line(30,170,25,140);
line(25,140,80,90);
line(80,90,100,100);
line(100,100,80,90);
line(80,90,200,50);
//////////windows///////////
//win 1
setcolor(3);
rectangle(200,75,220,100);
// win 2
rectangle(240,75,260,100);
//win 3
rectangle(280,75,300,100);
//win 4
rectangle(320,75,340,100);
//win 5
rectangle(360,75,380,100);
//win 6
rectangle(400,75,420,100);
//win 7
rectangle(440,75,460,100);
/////Wings///////////////
moveto(230,120);
lineto(550,200);
lineto(600,170);
lineto(350,110);
//////motor////////////
circle(400,208,40);
setfillstyle(4,3);
pieslice(400,208,0,30,40);
pieslice(400,208,70,100,40);
pieslice(400,208,140,170,40);
pieslice(400,208,210,240,40);
pieslice(400,208,270,300,40);
pieslice(400,208,330,360,40);
line(420,244,490,186);
line(440,218,476,180);
setcolor(4);
settextstyle(7,0,5);
outtextxy(50,130,"ETHIOPIA");
getch();
//getch();
cleardevice();
}