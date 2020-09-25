#include <stdio.h>
#include <conio.h>
void main()
{
//wap to accept numbers and square the number and display it
int num, square;
clrscr();
printf("Enter Number");
scanf ("%d", &num);
square = num * num;
printf("\n square of number = %d", square);
getch();
}