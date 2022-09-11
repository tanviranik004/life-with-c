//practice Qs 28 
//write a function that prints AssalamuAlikum if user is Muslims & Namaste if user is indian.

#include <stdio.h>

void muslim();
void hindu();

int main() {
printf(" Enter M for muslim and H for hindu: ");
    char ch;
    scanf("%c", &ch);
    if(ch=='m'){
        muslim();
    }
    else{
        hindu();
    }
    return 0;
}

void muslim() {
    printf("AssalamuAlikum\n");
}
void hindu() {
    printf("Namaste\n");
}