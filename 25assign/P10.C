#include <stdio.h>
#include <conio.h>
void main()
//wap to print even number from 0 to 10 using continue
{
int i=0;
clrscr();
while(i <= 10)
{
i++;
if(i % 2 != 0)
{
continue;
}
printf("%d\t", i);
}
getch();
}
