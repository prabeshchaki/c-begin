#include <stdio.h>
int main()
{
    short int num, temp_0, temp_1, out;
    
    printf("Welcome to Fibonacci Generator\n");
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        if (i == 0 || i == 1)
        {
            temp_0 = 0;
            temp_1 = 1;
        }
        out = temp_0 + temp_1;
        
        if (i==num-1)
            printf("%d ", out);

        temp_0 = temp_1;
        temp_1 = out;
        
    }
    return 0;
}