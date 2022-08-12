#include<stdio.h>
int main(){
    int number = 0;
    printf("Enter Number: ");
    scanf("%d",&number);
    if (number>=0)
    {
        printf("Positive\n");  
    if(number %2 ==0){
        printf("and the number is Even\n"); 

    }
        else{
            printf("and the number is Odd\n");
        }
    }
    else{
        printf("Negative\n");

    }
    


}