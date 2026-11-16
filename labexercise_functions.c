#include <stdio.h>
int sq(int squared);
float temp(float uTemp);
char vowel(char uChar);
int sum(int uNum);
int main()
{
    int userChoice;
    printf("====FUNCTIONS MENU====\n[1] Square of a Number\n[2] Vowel or Consonant\n[3] Celsius to Farenheit\n[4] Sum of 1 to n\n[0] Exit\n");

    do
    {
        printf("Enter choice: ");
        scanf("%d", &userChoice);
        switch (userChoice)
        {
        case 1:
            int userNum;
            printf("Enter a number: ");

            if (scanf("%d", &userNum) == 1)
            {
                sq(userNum);
                int ans = sq(userNum);
                printf("The square of %d is %d.\n\n", userNum, ans);
            }
            else
            {
                printf("Invalid input. Not a number.\n\n");
                while (getchar() != '\n')
                    ;
            }
            break;
        case 2:
            char userChar;
            printf("Enter a character: ");
            scanf(" %c", &userChar);
            vowel(userChar);
            char result = vowel(userChar);
            if (result == 'v')
            {
                printf("'%c' is a Vowel.\n\n", userChar);
            }
            else if (result == 'c')
            {
                printf("'%c' is a Consonant.\n\n", userChar);
            }
            else
            {
                printf("Invalid input. Not a letter.\n\n");
            }
            break;

        case 3:
            float userTemp;
            printf("Enter temperature in Celsius: ");

            if (scanf("%f", &userTemp) == 1)
            {
                float t = temp(userTemp);
                printf("%.2f C = %.2f F\n\n", userTemp, t);
            }
            else
            {
                printf("Invalid input.\n\n");
                while (getchar() != '\n')
                    ;
            }
            break;
        case 4:

            int userN;

            do

            {
                printf("Enter n: ");

                if (scanf("%d", &userN) == 1)
                {
                    if (userN > 0)
                    {
                        int tot = sum(userN);
                        printf("The sum of numbers from 1 to %d is %d.\n\n", userN, tot);
                        break;
                    }
                    else
                    {
                        printf("n must be 1 or greater. Try again.\n");
                    }
                }

                else
                {
                    printf("Invalid input. Please enter a valid integer.\n\n");
                    while (getchar() != '\n')
                        ;
                }
            } while (userN != 0);

        default:
            break;
        }
    } while (userChoice != 0);
    printf("Program ended. Goodbye!");
    return 0;
}
int sq(int squared)
{
    squared *= squared;
    return squared;
}

char vowel(char uChar)
{
    if (uChar == 'a' || uChar == 'e' || uChar == 'i' || uChar == 'o' || uChar == 'u' || uChar == 'A' || uChar == 'E' || uChar == 'I' || uChar == 'O' || uChar == 'U')
    {

        return 'v';
    }
    else if (((uChar >= 'a' && uChar <= 'z') || (uChar >= 'A' && uChar <= 'Z')) &&
             !(uChar == 'a' || uChar == 'e' || uChar == 'i' || uChar == 'o' || uChar == 'u' ||
               uChar == 'A' || uChar == 'E' || uChar == 'I' || uChar == 'O' || uChar == 'U'))
    {
        return 'c';
    }
    else
    {
        return 'n', uChar;
    }
}
float temp(float uTemp)
{

    if (uTemp >= 0 || uTemp < 0)
    {
        uTemp = (uTemp * 1.8) + 32;
    }
    return uTemp;
}

int sum(int uNum)
{
    int totSum = 0;
    for (int counter = 1; counter <= uNum; counter++)
    {
        totSum += counter;
    }
    return totSum;
}
