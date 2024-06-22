//clockwise Rotation
#include <stdio.h>
#include <math.h>
#include <graphics.h>
void rotate(int* x, int* y, float ang) {
    float radians = ang * (M_PI / 180); 
    float xx = *x * cos(radians) - *y * sin(radians); 
    float yy = *x * sin(radians) + *y * cos(radians);
    *x = (int)xx;
    *y = (int)yy;
}
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1, y1, x2, y2, x3, y3;
    float ang;
    printf("Enter first point of triangle: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter second point of triangle: ");
    scanf("%d%d", &x2, &y2);
    printf("Enter third point of triangle: ");
    scanf("%d%d", &x3, &y3);
    printf("Enter angle: ");
    scanf("%f", &ang);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    rotate(&x1, &y1, ang);
    rotate(&x2, &y2, ang);
    rotate(&x3, &y3, ang);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
    closegraph();
    return 0;
}

