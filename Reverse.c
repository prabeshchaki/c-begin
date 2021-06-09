#include <stdio.h>
#include <limits.h>
#include <math.h>

#define maxException() (printf("Input Number exceeds Max range for Interger type."))

void reverse(int num, int length);

int main()
{
    int n, r = 0, q = n, count = 0;

    printf("Print any number : \n");
    scanf("%d", &n);
    printf("Original Number : %d \n", n);

    if (n > INT_MAX)
    {
        maxException();
        return 1;
    }
    else
    {
        if (n < 10 && n >= 0)
        {
            printf("This is a single digit number.\n");
            printf("Reversed Number --> %d\n", n);
        }
        else
        {
            while (q >= 10)
            {
                q = ((count == 0) ? abs(n) : ((q - r) / 10));
                r = q % 10;
                count++;
            }

            printf("This is a %d digit Number. \n", count);

            reverse(n, count);
        }
    }

    return 0;
}

void reverse(int num, int length)
{
    int q, r, sum = 0;

    for (int i = length, j = 0; i >= 1; i--, j++)
    {
        q = (i == length) ? abs(num) : (q % (int)pow(10, i));
        r = q / (int)pow(10, i - 1);
        sum += r * (int)pow(10, j);
    }
    printf("Reversed Number %d ", (num < 0) ? (-1) * sum : sum);
}