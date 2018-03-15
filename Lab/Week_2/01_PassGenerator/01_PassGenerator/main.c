#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char getNChar(const char str[], int n);
int getNDigit(int num, int n);
char int2char(int i);

int main()
{
	FILE *infile, *outfile;
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);
	outfile = fopen("output.txt", "w");

	int i, nrStd, nameLng, surnameLng, last2Digits;
	int dd, mm, yyyy;
	char name[25], surname[25], password[10] ;

	fscanf(infile, "%d", &nrStd);


	for (i = 0; i<nrStd; i++)
	{
		fscanf(infile, "%s%s%d%d%d", name, surname, &dd, &mm, &yyyy);

		char c;

		//1. char of pass.
		c = getNChar(name, 2);
		if (isupper(c))
			c = tolower(c);
		password[0] = c;

		//2. char of pass.
		nameLng = strlen(name);
		password[1] = int2char(strlen(name));

		//3. char of pass.
		c = getNChar(surname, 2);
		if (islower(c))
			c = toupper(c);
		password[2] = c;

		//4. char of pass.
		surnameLng = strlen(surname);
		password[3] = int2char(strlen(surname));

		//5. char of pass.
		password[4] = '_';

		//6. char of pass.
		password[5] = int2char(getNDigit(yyyy, 2));
		//6. char of pass.
		password[6] = int2char(getNDigit(yyyy, 1));
		password[7] = '\0';

		fprintf(outfile, "%s %s %d %d %d %s\n", name, surname, dd, mm, yyyy, password);
	}



	return 0;
}


char getNChar(const char str[], int n)
{
	return str[n - 1];
}

char int2char(int i)
{
	char digits[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	return digits[i];
}


int getNDigit(int num, int n)
{
	int i, digit;
	for (i = 1; i <= n && num != 0; i++)
	{
		digit = num % 10;
		num /= 10;
	}
	return digit;
}
