#include <stdio.h>
#include <stdlib.h>

FILE *infile;

int getIntNum();
void selSort(int  arr[], int n);
int calStairs(int lst[], int n);

int main()
{
	infile = fopen("input.txt", "r");
	if (infile == NULL)
		exit(1);

	int num, cnt, numStairs, totNumStairs=0;
	int lst[200];
	
	while (1)
	{
		cnt = 0;
		num = getIntNum();
		if (num < 0) break;
		// read the first number and check if it is greater than 0

		do
		{
			// And the number to the array
			// increment the index of elements
			// read next number
\
		} while (num>=0);

		// sort the list
		// calculate number of stairs climbed and add it to the totNumStairs 

	}


	// show totNumStairs;

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

int calStairs(int lst[], int n)
{
	/*calculate stairs climbed*/
}