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
    
    int dx = x2 - x1;
    int dy = y2 - y1;
    float m = (float)dy / dx;
    int p = 2 * dy - dx;
    putpixel(x1, y1, WHITE);
    
    int x = x1, y = y1;
    if (m >= 0) {
        while (x <= x2) {
            if (p < 0) {
                x++;
                p += 2 * dy;
            } else {
                x++;
                y++;
                p += 2 * dy - 2 * dx;
            }
            putpixel(x, y, WHITE);
        }
    } else {
        while (x >= x2) {
            if (p < 0) {
                x--;
                p += 2 * dy;
            } else {
                x--;
                y++;
                p += 2 * dy - 2 * dx;
            }
            putpixel(x, y, WHITE);
        }
    }
    
    getch();
    closegraph();
    return 0;
}

