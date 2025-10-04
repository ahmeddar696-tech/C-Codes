//switch calculator.c
#include <stdio.h>
int main()
{
	int x,y,z,i;
	printf("Enter the two numbers\n");
	scanf("%d%d", &x, &y);
	printf("Enter 1 for addition, 2 for subtraction and 3 for multipulication");
	scanf("%d", &i);

 switch (i)
	{
		case 1:
			z=x+y;
			printf("%d", z);	
			break;
			
		case 2:
			z=x-y;
			printf("%d", z);
			break;
		case 3:
			z=x*y;
			printf("%d", z);
			break;
			
		default: 
		printf("Wrong number entered");	
		break;
	
			
	}

	
}
