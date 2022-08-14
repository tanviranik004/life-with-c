#include<stdio.h>
#include<math.h>
int main()
{
    int T,X;
    scanf("%d", &T);
 
    for ( int i = 1; i < T; T+i)
    {
          scanf("%d",&X);
           if(X <=60 && X>=0){
            int x1=60-X;
            int First_X=x1+40+60;
            printf("First_X:%d",First_X);
           }
        
    }
    
}