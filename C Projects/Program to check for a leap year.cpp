//leap.c
#include <stdio.h>
int main()
{int x,y,z,p;
printf ("Enter The Year You Want To Be Checked\n");
scanf ("%d", &x);
y=x%4;
z=x%100;
p=x%400;
if(y==0 && z!=0)
{
printf("The year is a leap year");
}
else if (y==0 && z==0)
{
	if (p==0)
	{
	printf("The year is a leap year");
}

	else 
	{
		printf("The year is not a leap year");
	}
	}
	else 
	{
		printf("The year is not a leap year");
	}

return 0;

}
