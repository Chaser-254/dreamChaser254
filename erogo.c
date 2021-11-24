#include <stdio.h>

int main()
{
    int i=1, Number=0;
    printf("Enter number");
    scanf("%d",&Number);
    for(i=0;i<=10;i++)
    {
        printf("%d\n", Number*i);
    }
    return 0;
}
