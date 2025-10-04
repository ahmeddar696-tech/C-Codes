// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
  long double p,n,r,m,q;
    printf("enter the number of term you want");
    scanf("%Lf", &n);
    q=n-1;
    p=pow(2,q);
    m=pow(2,p);
    
    for (r=2;r<=m;r=r*r)
  { printf("%Lf\t", r);}

    

    return 0;
}