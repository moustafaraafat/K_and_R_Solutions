#include <stdio.h>

int main(void)
{
    
    printf("Hello,\q World!\n");  //Function Call to printf from stdio.h
    //NOTE(Raafat): When we use \q, we get a warning if it's, an
    // unrecognized character escape sequence,but it prints the q anyway
    //However, this is an undefined behavior, as it's compiler dependent.
    
    return(0);
}
