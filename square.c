//area of square
//1. Write a program to calculate area of a square

#include<stdio.h>
int main() 
{
    float length, area;
    printf("Enter the value of length: ");
    scanf("%f",&length);
    area = length * length ;
    printf("Area of Rectangle : %f", area);
    return 0;

}