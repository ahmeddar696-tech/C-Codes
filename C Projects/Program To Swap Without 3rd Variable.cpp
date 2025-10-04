//swap2.c
#include <stdio.h>
int main ()
{
int x,y;
printf("Enter The Two Integers\n");
scanf ("%d%d", &x, &y);
x=x*0+y;
y=y*0+x;
printf ("the two integers after swapping are %d and %d", x, y);
return 0;
}
