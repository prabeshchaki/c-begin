#include <stdio.h>
#include <string.h>

typedef struct Person
{
    char name[5];
    int age;
} person;

int main()
{

    printf("Size of int is %d\n", sizeof(int));
    printf("Size of long is %d\n", sizeof(long));
    printf("Size of long int is %d\n", sizeof(long int));
    printf("Size of long long is %d\n", sizeof(long long));
    printf("Size of float is %d\n", sizeof(float));
    printf("Size of double is %d\n", sizeof(double));
    printf("Size of char is %d\n", sizeof(char));
    printf("FILE --> %s\n", __FILE__);
    printf("TIME --> %s\n", __TIME__);

    person p1, *p2;
    
    strcpy(p1.name,"Adam");
    p1.age = 10;
    p2 = &p1;
    printf("Person Age using Pointer --> %d\n", p2->age);
    printf("Person Name using Pointer --> %s\n", p2->name);
}