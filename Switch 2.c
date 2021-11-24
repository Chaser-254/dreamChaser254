#include<stdio.h>
int main()
{
    char week_days;
    printf("Enter week_day\n");
    scanf("%c", &week_days);
    switch(week_days)
    {
        case 'm':
        printf("Monday");
        break;
        case 't':
        printf("Tuesday");
        break;
        case 'w':
        printf("Wednesday");
        break;
        case 'h':
        printf("Thursday");
        break;
        case 'f':
        printf("Friday");
        break;
        case 's':
        printf("Saturday");
        break;
        case 'd':
        printf("Sunday");
        break;
        default:
        printf("invalid entry");

    }
    return 0;
}
