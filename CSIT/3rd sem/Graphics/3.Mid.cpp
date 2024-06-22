#include <stdio.h>
#include <graphics.h>
void plot(int xc, int yc, int x, int y)
{
    putpixel(x + xc,y + yc, WHITE);
    putpixel(-x + xc,y + yc, WHITE);
    putpixel(x + xc,-y + yc, WHITE);
    putpixel(-x + xc,-y + yc, WHITE);
    putpixel(y + xc,x + yc, WHITE);
    putpixel(-y + xc,x + yc, WHITE);
    putpixel(y + xc,-x + yc, WHITE);
    putpixel(-y + xc,-x + yc, WHITE);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x, y, r;
    printf("Enter the Midpoint and Radius: ");
    scanf("%d%d%d", &x, &y, &r);
	int xp = 0, yp = r;
    int p = 1 - r;
    plot(x,y,xp,yp);
    while (xp < yp)
    {
        xp++;
        if (p < 0)
            p += 2 * xp + 1;
        else
        {
            yp--;
            p += 2 * (xp - yp) + 1;
        }
        plot(x,y,xp,yp);
    }
    getch();
    closegraph();
    return 0;
}



