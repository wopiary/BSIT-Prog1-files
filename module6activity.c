#include <stdio.h>
void myFunc()
{
    // int userNum, square;
    // scanf("%d", &userNum);
    // square = userNum * userNum;
    // printf("%d", square);

    // char userChar;
    // scanf("%c", userChar);
    // if (userChar == 'a' || userChar == 'e' || userChar == 'i' || userChar == 'o' || userChar == 'u')
    // {
    //     printf("consonant");
    // }
    // else
    // {
    //     printf("vowel");
    // }

    // int userTemp, convert;
    // scanf("%d", &userTemp);
    // convert = (userTemp * 9 / 5) + 32;
    // printf("%d", convert);

    // int userNum, sum = 0, counter;
    // scanf("%d", &userNum);
    // for (counter = 0; counter <= userNum; counter++)
    // {
    //     sum += counter;
    // }
    // printf("%d", sum);

    float grade1, grade2, grade3, ave;
    scanf("%f", &grade1);
    scanf("%f", &grade2);
    scanf("%f", &grade3);
    if (grade1 >= 1.0 && grade1 <= 5.0 && grade2 >= 1.0 && grade2 <= 5.0 && grade3 >= 1.0 && grade3 <= 5.0)
    {
        ave = (grade1 + grade2 + grade3) / 3;
        printf("the average is %.1f", ave);
    }
}
int main()
{
    myFunc();

    return 0;
}