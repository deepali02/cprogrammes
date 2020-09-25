#include <stdio.h>
#include <conio.h>
void main()
{
//wap to accept radius of circle and calculate area of circle
//
float radius;
float area;
clrscr();
printf("Enter Radius");
scanf ("%f", &radius);
area = 3.14f * radius * radius;
printf("\n Area of Circle= %f", area);
getch();
}