#include <stdio.h>
#include <conio.h>
int main()
{
int marks;
int total = 0;
int cnt = 1;
float per;
clrscr();
while (cnt<=5)
{
printf("Enter Marks");
scanf ("%d", &marks);
total= total + marks;
cnt++;
}
printf ("\n total = %d", total);
per = (float)total/500.0f*100.0f;
printf ("\n per = %f", per);
if (per>=75)
{
printf ("\n Grade = Distinction");
}
else if (per >= 50 && per < 75);
{
printf("\n Grade = First Division");
}
else
{
printf("\n Grade = Second Division");
}
getch();
return 0;
}