#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
int genRan(int &ran);
int uGuess(int guess, int x);
int guessProgress(int daguess, int thought);
int main()
{
    int userChoice;
    int chances = 3;
    int counter = 0;
    printf("------------------------------------\n===========Guessing Goose===========\n------------------------------------\n\nGuess the number the computer is thinking in 3 \ntries and 2 hints. Up for the challenge?");
    // printf("\n\t   [1] Start\n\t   [0] Exit\n");
    // scanf("%d", &userChoice); // play or not
    do
    {

        int randomNum = 0;
        printf("\n\t   [1] Start\n\t   [0] Exit\n");
        scanf("\t\t\t%d", &userChoice); // play or not
        switch (userChoice)
        {
        case 1:

            system("cls");
            int c;

            int userGuess;
            printf("Goose is thinking...\n");

            printf("Thought done. Guess in 3 tries before the goose \nruns away. What is the number in the goose's head?\n");
            c = genRan(randomNum);
            printf("%d\n", c); // the generated random number from function below
            for (counter = 0; counter < chances; counter++)
            {
                scanf("\n%d", &userGuess);
                uGuess(userGuess, c);
                int result = uGuess(userGuess, c);
                if (result == 1)
                {
                    printf("You have successfully read the goose's mind!");
                    counter += 5;
                }
                else
                {
                    guessProgress(userGuess, randomNum);
                    int verdict = guessProgress(userGuess, randomNum);
                    switch (verdict)
                    {
                    case 1:
                        printf("Guess is too big, run it back\n");
                        break;
                    case 2:
                        printf("Guess is too small, run it back\n");
                        break;
                    }
                }
                // switch (result)
                // {
                // case 1:
                //     printf("\nYou have successfully read the goose's mind.");
                //     counter += 5;
                //     break;

                // default:
                //     printf("\nYou have %d chance(s) left\n", chances -= 1);
                //     counter--;
                //     break;
                // }
            }
            system("cls");
            break;
        case 0:
            break;
        default:
            printf("\nInvalid option try again.");
            break;
        }

    } while (userChoice != 0);

    return 0;
}
int genRan(int &ran)
{

    srand(time(NULL));
    int min = 1, max = 100;
    ran = rand() % (max - min + 1) + min;
    return ran;
}
int uGuess(int guess, int x)
{

    if (guess == x)
    {
        return 1;
        exit;
    }
    else
    {
        return 0;
    }
}
int guessProgress(int daguess, int thought)
{
    if (daguess > thought)
    {
        return 1;
        exit;
    }
    else
    {
        return 2;
    }
}
