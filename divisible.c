//a.Write a program to check if a number is divisible by 2 or not.

#include <stdio.h>
int main() {

    int x, divisible;
    printf("Enter The the number of X:");
    scanf("%d", &x);

    divisible = x%2 == 0;
    printf("The value is : %d", divisible);
}