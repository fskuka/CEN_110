#include <stdio.h>
#include <stdlib.h>
int fibonaci(int n);
FILE *infile;

int main()
{
	
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1); 
	int n;
	fscanf(infile,"%d", &n);
	printf("%d", fibonaci(n));
	//getchar();

	fclose(infile);
	return 0;
}

int fibonaci(int n)
{
	if
		(n == 0 || n == 1) return 1;
	else
		return fibonaci(n - 1) + fibonaci(n - 2);
}
