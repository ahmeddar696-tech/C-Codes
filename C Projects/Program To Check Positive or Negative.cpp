//positive/negative.c
#include <stdio.h>
int main ()
{
int x;
printf ("Enter The Number To Be Checked\n");
scanf("%d" ,&x);
if (x>0)
{
printf ("%d is a positive integer", x); 
}
else if (x<0)
{
	printf ("%d is a negative integer", x);
}
else
{
printf ("%d is niether positive nor negative", x);
}
return 0;

}
