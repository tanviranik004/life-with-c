#include<stdio.h>
int main() {
    int age ;
    printf("Enter The Age: ");
    scanf("%d", &age);
    if (age >=18)
    {
        printf("Adult");
    }
    else if (age > 13 && age < 18){
        printf("teenager\n");
    }
   
    else{
        printf("child");
    }
    return 0;
    
}