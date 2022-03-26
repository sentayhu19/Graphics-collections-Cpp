#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<Fstream.h>
#include<stdio.h>

void main()
{
clrscr();
int gd=DETECT,gm;
int i=0;
initgraph(&gd,&gm,"//turboc3/bgi");
for(i=0;i<50;i++)
{
while(!kbhit())
{
setcolor(GREEN);
//body
line(600,400,530,400);
line(430,400,230,400);

line(130,400,50,400);
line(50,400,40,380);
line(40,380,60,365);
line(60,365,138,365);
ellipse(70,365,75,180,10,80);
line(70,285,400,295);
line(60,345,147,345);
ellipse(80,345,360,140,20,80);
ellipse(275,300,360,100,150,70);

circle(565,380,15);
setfillstyle(i,3);
floodfill(566,381,i);

setcolor(GREEN);
line(75,265,250,230);
line(85,265,65,235);
line(65,235,35,240);
line(35,240,20,215);
line(20,215,50,215);
line(50,215,50,225);
line(50,225,60,225);
line(60,225,60,215);
line(60,215,110,215);
line(110,215,110,230);
line(110,230,90,230);
line(90,230,100,260);
line(215,350,280,350);
line(217,355,280,355);
line(280,350,320,330);
line(280,355,320,370);
line(320,370,435,370);
line(320,330,588,330);
setcolor(GREEN);
//window
ellipse(255,300,360,165,160,55);

setcolor(GREEN);
//kofen
ellipse(480,400,360,180,50,70);
ellipse(180,400,360,180,50,70);
//tier
setcolor(RED);
circle(480,380,40);

circle(480,380,20);
setfillstyle(i,5);
floodfill(481,381,i);
line(480,380,480,340);
line(480,380,480,420);
line(440,380,520,380);
line(450,405,510,350);
line(450,355,510,410);
circle(180,380,40);
circle(181,381,20);
setfillstyle(i,5);
floodfill(181,381,i);

line(180,340,180,420);
line(140,380,220,380);
line(150,355,210,410);
line(210,355,150,410);
setcolor(GREEN);
ellipse(570,400,360,90,30,90);
ellipse(420,315,360,105,160,20);
//window partition
line(250,290,250,245);//
line(260,290,260,245);

}
}
getch();
}