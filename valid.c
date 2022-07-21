//Are the following Valid or not ?
/*  
a.int a=8^8

b.int x; int y = x;

c. int x,y=x;

d.char stars = '**';

*/

#include <stdio.h>
int main() {

   // printf("%d",8^8); //valid statement

  // int x; int y=x; //valid

   //int x, y=x; invalid

   // char stars = '**';//invalid
   char stars = '*';
    printf("%c", stars);

    return 0;

}