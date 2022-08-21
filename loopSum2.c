#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number: ");
    scanf("%d",&n);

    int sum = 0;
    for(int j=n ; j>=1; j--){
        sum = sum + j;
        printf("%d\n",j);
    }

    printf("Sum is %d\n", sum);
    return 0;
}