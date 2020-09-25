#include <stdio.h>
#include <conio.h>
void main()
{
//wap to accept length & breadth of a rectangle and calculate and display
// area of rectangle
int l, b, area;
clrscr();
printf("Enter length and breadth");
scanf ("%d%d", &l, &b);
area = l * b;
printf("\n Area of rectangle = %d", area);
getch();
}