//compare.c
#include <stdio.h>
int main ()
{
	int x,y;
	printf ("enter the two numbers to be compared");
	scanf ("%d%d", &x, &y);
	if (x>y)
printf ("%d is greater than %d", x, y);
if (y>x)
printf ("%d is greater than %d", y, x);
if (x==y)
printf ("%d and %d are equal", y, x);
}
