#include<stdio.h> 
int main() {
    int marks;
    printf("Enter Number (0 t0 100): ");
    scanf("%d",&marks);
    if (marks>30 && marks <= 100)
    {
        printf("Pass");
    }
    else if(marks>=0 && marks<=30)
    {
        printf("Fail");
    }
    else{
        printf("Wrong Number");
    }
    return 0;
}