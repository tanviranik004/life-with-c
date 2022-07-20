//a.Write a program to check if a number is odd or even.

#include<stdio.h>
int main() {
    int x, divisible;
    printf("Enter The value of X: ");
    scanf("%d", &x);
    if(x%2==0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }
    return 0;
    
}