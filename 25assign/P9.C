#include <stdio.h>
#include <conio.h>
int main()
//wap to print number 0 to 8 except number 4
{
int j;
clrscr();
for(j= 0; j<=8; j++)
{
if(j==4)
{
continue;
}
printf("%d", j);
}
getch();
return 0;
}