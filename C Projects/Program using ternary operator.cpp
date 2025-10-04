//ternary.c
#include <stdio.h>
int main ()
{ int x,y,z;
printf("Enter the two numbers");
scanf("%d%d", &x, &y);
z=x>y?x:y;
printf("%d is the larger number", z);
return 0;
}
