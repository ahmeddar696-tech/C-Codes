//leap2.c
#include <stdio.h>
int main ()
{
	int x;
	printf ("Enter the year");
	scanf("%d", &x);
	if ((x%4==0) && (x%100!=0) || (x%400==0))
	{
	printf("The year is a leap year");
}
	else
	{
		printf("The year is not a leap year");
	} return 0;
}
