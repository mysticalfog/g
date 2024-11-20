#include <graphics.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>

void floodFill(int x, int y, int fillColor, int oldColor){
if(getpixel(x,y) == oldColor){
putpixel(x,y, fillColor);

floodFill(x+1, y, fillColor, oldColor);
floodFill(x, y+1, fillColor, oldColor);
floodFill(x-1, y, fillColor, oldColor);
floodFill(x, y-1, fillColor, oldColor);
floodFill(x+1, y+1, fillColor, oldColor);
floodFill(x-1, y+1, fillColor, oldColor);
floodFill(x+1, y-1, fillColor, oldColor);
floodFill(x-1, y-1, fillColor, oldColor);
}
}

int main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

setcolor(YELLOW);  //sets current collor for drawing
rectangle(100,100, 150, 150);  //yellow border rectangle

setfillstyle(SOLID_FILL, BLUE);  //sets current fill color and pattern
floodfill(101,101, YELLOW);  //fill current fill color inside yellow border

floodFill(101,101, GREEN, BLUE);  //replace blue color with green

getch();
closegraph();

return 0;
}