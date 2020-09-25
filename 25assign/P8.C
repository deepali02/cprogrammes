#include<stdio.h>
#include<conio.h>
int main()
//wap to accept num and to inform its prime or not
{
int num;
int rem;
int i=1;
clrscr();
printf ("Enter Number");
scanf ("%d", &num);
while (i< num)
{
rem= num / i;
if(rem == 0)
{
break;
}
i++;
}
if (i == num)
printf("Number is prime number");
else
printf("Number is not prime number");
getch();
return 0;
}
