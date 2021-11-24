#include<stdio.h>

int main()
{
    int b=15;
    void f1();
    b = f1();
    printf("%d\n", b);
    return 0;
}
void f1()
{
    printf("Hello");
}
