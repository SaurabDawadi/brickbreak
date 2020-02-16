#include <stdio.h>
#include <conio.h>
//#include <windows.h>
#include <graphics.h>
#include <winbgim.h>
#include <process.h>
int ia=1600;
int ja=700;
int main (){

initwindow(ia,ja,"Brick Breaker");
//setcolor(0);
setfillstyle(1,6);

//setcolor(BLUE);
//COLOR(1,0,0);
rectangle(150,50,1200,650);
floodfill(10,50,10);

setlinestyle(SOLID_LINE,0xFFFF,10);
rectangle(150,50,1200,650);
setlinestyle(SOLID_LINE,0xFFFF,10);
setcolor(0);
          line(650,637,750,637);
          //circle(700,620,3);
          putpixel(700,620,BLACK);

//outtext("hello");
//circle (200,100,100);
getch();
return 0;



}



