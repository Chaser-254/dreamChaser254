#include<stdio.h>
int j;
int function();

int main()
{
    while(j)
    {
        function();
        main();
    }
    printf("Hi\n");
    return 0;
}
int function()
{
    printf("Hello");
}
