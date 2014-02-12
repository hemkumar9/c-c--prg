#include<stdio.h>
#include<conio.h>
#include<math.h>
void fun(float,float,float,float,float,float);
void main()
{
float x1,x2,x3,y1,y2,y3,d1,d2,d3;
clrscr();
printf("\n enter three co-ordinates of triangle");
scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
 d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
 d2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
 d3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
 printf("\n lengths of triangle");
printf("%f %f %f\n",d1,d2,d3);
if(d1==d2&&d2==d3)
{
printf("\n EQUILATRAL TRIANGLE");
}
else if(d1==d2||d2==d3||d3==d1)
{
printf("\n ISOSCELES TRIANGLE");
}
else if((d1>d2)&&(d1>d3))
{
if((d1*d1)==(d2*d2)+(d3*d3))
{
printf("\n RIGHT ANGLED TRIANGLE");
}
else
printf("\n SCALENE TRIANGLE");
}
else if((d2>d1)&&(d2>d3))
{
if((d2*d2)==(d1*d1)+(d3*d3))
printf("\n RIGHT ANGLED TRIANGLE");
else
printf("\n  SCALENE TRIANGLE");
}
else if((d3>d1)&&(d3>d2))
{
if((d3*d3)==(d1*d1)+(d2*d2))
printf("\n RIGHT ANGLED TRIANGLE");
else
printf("\n SCALENE TRIANGLE");
}
else
printf("\n SCALENE TRIANGLE");
getch();
}