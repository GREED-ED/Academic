//BLA Algorithm
#include <stdio.h>
#include <graphics.h>
int main(){
    int x1, y1, x2, y2;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    printf("Enter first point: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter second point: ");
    scanf("%d%d",&x2,&y2);
    int x = x1, y = y1;
    int dx = x2 - x1;
    int dy = y2 - y1;
    int m = dy / dx;
    putpixel(x,y,WHITE);
    int p = (2 * dy - dx);
    if (m>=0){
	    while (x <= x2)
	    {
	        if (p < 0){
	            x++;
	            p = p + 2 * dy;
	        }
	        else{
	            x++;
	            y++;
	            p = p + (2 * dy) - (2 * dx);
	        }
	        putpixel(x,y,WHITE);
	    }
	    getch();
	    closegraph();
	}
	else {
		int dx = abs(x2 - x1);
    	int dy = abs(y2 - y1);
		while (x >= x2)
	    {
	        if (p < 0){
	            x--;
	            p = p + 2 * dy;
	        }
	        else{
	            x--;
	            y++;
	            p = p + (2 * dy) - (2 * dx);
	        }
	        putpixel(x,y,WHITE);
	    }
	    getch();
	    closegraph();
	}

    return 0;
}

