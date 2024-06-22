#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	circle(100,150,50);
	getch();
	closegraph();
}