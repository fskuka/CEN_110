#include <stdio.h>
#include <stdlib.h>

FILE *infile;

int getIntNum();
void getData(int arr[], const int n);
void selSort(int  arr[], int n);

int main()
{


	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);


	// Variable declaration
	// get the number of elements
	// read all elements
	// sort the array
	// find lardest product and show it


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

void getData(int arr[], const int n)
{
	/*Your code here*/
}


void selSort(int  arr[], int n)
{
	int i, j, temp;
	for (i = 0; i<n - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j]<arr[min])
				min = j;
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}