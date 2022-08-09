#include<stdio.h>
int main() {
    int age ;
    printf("Enter th age: ");
    scanf("%d",&age);
    if (age>18)
    {
        printf("Adult\n");
        printf("He or she  can drive\n");
        printf("He or She can voted");
    }
    else{
        printf("Not Adult");
    }
    
    return 0; 

}