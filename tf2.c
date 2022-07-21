//if it's monday or it's raining ->true
#include<stdio.h>
int main()
{
    // int isMonday =0;
    // int isRaining=1;
    // printf("%d\n", isMonday|| isRaining);
    // return 0;
    int isMonday,isRaining;
    printf("Enter is Monday Yes Or No digit: ");
    scanf("%d/n",&isMonday);
    printf("Enter isRaining Yes or No digit: ");
    scanf("%d",&isRaining);
    if (isMonday || isRaining)
    {
        printf("We are together");
    }
    else{
        printf("We are not together");
    }

    return 0;
    

}