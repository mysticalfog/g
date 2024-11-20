#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>


void drawLineIncDDA(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1, dy = y2 - y1;
    int m = int(dy/dx);  //Slope
    int steps;

    if (abs(m)<=1) {
	steps = dx; // If slope |m| <= 1
    } else {
	steps = dy; // If slope |m| > 1
    }

    float xIncrement = dx / steps;
    float yIncrement = dy / steps;

    int x = x1, y = y1;
    for (int i = 0; i <= steps; i++) {
	putpixel(x, y, WHITE);
	x += xIncrement;
	y += yIncrement;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x1, y1, x2, y2;
    cout<<"Enter the coordinates of the starting point (x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of the ending point (x2, y2): ";
    cin>>x2>>y2;

    drawLineIncDDA(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
