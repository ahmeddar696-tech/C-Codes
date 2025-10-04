//grade.c
#include <stdio.h>
int main ()
{
int x;
printf ("Enter Your Marks\n");
scanf("%d", &x);
if (90<=x && x<=100)
{printf("Congrats! You Scored An A+ Grade :)");
}
else if (80<=x && x<90)
{printf("Congrats! You Scored An A Grade :)");
}
else if (70<=x && x<80)
{
	printf("You have Scored A B Grade");
}
else if (60<=x && x<70)
{

printf ( "You have Scored A C Grade");
}
else if (50<=x && x<60)
{
printf("You have scored A D Grade");
}
else if (40<=x && x<50)
{printf ("You have Scored An E Grade");

}
else {
	printf("You Have Failed The Examination :(");
}
return 0;
}
