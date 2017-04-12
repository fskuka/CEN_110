#include <stdio.h>
#include <stdlib.h>

FILE *infile;

int getIntNum();
void getData(parameter list);
void showData(parameter list);
void selSort(int  arr[], int n);

int main()
{
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);
	


	//Declare Variables
	//Read Number of elements
	//Read all elements
	// Sort the array
	// Show sorted array

	fclose(infile);
	return 0;
}

int getIntNum()
{
	int num;
	fscanf(infile,"%d", &num);
	return num;
}

void getData( parameter list)
{
	// write your code here
}


void showData(parameter list)
{
	// write your code here
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