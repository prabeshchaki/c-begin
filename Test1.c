#include <stdio.h>

int main(){
    
    int a = 5, b;
    
    b = a++;
    printf("a ---> %d\n", a );
    printf("b ---> %d\n", b );

    b = ++a;
    printf("a ---> %d\n", a );
    printf("b ---> %d\n", b );

    return 0;

}