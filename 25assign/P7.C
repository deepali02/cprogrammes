#include <stdio.h>
#include <conio.h>
void main()
{
//wap to accept greater of 2 numbers using if else
int n1, n2;
clrscr();
printf("Enter 2 Numbers");
scanf ("%d%d", &n1, &n2);
if(n1>n2)
{
printf("\n n1 is greater");
}
else
printf("\n n2 is greater");
getch();
}