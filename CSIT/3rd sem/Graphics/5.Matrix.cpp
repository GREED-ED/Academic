#include <stdio.h>
#include <math.h>
#include <graphics.h>

int no_of_vertices;

// Function Prototypes
void translation(float tmx[3][3]);
void rotation(float tmx[3][3]);
void reflection(float tmx[3][3]);
void shearing(float tmx[3][3]);
void scaling(float tmx[3][3]);

void input(int vertices[][3]);
void draw_polygon(int vertices[][3]);
void transform(int vertices[][3], float tmx[3][3]);

void translate(int vertices[][3], int Tx, int Ty);
void refX(int vertices[][3]);

int main() {
    int gd = DETECT, gm, op;
    initgraph(&gd, &gm, "");

    float tmx[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };
    
    // Drawing coordinate axes
    line(0, 240, 640, 240);
    line(320, 0, 320, 480);

    // Reading vertices
    printf("Enter the number of vertices: ");
    scanf("%d", &no_of_vertices);
    int vertices[no_of_vertices][3];
    input(vertices);

    // Drawing the initial figure
    draw_polygon(vertices);

    // User chooses the transformation operation
    printf("\nChoose the transformation operation:\n");
    printf("1-Translation\n2-Rotation\n3-Reflection\n4-Shearing\n5-Scaling\n");
    printf("Choose: ");
    scanf("%d", &op);

    switch (op) {
        case 1: translation(tmx); break;
        case 2: rotation(tmx); break;
        case 3: reflection(tmx); break;
        case 4: shearing(tmx); break;
        case 5: scaling(tmx); break;
        default: printf("Invalid opion!\n"); break;
    }
	
    // Applying the chosen transformation
    transform(vertices, tmx);

    // Drawing the transformed figure
    draw_polygon(vertices);
    getch();
    //closegraph();
    return 0;
}

void input(int vertices[][3]) {
    for (int i = 0; i < no_of_vertices; i++) {
        printf("\nEnter the coordinates of vertex %d\n", i + 1);
        // printf("X = ");
        scanf("%d%d", &vertices[i][0], &vertices[i][1]);
        // printf("Y = ");
        // scanf("%d", &vertices[i][1]);
        vertices[i][2] = 1; // Homogeneous coordinate
    }
}

void draw_polygon(int vertices[][3]) {
    refX(vertices);
    translate(vertices, 320, 240);
    for (int i = 0; i < no_of_vertices - 1; i++) {
        line(vertices[i][0], vertices[i][1], vertices[i + 1][0], vertices[i + 1][1]);
    }
    line(vertices[no_of_vertices - 1][0], vertices[no_of_vertices - 1][1], vertices[0][0], vertices[0][1]);
    translate(vertices, -320, -240);
    refX(vertices);
}

void translation(float tmx[3][3]) {
    int Tx, Ty;
    printf("\nEnter the translation points:\nTx = ");
    scanf("%d", &Tx);
    printf("Ty = ");
    scanf("%d", &Ty);
    tmx[2][0] = Tx;
    tmx[2][1] = Ty;
}

void translate(int vertices[][3], int Tx, int Ty) {
    float trans_matrix[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };
    trans_matrix[2][0] = Tx;
    trans_matrix[2][1] = Ty;
    transform(vertices, trans_matrix);
}

void rotation(float tmx[3][3]) {
    int angle;
    printf("\nEnter the angle of rotation: ");
    scanf("%d", &angle);
    double rad = (angle * 3.14159 / 180.0);
    tmx[0][0] = cos(rad);
    tmx[0][1] = -sin(rad);
    tmx[1][0] = sin(rad);
    tmx[1][1] = cos(rad);
}

void reflection(float tmx[3][3]) {
    int reflection_type;
    printf("\nChoose the type of reflection to perform:\n1-Reflection about X-axis\n2-Reflection about Y-axis\n3-Reflection about line x=y\nEnter the type");
    scanf("%d", &reflection_type);
    switch (reflection_type) {
        case 1: tmx[1][1] = -1; break;
        case 2: tmx[0][0] = -1; break;
        case 3:
            tmx[0][0] = 0;
            tmx[1][0] = 1;
            tmx[0][1] = 1;
            tmx[1][1] = 0;
            break;
        default: printf("Invalid reflection type!\n"); break;
    }
}

void refX(int vertices[][3]) {
    float ref_matrix[3][3] = { {1, 0, 0}, {0, -1, 0}, {0, 0, 1} };
    transform(vertices, ref_matrix);
}

void shearing(float tmx[3][3]) {
    int Shx, Shy;
    printf("\nEnter the shearing values:\nShx = ");
    scanf("%d", &Shx);
    printf("Shy = ");
    scanf("%d", &Shy);
    tmx[1][0] = Shx;
    tmx[0][1] = Shy;
}

void scaling(float tmx[3][3]) {
    int Sx, Sy;
    printf("\nEnter the scaling factors:\nSx = ");
    scanf("%d", &Sx);
    printf("Sy = ");
    scanf("%d", &Sy);
    tmx[0][0] = Sx;
    tmx[1][1] = Sy;
}

void transform(int vertices[][3], float tmx[3][3]) {
    int temp_matrix[no_of_vertices][3];
    for (int i = 0; i < no_of_vertices; i++) {
        for (int j = 0; j < 3; j++) {
            temp_matrix[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                temp_matrix[i][j] += int(round(vertices[i][k] * tmx[k][j]));
            }
        }
    }
    for (int i = 0; i < no_of_vertices; i++) {
        for (int j = 0; j < 3; j++) {
            vertices[i][j] = temp_matrix[i][j];
        }
    }
}

