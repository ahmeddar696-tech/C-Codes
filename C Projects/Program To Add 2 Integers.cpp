//add.c
#include <stdio.h>
int main ()
{
	int a,b,c;
	float r1,r2,d;
	printf("Enter The Coefficients a,b and c");
    scanf("%d%d%d", &a, &b, &c);
    d=b*b-4*a*c;
    if(d<0)
	{
    printf("The equation has no real solutions");
}
    else if(d==0)
    {
    r1=-b/(2*a);
printf ("The equation has only 1 real solution %f", r1);
}
else(d>0){
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("The equation has 2 real solutions %f and %f", r1, r2);
	
}
    return 0;

}
