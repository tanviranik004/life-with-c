#include<stdio.h>
int main() {
    int marks;
    printf("Enter Number (0 to 100): ");
    scanf("%d",&marks);  

    if(marks < 30)
    {
        printf("C\n"); 
    }

    else if(marks>=30 && marks < 70 ){
        printf("B\n"); 
    }

    else if(marks>=70 && marks <80){
        printf("A\n");

    }
    else if(marks>=80 && marks <90){
        printf("A+\n"); 
    }
    else {
        printf("Fail");
    }


}