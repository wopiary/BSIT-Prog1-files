#include <stdio.h>
int main()
{

    int letternum, counter = 1, test = 1;
    char letter = 'A', choice;

    do
    {

        printf("Input an integer: ");
        scanf(" %d", &letternum);

        if (letternum >= 1 && letternum <= 26)
        {
            printf("Letters: ");
            letter = 'A';
            for (counter = 0; counter < letternum; counter++)
            {
                printf("%c ", letter++);
            }
        }
        else
        {
            printf("Invalid number");
        }

        do
        {
            printf("\nContinue <y/n>: ");
            scanf(" %c", &choice);

            if (choice == 'n' || choice == 'N')
            {
                printf("Exit\n");
            }
            else if (choice != 'y' && choice != 'Y')
            {
                printf("Invalid character\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
    } while (choice == 'y' || choice == 'Y');

    return 0;
}