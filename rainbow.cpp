#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
//#include<snap.h>
void main()
{
clrscr();
int gdriver =DETECT,gmode;
int x,y,i;
initgraph(&gdriver,&gmode,"\\TURBOC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
for(i=30;i<200;i++)
{
delay(100);
setcolor(i/10);
arc(x,y,0,180,i-10);
}
capture("\\turboc3\\Capture\\capture1.jpg");
getch();
}