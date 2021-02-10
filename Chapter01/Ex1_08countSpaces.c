#include <stdio.h>

int main(void)
{
    int numberOfBlanks = 0;
	int numberOfTabs = 0;
	int numberOfNewLines = 0;
	int c = 0;
	
	while((c = getchar()) != EOF)
	{
		if(c == ' ') {++numberOfBlanks;}
		if(c == '\t') {++numberOfTabs;}
		if(c == '\n') {++numberOfNewLines;}
	}
	
	printf("\nBlanks = %d, Tabs = %d, NewLines = %d\n", 
			numberOfBlanks, numberOfTabs, numberOfNewLines);

    return(0);
}