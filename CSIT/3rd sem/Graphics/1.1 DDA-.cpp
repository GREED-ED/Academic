#include <stdio.h>
#include <math.h>
#include <graphics.h>
int main(){
    int x1, y1, x2, y2,steps;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    printf("Enter first point: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter second point: ");
    scanf("%d%d",&x2,&y2);
	 int dx = x2 - x1;
    int dy = y2 - y1;
    if (abs(dx)>abs(dy))
    	steps=abs(dy);
    else
		steps=abs(dx);
		
    float xinc = (float)dx / steps;
    float yinc = (float)dy / steps;
    float x = x1;
    float y = y1;
    for (int i = 0; i < steps; i++)
	{
        putpixel(round(x), round(y), WHITE);
        x = x + xinc;
        y = y + yinc;
    }   
	getch();
    closegraph();
}

