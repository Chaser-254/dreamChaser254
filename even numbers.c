#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter upper limit:");
    scanf("%d", &n);
    
    for(i=2;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("sum of all even number between 0 to %d=%d", n, sum);
	
    return 0;
}
