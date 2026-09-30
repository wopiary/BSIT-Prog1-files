#include <stdio.h>

int main()
{
    int month, day, year;
    char zodiac[] = "";
    int jan = 31, feb, mar = 31, apr = 30, may = 31, jun = 30, jul = 31, aug = 31, sep = 30, oct = 31;
    printf("Input month, day, and year: ");
    scanf("%d %d %d", &month, &day, &year);

    switch (month)
    {
    case 1:
        if (day <= 31)
        {
            printf("Date entered: January %d, %d\nJanuary has %d days", day, year, may);
            if (day <= 20)
            {
                printf("\nZodiac sign: Capricorn\n");
            }
            else
            {
                printf("\nZodiac sign: Aquarius\n");
            }
            printf("March %d %d", day, year);
            break;
        }
        else
        {
            printf("Invalid day: %d", day);
            break;
        }
// CASE 2 DONT HAVE ZODIAC SIGNS YET
    case 2:
              if (day < 29)
        {
            printf("February %d, %d", day, year);
            break;
        }
        else if (day == 29)
        {
            if (year % 4 == 0)
            {
                printf("February %d, %d", month, day, year);
                break;
            }
            else
            {
                printf("%d is not a leap year", year);
                break;
            }
              printf("Invalid day: %d", day);
            break;
        }
        else{
        	    printf("Invalid day: %d", day);
            break;
		}

    case 3:
        if (day <= 21)
        {
            printf("Date entered: March %d, %d\nMarch has %d days", day, year, may);
            if (day <= 19)
            {
                printf("\nZodiac sign: Pisces\n");
            }
            else
            {
                printf("\nZodiac sign: Aries\n");
            }
            printf("March %d %d", day, year);
            break;
        }
        else
        {
            printf("Invalid day: %d", day);
            break;
        }

    case 4:
        if (day <= 30)
        {
            printf("Date entered: April %d, %d\nApril has %d days", day, year, may);
            if (day <= 19)
            {
                printf("\nZodiac sign: Aries\n");
            }
            else
            {
                printf("\nZodiac sign: Taurus\n");
            }
            break;
        }
        else
        {
            printf("Invalid day: %d", day);
            break;
        }

    case 5:
        if (day <= 31)
        {
            printf("Date entered: May %d, %d\nMay has %d days", day, year, may);
            if (day <= 21)
            {
                printf("\nZodiac sign: Taurus\n");
            }
            else
            {
                printf("\nZodiac sign: Gemini\n");
            }
            break;
        }
        else
        {
            printf("Invalid day: %d", may);
            break;
        }

    case 6:
        if (day <= 30)
        {
            printf("Date entered: June %d, %d\nJune has %d days", day, year, jun);
            if (day <= 21 || day == 22)
            {
                printf("\nZodiac sign: Gemini\n");
            }
            else
            {
                printf("\nZodiac sign: Cancer\n");
            }
            break;
        }
        else
        {
            printf("Invalid day: %d", jun);
            break;
        }
    case 7:
        if (day <= 31)
        {
            printf("Date entered: July %d, %d\nJuly has %d days", day, year, jul);
            if (day <= 22)
            {
                printf("\nZodiac sign: Cancer\n");
            }
            else
            {
                printf("\nZodiac sign: Leo\n");
            }
            break;
        }
        else
        {
            printf("Invalid day: %d", jul);
            break;
        }

    case 8:
        if (day <= 31)
        {
            printf("Date entered: August %d, %d\nAugust has %d days", day, year, aug);
            if (day <= 22)
            {
                printf("\nZodiac sign: Leo\n");
            }
            else
            {
                printf("\nZodiac sign: Virgo\n");
            }
            break;
        }
        else
        {
            printf("Invalid day: %d", aug);
            break;
        }

    case 9:
        if (day <= 30)
        {
            printf("Date entered: September %d, %d\nSeptember has %d days", day, year, sep);
            if (day <= 22)
            {
                printf("\nZodiac sign: Virgo\n");
            }
            else
            {
                printf("\nZodiac sign: Libra\n");
            }
            break;
        }
        else
        {
            printf("Invalid day: %d", sep);
            break;
        }

    case 10:
        if (day <= 31)
        {
            printf("Date entered: October %d, %d\nOctober has %d days", day, year, oct);
            if (day <= 22 || day == 23)
            {
                printf("\nZodiac sign: Libra\n");
            }
            break;
        }
        else
        {
            printf("Invalid day: %d", oct);
            break;
        }
        //NO NOVEMEBR AND DECEMBER YET
    default:
    {
        if (day > 31)
        {
            printf("Invalid month: %d\nInvalid day: %d", month, day);
            break;
        }
        else
        {
            printf("No month %d", month);
            break;
        }

        return 0;
    }
    }
}
