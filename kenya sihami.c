#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,x1,x2;
	printf("Enter integer a\n");
	scanf("%d", &a);
	printf("Enter integer b\n");
	scanf("%d", &b);
	printf("Enter integer c\n");
	scanf("%d", &c);
	x1=(-b+sqrt(b*b-4*a*c)) / (2*a);
	x2=(-b-sqrt(b*b-4*a*c)) / (2*a);
	 printf("\n x1 is %d", x1);
	 printf("\n x2 is %d", x2);
	 
	 return 0;
}