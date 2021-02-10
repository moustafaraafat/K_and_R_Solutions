#include <stdio.h>

int main(void)
{
    float fahr, celsuis;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    //here, we print the heading
    printf("Fahrenheit \t Celsuis\n");
    fahr = lower;
    while(fahr <= upper)
    {
        celsuis = (5.0/9.0) * (fahr - 32);
        printf("%3.0f \t\t %6.1f\n", fahr, celsuis);

        fahr += step;
    }
    
   
    return(0);
}
