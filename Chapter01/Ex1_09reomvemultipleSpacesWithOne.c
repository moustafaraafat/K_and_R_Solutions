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
	
	/*
	Keep receiving till EOF, 
	print c
	if c == ' '
	keep eating up spaces, till you hit a different character.
	*/

    return(0);
}