#include <stdio.h>

int sum(int, int); //function prototype

int main() 
{
    int a, b;

    printf("pLs EntR TWo inTegRRrrR:\n");
    scanf("%d%d", &a, &b);  //Lesson learnt here, don't need \n after a scanf line!

    //calling sum function (a, b);
    printf("%d + %d = %d\n", a, b, sum(a,b));
    return 0;
}

int sum(int x, int y) {

    return(x+y); //defining the function
}
