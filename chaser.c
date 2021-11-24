#include <stdio.h>

int main()
{
    int product;
    printf("Enter the product");
    scanf("%d", &product);

    switch(product)
    {
    case 1:
        printf("Sugar=Ksh.60");
        break;
    case 2:
        printf("omo=ksh.20");
        break;
    case 3:
        printf("tea leaves=ksh.25");
        break;
    case 4:
        printf("bread=ksh.50");
        break;
    case 5:
        printf("rice=ksh.120");
        break;
    case 6:
        printf("book=ksh.80");
    case 7:
        printf("rubber=ksh.5");
        break;
    case 8:
        printf("milk=ksh.60");
        break;
    case 9:
        printf("water=ksh.80");
        break;
    case 10:
        printf("soap=ksh.50");
        break;
    case 11:
        printf("perfume=ksh.50");
        break;
    case 12:
        printf("super_glue=ksh.30");
        break;
    case 13:
        printf("colgate=ksh.240");
        break;
    case 14:
        printf("biscuit=ksh.45");
        break;
    case 15:
        printf("flour=ksh.65");
    case 16:
        printf("cooking_fat=ksh.230");
        break;

    default:
        printf("No such product");
    }
    return 0;
}
