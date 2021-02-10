#include <stdio.h>

int main(void)
{
    int c;
    
    while((c = getchar()) != EOF)// while that == 1 we'll be inside while
    {
        printf("Inside while\n"); // print same char
    }
    //if we got out of while, this means the expression became == 0
    printf("Out of while\n");
    
    return(0);
}
