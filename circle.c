//area of circle
//1. Write a program to calculate area of a circle
#include<stdio.h>
int main()  
{
    float radius, area;
    printf("Enter The value of radius: ");
    scanf("%f",&radius);
    area = 3.1416 * radius * radius;
    printf("Area of circle: %f",area); 
    return 0;
}