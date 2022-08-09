//if a number is greater than 9 & less then 100 ->true(2 digit number)

#include <stdio.h>
int main()
{
    int number;
    printf("Enter The Value of number: ");
     scanf("%d",&number);
    // if (number > 9 && number < 100)
    // {
    //     /* code */
    //     printf("True");
    // }
    // else{
    //     printf("False");
    // }
    printf("%d\n",number >9 && number <100);
    
}