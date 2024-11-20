/*circle using Bresenham's method*/
#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void main()
{
   int gd = DETECT, gm,h,k,r,d,x,y;
   initgraph(&gd,&gm,"C://TURBOC3//BGI");

/*   printf("\nEnter centre(h,k) of circle : ");
   scanf("%d%d",&h,&k);
   printf("\nEnter radius: ");
  scanf("%d",&r); */

   h= 200, k=200, r=50;
   x=0;
   y=r;
   d=3-2*r;
   //printf("\nd=%d",d);
   while(x<=y)
	{
	putpixel(x+h,y+k,RED);
	putpixel(x+h,-y+k,RED);
	putpixel(-x+h,y+k,RED);
	putpixel(-x+h,-y+k,RED);
	putpixel(y+h,x+k,RED);
	putpixel(y+h,-x+k,RED);
	putpixel(-y+h,x+k,RED);
	putpixel(-y+h,-x+k,RED);

	x++;
	if(d<=0)
	  {
	  d=d+4*x+6;
	  }
	else
	  {
	  d=d+4*(x-y)+10;
	  y=y-1;
	  }
	}
   getch();
   closegraph();
}
