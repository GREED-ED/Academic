#include<dos.h>

#include<stdio.h>
#include<stdlib.h>

void main()

{

int x,y,b,px,py,c,p,s,cl;

int d=0,m;

union REGS i,o;

initgraph(&d,&m,"c:\tc");

i.x.ax=1;

int86(0x33,&i,&o);

i.x.ax=8;

i.x.cx=20;

i.x.dx=450;

int86(0x33,&i,&o);

printf("Brush style insert number from 0 to 5  : ");

scanf("%d",&p);

printf("Brush size insert number from 1  to 7  : ");

scanf("%d",&s);

printf("Brush color insert number from 1 to 16 : ");

scanf("%d",&cl);

clrscr();

cleardevice();

printf("\t\t**********DRAW IMAGE************");

while(!kbhit())

{

i.x.ax=3;

b=o.x.bx;

x=o.x.cx;

y=o.x.dx;

px=x;

py=y;

int86(0x33,&i,&o);

if(cl==16)

{

c=random(16);

}

else

{

c=cl;

}

setcolor(c);

if(b==1)

{

i.x.ax=3;

int86(0x33,&i,&o);

x=o.x.cx;

y=o.x.dx;

b=o.x.bx;

switch(p)

{

case 1:circle(px,py,s);break;

case 2:ellipse(px,py,0,270,s,s+2);break;

case 3:fillellipse(px,py,s+2,s);break;

case 4:rectangle(px,py,x,y);break;

case 5:sector(px,py,30,120,s,s);break;

default:line(px,py,x,y);

}

}

}

getch();

restorecrtmode();

closegraph();

}
