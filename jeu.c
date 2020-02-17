#include <stdio.h>
#include <conio.h>
//#include <windows.h>
#include <graphics.h>
#include <winbgim.h>
#include <process.h>
#define width 1600
#define height 700
#define launcher_h 640
#define launcher_w 650
#define rect_h 1050
#define rect_w 600
int length=100;
int thick=20;
int r=10;
int bx,by;
int lbx,lby;
void changeBall(int i){
    setcolor(BLACK);

    int vx=1,vy=1;
    if(i==1){
         by=launcher_h-thick-r;
         bx=launcher_w+(length)/2;
        circle(bx,by,r);
    }
    else{
            lbx=bx;
           lby=by;
           by+=vx;
          bx+=vy;

        setcolor(BROWN);
        circle(lbx,lby,r);
        setcolor(BLACK);
        circle(bx,by,r);

    }



}
 void changeKicker(int);
 void move_brick(int);
int main (){
int x=launcher_w;
initwindow(width,height,"Brick Breaker");
//setcolor(0);
setfillstyle(1,BROWN);

//setcolor(BLUE);
//COLOR(1,0,0);
rectangle(150,50,1200,650);
floodfill(10,50,10);

rectangle(150,50,1200,650);
//setlinestyle(SOLID_LINE,0xFFFF,10);
setcolor(0);
         changeKicker(x);
          //circle(700,620,3);

//outtext("hello");
//circle (200,100,100);
getch();
return 0;

}
void changeKicker(int t){
        char ch;
        int lastt;
        int i=1;
while(1){

    if (t>150 && t<(1200-length)){

            //    delay(100);
            setcolor(BLACK);
         rectangle(t,launcher_h-thick,t+length,launcher_h);
     ch=getch();
   // delay(200);
     if (ch=='A' || ch=='a'){
            lastt=t;
            t=t-length;
            setcolor(BROWN);
            rectangle(lastt,launcher_h-thick,lastt+length,launcher_h);

     }else if(ch=='D'|| ch=='d'){
         lastt=t;
        t=t+length;
        setcolor(BROWN);
        rectangle(lastt,launcher_h-thick,lastt+length,launcher_h);
     } else
       continue;
    }
    else{
        if(t<=150)
        t=t+2;
        if (t>=1200-length)
        t=t-2;
        continue;
    }


}


}



