//Greater.c
#include <stdio.h>
int main ()
{int x,y;
printf("Enter The Two Integers\n");
scanf("%d%d", &x, &y);
if (x>y){

printf("%d is grater than %d", x, y);
}
else {
	printf("%d is greater than %d", y ,x);
}
}
