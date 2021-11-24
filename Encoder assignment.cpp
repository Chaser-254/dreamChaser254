#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b,c, x1, x2;
	printf("please enter int a\n");
	scanf("%d", &a);
	printf("please enter int b\n");
	scanf("%d", &b);
	printf("please enter int c\n");
	scanf("%d", &c);
	
	x1=(-b+sqrt(b*b-4*a*c)) / (2*a);
	x2=(-b-sqrt(b*b-4*a*c)) / (2*a);
	printf("\n x1 is %d\n", x1);
	printf("\n x2 is %d\n", x2);
	
	return 0;
}