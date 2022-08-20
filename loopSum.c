#include<stdio.h>
int main() {
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);

    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i; //sum+=i;

    }
    printf("%d\n", sum);
    return 0;
}