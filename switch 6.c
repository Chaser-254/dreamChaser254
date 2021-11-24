#include <stdio.h>

int main()
{
    int days;
    printf("enter days");
    scanf("%d", &days);

    switch(days)
    {
case 1:
    printf("Monday");
    break;
case 2:
    printf("Tuesday");
    break;
case 3:
    printf("Wednesday");
    break;
case 4:
    printf("Thursday");
    break;
case 5:
    printf("Friday");
    break;
case 6:
    printf("Saturday");
    break;
case 7:
    printf("Sunday");
    break;

default:
    printf("invalid entry");

    return 0;
    }
}
