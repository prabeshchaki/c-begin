// Array and Pointers Basics

#include <stdio.h>

int main(){

    int arr[5] = {1,2,3,4,5};

    for ( int i = 0; i < 5 ; ++i){

        printf("The value arr[%d] is %d & address is %p \n" , i , *(arr + i), (arr + i));

    }

}