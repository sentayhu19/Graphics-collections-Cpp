#include<graphics.h>
#include<dos.h>
#include<conio.h>
void main()
{
int gd=0,gm,i=0,r=10,a=3,b=7;
initgraph(&gd,&gm,"\\turboc3\\bgi");
setcolor(15);

while(!kbhit())
{
  i++;
  setcolor(15);
  settextstyle(3,0,4);
outtextxy(120,400,"Wello");
  if(i%2==0)
  {

   //Head
   //setfillstyle(1,12);
   ellipse(225,165, 0, 360,15,20);
   //floodfill(225,165,15);

   //Nose
   arc(225,168,180,360,2);
   //Mouse
   setfillstyle(1,4);
   ellipse(225,175, 0, 360,5,2);
   fillellipse(225,175,5,2);

   //Eyes
   ellipse(220,163, 0, 360,2,1);
   ellipse(230,163, 0, 360,2,1);//R
   //Eye Lash
   arc(220,160,20,160,4);//L
   arc(230,160,20,160,4);//L
  //-----------Sholder--------------
  arc(210,200-a,60,180,8);//Left
  arc(240,200-a,0,120,8);//Right

  //-----------------Neck-----------------------
  line(215,180,215,192-a);
  line(235,180,235,192-a);
  arc(225,190-a,180,360,10);
  //---------------Hand--------------
  //L
  //Outer
  line(202,198-a,180+b,230-a);//L
  line(180+b,230-a,210,250-a); //L
  //inner
  line(210,210-a,195+b,225-a);
  line(195+b,225-a, 210,240-a);
  //T-shirt
  line(205,215,195,211);
  //R
  //Outer
  line(248,198-a,270-b,230-a);//R
  line(270-b,230-a,240,250-a);
  //inner
  line(240,210-a,255-b,230-a);//R
  line(255-b,230-a, 240,240-a);//R
  //T-shirt
  line(243,217,256,210);

 //----------Belt-----------------------
  line(210,247-b,240,247-b);
  //-----------Side body------------------------------
  line(210,210-a,210,250);//L
  line(240,210-a,240,250);//R
  setfillstyle(1,2);
  floodfill(230,230,15);
  //Leg
  //L
  //Upper
  line(210,250,200,290);//outer
  line(225,250,215,290);
  line(206,265,220,265);//Kumta
  //Lower
  line(200,290,205,330);//outer
  line(215,290,215,330);//in
  //foot
  line(215,330,215,335); // |
  line(215,335,207,345); // /
  line(207,345,203,342);
  line(203,342,205,330);
  //R
  //Upper
  line(240,250,235,290);//Outer
  line(225,250,220,290);//Inner
  line(224,265,238,265);//Kumta
  setfillstyle(1,1);
  floodfill(230,260,15);
  //Lower
  line(235,290,238,330);//Out
  line(220,290,228,330);//Inner
  //Foot
  line(238,330,238,335); // |
  line(238,335,231,345); // /
  line(231,345,227,342);
  line(227,342,228,330);
  }
  else
  {
   //Head
   //setfillstyle(1,12);
   ellipse(225,165, 0, 360,15,20);
   //floodfill(225,165,15);
   //Nose
   arc(225,168,180,360,2);
   //Mouse
   ellipse(225,175, 0, 360,3,2);

   //Eyes
   ellipse(220,163, 0, 360,2,1);
   ellipse(230,163, 0, 360,2,1);//R
   //Eye Lash
   arc(220,161,20,160,4);//L
   arc(230,161,20,160,4);//L
  //-----------Sholder--------------
  arc(210,200+a,60,180,10);//Left
  arc(240,200+a,0,120,10);//Right

  //-----------------Neck-----------------------
  line(215,180,215,190+a);//Left
  line(235,180,235,190+a);//Right
  arc(225,190,180,360,10);
  //---------------Hand--------------
  //Outer line
  //L
  line(200,200+a,180,230+a); //L
  line(180,230+a,210,250+a);//L
  //inner line
  line(210,210+a,195,225+a);//L
  line(195,225+a, 210,240+a);//L
  //T-shirt
  line(205,215+a,193,211+a);
  //R
  line(250,200+a,270,230+a);//R
  line(270,230+a,240,250+a);
  //Innerline Right
  line(240,210+a,255,230+a);//R
  line(255,230+a, 240,240+a);
  //T-shirt
  line(245,217+a,256,210+a);
  //-------------belt--------
  line(210,247,240,247);
  //-----------Side body------------------------------
  line(210,210+a,210,250);//L
  line(240,210+a,240,250);//R
  setfillstyle(1,2);
  floodfill(230,230,15);
 //Leg
  //L
  //upper
  line(210,250,202,290);//outer
  line(225,250,217,290);//inner
  line(207,265,223,265);//Kumta
  //setfillstyle(1,1);
  //floodfill(215,255,15);
  //Lower
  line(202,290,205,330);//outer
  line(217,290,215,330);//inner
  //foot
  line(215,330,215,335); // |
  line(215,335,207,345); // /
  line(207,345,203,342);
  line(203,342,205,330);
  //R
  //Upper
  line(240,250,238,290);//Outer
  line(225,250,223,290);//Inner
  line(223,265,239,265);//Kumta
  setfillstyle(1,1);
  floodfill(230,260,15);
  //Lower
  line(238,290,238,310);//Out
  line(223,290,228,310);//inner
  //foot
  line(238,310,238,315); // |
  line(238,315,231,325); // /
  line(231,325,227,322);
  line(227,322,228,310);
  }

  delay(285);
  cleardevice();
}
getch();
}