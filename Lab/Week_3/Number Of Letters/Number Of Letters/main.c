#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int lowCh = 0, uppCh = 0,i=0;
	char ch, text[251];

	FILE *infile;
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);
	do
	{
		ch = getc(infile);
		text[i] = ch;
		if (islower(ch)) lowCh++;
		if (isupper(ch)) uppCh++;
		++i;
	} while (ch != EOF);

	printf("%d %d", uppCh, lowCh);
	fclose(infile);
	return 0;
}

