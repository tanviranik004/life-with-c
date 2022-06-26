//area of Rectangle
//1. Write a program to calculate area of a Rectangle

#include<stdio.h>
int main()
{
  int length,width, area;
  printf("Enter the value of length : ");
  scanf("%d",&length);
  printf("Enter the value of width : ");
  scanf("%d",&width);
  area = length * width ;
  printf("The value of area : %d",area);
}