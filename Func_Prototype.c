// Function Prototype example to add 2 numbers

#include <stdio.h>
#define addNumbers(a, b) (a + b)

// int addNumbers(int,int);

void main()
{
    int a, b;
    
    printf("%f", addNumbers(14.06, 22E-1));

    printf("Enter 2 Numbers - \n");
    scanf("%d%d", &a, &b);
    printf("The sum of %d and %d is %d", a, b, addNumbers(a, b));

    // Add Array using a predefined function prototype
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {

        sum = addNumbers(sum, arr[i]);
        if (i == 4)
            printf("the sum is %d", sum);
    }
    
}