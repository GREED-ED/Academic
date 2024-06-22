//Scaling
#include <stdio.h>
#include <graphics.h>
void scale(int* x,int* y,int* Sx,int* Sy)
{
	*x = *x * *Sx;
	*y = *y * *Sy;
}
int main()
{
	int gd = DETECT, gm;
    	initgraph(&gd, &gm, "");
	int x1,y1,x2,y2,x3,y3,Sx,Sy;
	printf("Enter first point of triangle: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter second point of triangle: ");
	scanf("%d%d",&x2,&y2);
	printf("Enter third point of triangle: ");
	scanf("%d%d",&x3,&y3);
	printf("Enter scaling factor (Sx and Sy): ");
	scanf("%d%d",&Sx,&Sy);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	scale(&x1,&y1,&Sx,&Sy);
    scale(&x2,&y2,&Sx,&Sy);
	scale(&x3,&y3,&Sx,&Sy);
    line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	getch();
	return 0;
}


