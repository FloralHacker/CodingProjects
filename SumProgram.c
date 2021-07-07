#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int sum(int x, int y) {

    return (x+y);  //defining the sum function, what it does
}    

int main() {

    //Declaring variables
    int a, b;
    
    printf("pLs EntR TWo inTegRRrrR:\n");
    scanf("%d%d", &a, &b);  //Lesson learnt here, don't need \n after a scanf line!

    //Calling sum function (a, b);
    printf("Your new number is now %d + %d = %d\n", a, b, sum(a,b));
    getch();
    return 0;
}
