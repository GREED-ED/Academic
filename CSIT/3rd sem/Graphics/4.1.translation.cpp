//Translation
#include <stdio.h>
#include <graphics.h>
void translate(int* x,int* y,int* tx,int* ty)
{
	*x = *x + *tx;
	*y = *y + *ty;
}
int main()
{
	int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
	int x1,y1,x2,y2,x3,y3,tx,ty;
	printf("Enter first point of triangle: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter second point of triangle: ");
	scanf("%d%d",&x2,&y2);
	printf("Enter third point of triangle: ");
	scanf("%d%d",&x3,&y3);
	printf("Enter translation factor (tx and ty): ");
	scanf("%d%d",&tx,&ty);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	translate(&x1,&y1,&tx,&ty);
    translate(&x2,&y2,&tx,&ty);
	translate(&x3,&y3,&tx,&ty);
    line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	getch();
	closegraph();
	return 0;
}



