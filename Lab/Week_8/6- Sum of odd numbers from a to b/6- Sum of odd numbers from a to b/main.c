#include <stdio.h>
#include <stdlib.h>

FILE *infile;

int sumA2B(int a, int b);
int main()
{
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int a, b;
	fscanf(infile,"%d%d", &a, &b);
	if (a % 2 == 0) a++;
	printf("%d", sumA2B(a, b));
	getchar();
	fclose(infile);
	return 0;
}

int sumA2B(int a, int b)
{
	if (a>b) return 0;
	else
		return a + sumA2B(a + 2, b);
}
