//Print 1 (true) or 0(false) for following statements:
/*

a.if it's sunday & it's snowing ->true
b.if it's monday or it's raining ->true
c.if a number is greater than 9 & less then 100 ->true
(2 digit number)

*/

#include <stdio.h>
int main()
{
    int isSunday ,isSnowing;
    
    printf("Enter isSunday: ");
    scanf("%d/n", &isSunday);
    printf("Enter isSnowing: ");
    scanf("%d", &isSnowing);
    if(isSunday&&isSnowing==1){
        printf("That is true.");
    }
    else{
        printf("That is false.");
    }
    return 0;

}