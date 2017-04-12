#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *infile;
typedef char stdName[25];

int getIntNum();
void getData(stdName names[], double averages[], const int n);
void showData(stdName names[], double averages[], const int n);
int searchMax(double a[], int n);

int main()
{
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int numStd, grade,maxIndex;
	double averages[100];
	stdName names[100];
	numStd = getIntNum();

	// get student names and averages
	// find the index of the heighes average
	// show the output




	//getchar();
	fclose(infile);
	return 0;
}

int getIntNum()
{
	int num;
	fscanf(infile, "%d", &num);
	return num;
}

void getData(stdName names[], double averages[], const int n)
{
	/*
	In this function you have te read students name and to calculate the average for each student
	*/
	
}


void showData(stdName names[], double averages[], const int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s %lf\n", names[i], averages[i]);
	}
}

int searchMax(double a[], int n)
{
	// your code here
}