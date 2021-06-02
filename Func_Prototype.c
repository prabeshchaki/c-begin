// Function Prototype example to add 2 numbers
 
#include <stdio.h>

int addNumbers(int,int);

void main(){
    int a, b;
    printf("Enter 2 Numbers - \n");
    scanf("%d%d", &a, &b);
    printf("The sum of %d and %d is %d", a, b, addNumbers(a,b));
}

int addNumbers(int a, int b){
    return a + b;
}