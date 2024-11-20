#include <graphics.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>
#include <dos.h>

void BoundaryFill8(int x, int y, int fillColor, int boundaryColor) {
    int currentColor = getpixel(x, y); // Get the current color of the pixel

    // If the pixel is not the boundary and not already filled
    if (currentColor != boundaryColor && currentColor != fillColor) {
	putpixel(x, y, fillColor); // Fill the pixel with the desired color

	// Recursive calls for 8 directions
	BoundaryFill8(x + 1, y, fillColor, boundaryColor); // Right
	BoundaryFill8(x - 1, y, fillColor, boundaryColor); // Left
	BoundaryFill8(x, y + 1, fillColor, boundaryColor); // Down
	BoundaryFill8(x, y - 1, fillColor, boundaryColor); // Up
	BoundaryFill8(x + 1, y + 1, fillColor, boundaryColor); // Bottom-right
	BoundaryFill8(x - 1, y + 1, fillColor, boundaryColor); // Bottom-left
	BoundaryFill8(x + 1, y - 1, fillColor, boundaryColor); // Top-right
	BoundaryFill8(x - 1, y - 1, fillColor, boundaryColor); // Top-left
    }
}

int main() {
    int gd = DETECT, gm;
   /* int x1 = 100, y1 = 100; // Top-left corner of the rectangle
    int x2 = 200, y2 = 200; // Bottom-right corner of the rectangle
    int fillX = 150, fillY = 150; // Starting point inside the rectangle
    int boundaryColor = WHITE;
    int fillColor = RED; */

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw the rectangle
    setcolor(WHITE);
    rectangle(50, 50, 100, 100);

    // Perform custom 8-connected flood fill
    BoundaryFill8(55,55,4,15);
    //delay(10000);

    // Pause to view output
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}