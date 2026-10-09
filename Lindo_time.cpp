#include <stdio.h>
int main()
{
    int mil, min, std;
    char extra;

    printf("Military time: ");
    scanf("%2d", &mil);
    scanf("%2d", &min);
    scanf("%c", &extra);

    if (extra != '\n' || mil < 0 || mil > 23 || min < 0 || min > 59)
    {
        printf("Invalid time");
    }
    else if (mil == 00)
    {

        printf("Standard time: %02d:%02d am", mil + 12, min);
    }

    else if (mil >= 0 && mil <= 11)
    {
        printf("Standard time: %02d:%02d am", mil, min);
    }
    else if (mil == 12)
    {
        printf("Standard time: %02d:%02d pm", mil, min);
    }

    else if (mil >= 13 && mil <= 23)
    {
        printf("Standard time: %02d:%02d pm", mil - 12, min);
    } 	
    return 0;
}
