#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
//#include<snap.h>
void main()
{
int gd=0,gm,i,r1 = 130,r2 = 100, r3 = 80, r=180,xc=320,yc=240,x,y;
initgraph(&gd,&gm,"\\turboc3\\bgi");
double x1,x2,x3,y1,y2,y3;
double secteta,minteta,hourteta,teta;
double inc=90,px[12],py[12];
struct time t;
const double rad=22.0/(7*180.0);
gettime(&t);
//setting co-ordinates of px and py
for(i=0;i<12;i++)
{
 teta = inc*rad;
 px[i]=xc+(r-10)*cos(teta);
 py[i]=yc+(r-10)*sin(teta);
 inc=inc+30;
}
//putting co-ordinates in circle
while(!kbhit())
{
 setcolor(15);
 setlinestyle(0,1,3);
 setfillstyle(1,15);
 circle(xc,yc,r); //for sec
 floodfill(xc+1,yc+1,15);
 setcolor(15);
 circle(xc,yc,r-20);  //for min
 circle(xc,yc,r-50);//for hour
 setcolor(4);
 outtextxy(px[1],py[1],"7");
  outtextxy(px[2],py[2],"8");
   outtextxy(px[3],py[3],"9");
    outtextxy(px[4],py[4],"10");
     outtextxy(px[5],py[5],"11");
 outtextxy(px[6],py[6],"12");
  outtextxy(px[7],py[7],"1");
   outtextxy(px[8],py[8],"2");
    outtextxy(px[9],py[9],"3");
     outtextxy(px[10],py[10],"4");
	 outtextxy(px[11],py[11],"5");
	   outtextxy(px[0],py[0],"6");
//calculating angle
//secteta : angele of sec counter
secteta=(double)t.ti_sec*6;
secteta=secteta-90;
secteta=secteta*rad;
//minteta : angele of min counter
minteta=(double)t.ti_min*6;
minteta=minteta-90;
minteta=minteta*rad;
//hrteta : angele of hr counter
hourteta=(double)t.ti_hour*6;
hourteta=hourteta-90;
hourteta=hourteta*rad;
//calculating end points of counters (radius)
setcolor(4);
x=xc+r1*cos(secteta);
y=yc+r1*sin(secteta);
line(xc,yc,x,y);
//mins
setcolor(14);
x1=xc+r2*cos(minteta);
y1=yc+r2*sin(minteta);
line(xc,yc,x1,y1);
//hrs
setcolor(5);
x2=xc+(r1-70)*cos(hourteta);
y2=yc+(r1-70)*sin(hourteta);
line(xc,yc,x2,y2);
gotoxy(38,15);
cout<<int(t.ti_hour)<<":"<<int(t.ti_min)<<":"<<int(t.ti_sec)<<"";

//clipping lines
delay(1000);
setcolor(0);
line(xc,yc,x,y);
line(xc,yc,x1,y1);
line(xc,yc,x2,y2);
gettime(&t);
}
//capture("\\TC\\capture\\analogclock.jpg");
getch();
}