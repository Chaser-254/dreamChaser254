#include <stdio.h>
int main()
{
    int i, seats,First_class,Second_class,  selectedClass,total_first_class,total_second_class;
    {
        seats = 10;
        selectedClass = 0;

        for (int i =0;i<=10;i++)
        {
            seats = i;

            for (int i = 1;i<=10;i++)
            {
                printf("Please type 1 for first class or 2 for economy class");

                selectedClass = selectedClass + i;

                while (selectedClass < 1 || selectedClass > 2)
                {
                    printf("Please only enter 1 or 2 for first class or second class");

                    selectedClass = selectedClass + i;
                    {
                        if (selectedClass == 1)
                        {
                         if (total_first_class == && total_second_class > 5)
                        }
                        printf("sorry first class is full. Do you want to get ticket for economy class? Y-N");
                }
                if ("N")
                {
                    printf("Next plane leaves in 3 hours");
                    i--;
                }
            }
        }
    }
}
