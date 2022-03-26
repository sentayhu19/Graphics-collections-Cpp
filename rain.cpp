#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"\\TURBOC3\\BGI");
int x=0,y=0,i=0;
for(int j=0;j<800;j=j+5)
{
x=rand()%600;
y=rand()%400;
setcolor(15);
line(x,y+15,x+10,y+0);

//cleardevice();
i+=5;
delay(100);
//if(i>30)
//i=0;
}

//}
//drop(x,y);
getch();
}