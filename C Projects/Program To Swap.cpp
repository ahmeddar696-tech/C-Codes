//swap.c
#include <stdio.h>
int main ()
{
	int x,y,z;
	printf("Enter The Integers To Be Swapped\n");
	scanf("%d%d", &x ,&y);
	z=x;
	x=y;
	y=z;
	printf ("The Integers After Swapping Are %d and %d", x ,y);
	return 0;
	
	
}
