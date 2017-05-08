#include <stdio.h>
#include <stdlib.h>

FILE *infile;

void getData(int num[]);
int Min(int a, int b);
int fMin(int num[], int n);

int main()
{
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int num[12], min;
	getData(num);
	min = fMin(num, 9);
	printf("%d", min);

	fclose(infile);
	//getch();
	return 0;
}

void getData(int num[])
{

	int i;
	for (i = 0; i<10; i++)
		fscanf(infile,"%d", &num[i]);
}

int Min(int a, int b)
{
	return a<b ? a : b;
}

int fMin(int num[], int n)
{
	if (n == 0) return num[0];
	return min(num[n], fMin(num, n - 1));
}