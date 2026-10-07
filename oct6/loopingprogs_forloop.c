#include <stdio.h>
int main()
{
    int n, m;
    printf("Input n & m: ");

    if (scanf("%d%d", &n, &m) != 2)
    {
        printf("Enter a valid integer");
        return 1;
    }
    if (n < m)
    {

        for (n; n <= m; n++)
        {
            printf("%d ", n);
        }
    }
    else
    {
        for (n; n >= m; n--)
        {
            printf("%d ", n);
        }
    }

    return 0;
}
