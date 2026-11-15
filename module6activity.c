// Square of a number
#include <stdio.h>
void myFunction()
{
    int userNum;
    int sq;
    scanf("%d", &userNum);
    sq = userNum * userNum;
    printf("%d", sq);
}
int main()
{
    myFunction();
    return 0;
}

// Vowel or consonant
#include <stdio.h>
void myFunction(char uChar);
int main()
{
    char userChar;
    int length1, counter1;

    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    length1 = sizeof(vowels) / sizeof(vowels[0]);
    scanf("%c", &userChar);
    myFunction(userChar);
    return 0;
}

void myFunction(char uChar)
{
    if (uChar == 'a' || uChar == 'e' || uChar == 'i' || uChar == 'o' || uChar == 'u' || uChar == 'A' || uChar == 'E' || uChar == 'I' || uChar == 'O' || uChar == 'U')
    {
        printf("%c is a vowel", uChar);
    }
    else if (((uChar >= 'a' && uChar <= 'z') || (uChar >= 'A' && uChar <= 'Z')) &&
             !(uChar == 'a' || uChar == 'e' || uChar == 'i' || uChar == 'o' || uChar == 'u' ||
               uChar == 'A' || uChar == 'E' || uChar == 'I' || uChar == 'O' || uChar == 'U'))
    {
        printf("%c is a consontat", uChar);
    }
    else
    {
        printf("%c is not a vowel or a consonant", uChar);
    }
}

// Cel to Far
#include <stdio.h>
void temp(int uTemp);
int main()
{
    int userTemp;
    scanf("%d", &userTemp);
    temp(userTemp);
    return 0;
}
void temp(int uTemp)
{

    uTemp = (uTemp * 1.8) + 32;
    printf("%d", uTemp);
}

// 1 to N sum
#include <stdio.h>
void sum(int uNum);
int main()
{
    int userNum;
    scanf("%d", &userNum);
    sum(userNum);
    return 0;
}

void sum(int uNum)
{
    int totSum;
    for (int counter = 0; counter <= uNum; counter++)
    {
        totSum += counter;
    }
    printf("%d", totSum);
}

// Grade
#include <stdio.h>
void gradeverdict(float uGrade1, float uGrade2, float uGrade3);
int main()
{
    float userGrade1, userGrade2, userGrade3;
    scanf("%f", &userGrade1);
    scanf("%f", &userGrade2);
    scanf("%f", &userGrade3);
    gradeverdict(userGrade2, userGrade2, userGrade3);
    return 0;
}
void gradeverdict(float uGrade1, float uGrade2, float uGrade3)
{
    if ((uGrade1 >= 1.00 && uGrade1 <= 5.00) && (uGrade2 >= 1.00 && uGrade2 <= 5.00) && (uGrade3 >= 1.00 && uGrade3 <= 5.00))
    {
        printf("Your average is %.1f", (uGrade1 + uGrade2 + uGrade3) / 3);
    }
    else
    {
        printf("Invalid input");
    }
}
