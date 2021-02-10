#include <stdio.h>

int main(void)
{
	int currC = 0, prevC = 0;
	
	while((currC = getchar()) != EOF)
	{
		if(currC != ' ')
		{
			putchar(currC);
		}
		if(currC == ' ') 
		{
			if(prevC != ' ') 
			{
				putchar(currC);
			}
		}
		prevC = currC;
	}

    return(0);
}