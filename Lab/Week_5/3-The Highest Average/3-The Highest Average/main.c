#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *infile;
typedef char stdName[25];

int getIntNum();
void getData(stdName names[], stdName surnames[], double averages[], const int n);
void showData(stdName names[], stdName surnames[], double averages[], const int n);
int searchMax(double a[], int n);

int main()
{
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int numStd, maxIndex;
	double averages[100];
	stdName names[100], surnames[100];



	// get the number of students
	// get student names, surnames and averages
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

void getData(stdName names[], stdName surnames[], double averages[], const int n)
{
	/*
	In this function you have te read student name, surname and to calculate the average for each student
	*/
}


void showData(stdName names[], stdName surnames[], double averages[], const int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s %s %lf\n", names[i], surnames[i], averages[i]);
	}
}


int searchMax(double a[], int n)
{
	// your code here
}