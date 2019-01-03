#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void tri(int x1,int y1,int x2,int y2,int x3,int y3)
{
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}

void rotatetri(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int x,y,a1,b1,a2,b2,a3,b3,i=x2,j=y2;
	float t;
	printf("Enter the angle for rotation:");
	scanf("%f",&t);
	cleardevice();
	t=(t*3.14)/180;
	a1=i+(x1-i)*cos(t)-(y1-j)*sin(t);
	b1=j+(x1-i)*sin(t)+(y1-j)*cos(t);
	a2=i+(x2-i)*cos(t)-(y2-j)*sin(t);
	b2=j+(x2-i)*sin(t)-(y2-j)*cos(t);
	a3=i+(x3-i)*cos(t)-(y3-j)*sin(t);
	b3=j+(x3-i)*sin(t)-(y3-j)*cos(t);
	printf("Rotate");
	tri(a1,b1,a2,b2,a3,b3);
}


void main()
{
	int gd=DETECT,gm;
	int x1,y1,x2,y2,x3,y3;
	initgraph(&gd,&gm," ");
	printf("Enter the first point for the triangle:");
	scanf("%d%d",&x1,&y1);
	printf("Enter the second point for the triangle:");
	scanf("%d%d",&x2,&y2);
	printf("Enter the third point for the triangle:");
	scanf("%d%d",&x3,&y3);
	tri(x1,y1,x2,y2,x3,y3);
	getch();
	cleardevice();
	rotatetri(x1,y1,x2,y2,x3,y3);
	setcolor(5);
	tri(x1,y1,x2,y2,x3,y3);
	getch();
}
	
