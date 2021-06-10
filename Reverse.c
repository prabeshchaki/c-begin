#include <stdio.h>
#include <limits.h>
#include <math.h>

#define maxException() (printf("Input Number exceeds Max range for Interger type."))

int reverse(int num, int n_digits);

int main()
{
    int n, r = 0, q, count = 0, reversedNum;

    printf("Input any number : \n");
    scanf("%d", &n);
    printf(".. Original Number : %d \n", n);

    // Bug Fix
    q = n;

    // TODO
    // Handle the scenario if input number is greater than INT_MAX size !!
    // print message - maxException()
    // return

    if (n < 10 && n >= 0)   
    {
        printf(".. .. This is a single digit number.\n");
        printf(".. .. Reversed Number --> %d\n", n);
    }
    else
    {
        
        while (abs(q) >= 10)
        {
            q = ((count == 0) ? abs(n) : ((q - r) / 10));
            r = q % 10;
            count++;
        }

        printf(".. .. This is a %d digit Number. \n", count);
        reversedNum = reverse(n, count);
        printf(".. .. ..  The Reversed Number is : %d", reversedNum);
    }

    return 0;
}

int reverse(int num, int n_digits)
{
    int q, r, sum = 0;

    for (int i = n_digits, j = 0; i >= 1; i--, j++)
    {
        q = (i == n_digits) ? abs(num) : (q % (int)pow(10, i));
        r = q / (int)pow(10, i - 1);
        sum += r * (int)pow(10, j);
    }

    return (num < 0) ? (-1) * sum : sum;
}