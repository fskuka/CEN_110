#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *infile;
typedef char stdName[25];

int getIntNum();
void getData(stdName names[], double averages[], const int n);
void showData(stdName names[], double averages[], const int n);
void selSort(stdName names[], double  arr[], int n);

int main()
{
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int numStd, grade;
	double averages[100], hAverage;
	stdName names[100], hName;
	numStd = getIntNum();
	getData(names, averages, numStd);
	//showData(names, averages, numStd);
	//printf("\n\n");
	selSort(names, averages, numStd);
	//showData(names, averages, numStd);

	strcpy(hName, names[numStd - 1]);
	hAverage = averages[numStd - 1];

	printf("%s %.3lf", hName, hAverage);

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
	int i;
	int grade, numGrades,sum=0;
	double avg;

	for (i = 0; i < n; i++)
	{
		fscanf(infile, "%s", names[i]);
		numGrades = 0;
		sum = 0;
		do
		{
			grade = getIntNum();
			if (grade != -999)
			{
				sum += grade;
				numGrades++;
			}
		} while (grade != -999);
		avg = (double)sum / numGrades;
		averages[i] = avg;
	}
}


void showData(stdName names[], double averages[], const int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s %lf\n", names[i], averages[i]);
	}
}


void selSort(stdName names[], double  arr[], int n)
{
	int i, j;
	double  temp;
	char tempName[25];

	for (i = 0; i<n - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j]<arr[min])
				min = j;
		}

		//swap (a[min],a[i]);
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;

		//swap(names[min],names[i])
		strcpy(tempName, names[min]);
		strcpy(names[min], names[i]);
		strcpy(names[i], tempName);
	}
}