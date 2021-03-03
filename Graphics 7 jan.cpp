//#include<stdio.h>
#include<graphics.h>
int main(){
    int gd=0,gm;
    initgraph(&gd,&gm," ");
    circle(100,80,50);
    rectangle(200,220,300,400);
    getch();
    closegraph();

}
