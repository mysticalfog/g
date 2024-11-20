#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");

    int x1 = 100,y1 = 100,x2= 200,y2= 200; //Input end points

    float m = float((y2-y1)/(x2-x1)); //Slope
    float b = y1 - m*x1; //y-intercept

    if(m <= 1) //Line more towards x-axis
    {
	for(int x = x1;x <= x2;x++)
	{
	    int y = floor(m*x+b);
	    putpixel(x,y,WHITE);
	}
    }
    else  //Line more towards y-axis
    {
	for(int y = y1; y <= y2;y++)
	{
	    int x = floor((y-b)/m);
	    putpixel(x,y,WHITE);
	}
    }
    getch();
    closegraph();
    return 0;
}