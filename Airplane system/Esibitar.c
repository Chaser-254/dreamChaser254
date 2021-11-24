#include <stdio.h>
int main()
{
    int product_id;
    printf("\n Enter product_id:");
    scanf("%d\n",&product_id);

    switch (product_id)
    {
    case 1:
        printf("Ugali ksh.7.00");
        break;

    case 2:
        printf("cabbage ksh. 7.00");
        break;

    case 3:
        printf("kahawa ksh. 5.00");
        break;

    case 4:
        printf("Rice ksh.13.00");
        break;

    case 5:
        printf("matumbo ksh.30.00");
        break;

    case 6:
        printf("Beans ksh.13.00");
        break;

    case 7:
        printf("Potatoes ksh.25.00");
        break;

    default:
        printf("Invalid Entry");
        break;

    }
    return 0;
}
