#include <stdio.h>
#include <stdlib.h>

FILE *infile;

void getData(int num[], int n);
int sumA2B(int num[], int a, int b);
void printA2B(int num[], int a, int b);
int main()
{
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int n, a, b, sum;
	int num[10002];
	fscanf(infile,"%d%d%d", &n, &a, &b);
	getData(num, n);
	sum = sumA2B(num, a - 1, b - 1);

	printf("%d\n", sum);
	printA2B(num, a - 1, b - 1);
	fclose(infile);
	//getch();
	return 0;
}

void getData(int num[], int n)
{
	int i;
	for (i = 0; i<n; i++)
		fscanf(infile,"%d", &num[i]);
}

int sumA2B(int num[], int a, int b)
{
	if (a == b) return num[a];
	else
		return num[b] + sumA2B(num, a, b - 1);
}

void printA2B(int num[], int a, int b)
{
	if (a == b) printf("%d ", num[a]);
	else
	{
		printA2B(num, a, b - 1);
		printf("%d ", num[b]);
	}
}
