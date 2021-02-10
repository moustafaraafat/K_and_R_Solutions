#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    //here, we print the heading
    printf("Celsius \t Fahrenheit\n");
    celsius = lower;
    while(celsius <= upper)
    {
        fahr = ((9.0/5.0) * celsius) + 32;
        printf("%3.0f \t\t %6.1f\n", celsius, fahr);

        celsius += step;
    }    
   
    return(0);
}
