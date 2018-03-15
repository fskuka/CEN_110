#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int  specialChar(char c);


int main()
{
	
	FILE * infile, * outfile;
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);
	outfile = fopen("output.txt", "w");
	
	int length, lowC = 0, upperC = 0, digit = 0, specCH = 0, other = 0;
	char pass[256];

	fscanf(infile, "%s", pass);


	length = strlen(pass);
	if (length<4 || length>12)
	{
		printf("NO\n");
		return 0;
	}

	for (int i = 0;i<length;i++)
	{
		if (islower(pass[i])) lowC++;
		else if (isupper(pass[i])) upperC++;
		else if (isdigit(pass[i])) digit++;
		else if (specialChar(pass[i])) specCH++;
		else other++;
	}

	if (lowC>0 && upperC>0 && digit>0 && specCH>0 && other == 0)
		fprintf(outfile,"OK\n");
	else
		fprintf(outfile, "NO\n");
	return 0;
}


int  specialChar(char c)
{

	char allowedChars[] = { '!','"','#','$','%','&','\'','(',')','*','+',',','-','.','\0' };

	for (int j = 0; j<strlen(allowedChars); j++)
		if (c == allowedChars[j])
			return 1;
	return 0;
}