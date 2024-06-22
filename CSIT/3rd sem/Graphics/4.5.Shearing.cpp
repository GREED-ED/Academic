#include <stdio.h>
#include <graphics.h>
void shear(int* x,int* y,int* Shx,int* Shy)
{
	int xx = *x + *Shx * *y;
	int yy = *y + *Shy * *x;
	*x = xx;
	*y = yy;
}
int main()
{
	int gd = DETECT, gm;
     initgraph(&gd, &gm, "");
	int x1,y1,x2,y2,x3,y3,Shx,Shy;
	printf("Enter first point of triangle: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter second point of triangle: ");
	scanf("%d%d",&x2,&y2);
	printf("Enter third point of triangle: ");
	scanf("%d%d",&x3,&y3);
	printf("Enter shearing factor (Shx and Shy): ");
	scanf("%d%d",&Shx,&Shy);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	shear(&x1,&y1,&Shx,&Shy);
	shear(&x2,&y2,&Shx,&Shy);
	shear(&x3,&y3,&Shx,&Shy);
     line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	getch();
	return 0;
}


