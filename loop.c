#include<stdio.h>
int main() {

    // for(int i=1;i<=10; i++)  {
    //     printf("%d\n",i);
    // }
    // for(int i=10;i>=1; i--)  {
    //     printf("%d\n",i);
    // }
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);
    // for (int i = 1 ; i<=10; i++)
    // {
    //     printf("%d\n", n*i);

    // }
    int i=1;
//     while (i<=10)
//     {
//         printf("%d\n",n*i);
//         i++;
//     }
    do{
        printf("%d\n",n*i);
        i++;
    }while (i<=10);
    


   return 0;

}


