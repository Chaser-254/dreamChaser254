#include <stdio.h>

int main()
{
    char language;
    printf("Enter language\n");
    scanf("%c", &language);
    switch(language)
    {
    case 'a':
        printf("c#\n");
        break;

    case 'b':
        printf("c\n");
        break;

    case 'd':
        printf("c++\n");
        break;
    default:

        printf("other programming language\n");

    }
}
