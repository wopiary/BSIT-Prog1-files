#include <stdio.h>

int main()
{
    int month, day, year;

    int jan = 31, febleap = 29, feb = 28, mar = 31, apr = 30, may = 31, jun = 30, jul = 31, aug = 31, sep = 30, oct = 31, nov = 30, dec = 31;
    printf("Input month, day, and year: ");
    scanf("%d %d %d", &month, &day, &year);

    switch (month)
    {
    case 1:
        if (day >= 1 && day <= 31)
        {
            printf("Date entered: January %d, %d\nJanuary has %d days", day, year, jan);
            if (day <= 19)
            {
                printf("\nZodiac sign: Capricorn\n");
            }
            else
            {
                printf("\nZodiac sign: Aquarius\n");
            }
            printf("January %d %d", day, year);
            break;
        }
        else
        {
            printf("Invalid day: %d", day);
            break;
        }
        // CASE 2 DONT HAVE ZODIAC SIGNS YET
    case 2:
        if (day >= 1 && day < 29)
        {
            printf("Date entered: February %d, %d\nJanuary has %d days", day, year, feb);
            if (day <= 18)
            {
                printf("\nZodiac sign: Aquarius\n");
            }
            else
            {
                printf("\nZodiac sign: Pisces\n");
            }
            printf("February %d, %d", day, year);

            break;
        }
        else
        {
            if (day == 29)
            {
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                {
                    if (day <= 18)
                    {
                        printf("\nZodiac sign: Aquarius\n");
                    }
                    else
                    {
                        printf("\nZodiac sign: Pisces\n");
                    }
                    printf("February %d, %d", month, day, year);
                    break;
                }
                else
                {
                    printf("%d is not a leap year", year);
                    break;
                }
            }
            else
            {
                printf("Invalid day: %d", day);
                break;
            }
        }

    case 3:
        if (day >= 1 && day <= 31)
        {
            printf("Date entered: March %d, %d\nMarch has %d days", day, year, mar);
            if (day <= 20)
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
        if (day >= 1 && day <= 30)
        {
            printf("Date entered: April %d, %d\nApril has %d days", day, year, apr);
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
        if (day >= 1 && day <= 31)
        {
            printf("Date entered: May %d, %d\nMay has %d days", day, year, may);
            if (day <= 20)
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
            printf("Invalid day: %d", day);
            break;
        }

    case 6:
        if (day >= 1 && day <= 30)
        {
            printf("Date entered: June %d, %d\nJune has %d days", day, year, jun);
            if (day <= 20)
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
            printf("Invalid day: %d", day);
            break;
        }
    case 7:
        if (day >= 1 && day <= 31)
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
            printf("Invalid day: %d", day);
            break;
        }

    case 8:
        if (day >= 1 && day <= 31)
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
            printf("Invalid day: %d", day);
            break;
        }

    case 9:
        if (day >= 1 && day <= 30)
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
            printf("Invalid day: %d", day);
            break;
        }

    case 10:
        if (day >= 1 && day <= 31)
        {
            printf("Date entered: October %d, %d\nOctober has %d days", day, year, oct);
            if (day <= 22)
            {
                printf("\nZodiac sign: Libra\n");
            }
            else
            {
                printf("\nZodiac sign: Scorpio\n");
            }
            break;
        }
        else
        {
            printf("Invalid day: %d", day);
            break;
        }
        // NO NOVEMEBR AND DECEMBER YET
    case 11:
        if (day >= 1 && day <= 30)
        {
            printf("Date entered: September %d, %d\nSeptember has %d days", day, year, nov);
            if (day <= 21)
            {
                printf("\nZodiac sign: Scorpio\n");
            }
            else
            {
                printf("\nZodiac sign: Sagittarius\n");
            }
            break;
        }
        else
        {
            printf("Invalid day: %d", day);
            break;
        }
    case 12:
        if (day >= 1 && day <= 31)
        {
            printf("Date entered: December %d, %d\nDecember has %d days", day, year, dec);
            if (day <= 21)
            {
                printf("\nZodiac sign: Sagittarius\n");
            }
            else
            {
                printf("\nZodiac sign: Capricorn\n");
            }
            break;
        }
        else
        {
            printf("Invalid day: %d", day);
            break;
        }

    default:
    {
        if (day > 31)
        {
            printf("Invalid month: %d\nInvalid day: %d", month, day);
            break;
        }
        else
        {
            printf("In valid date: No month %d", month);
            break;
        }

        return 0;
    }
    }
}
