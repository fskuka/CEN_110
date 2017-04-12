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
	/*Your Code Here*/
}



void selSort(int  arr[], int n)
{
	/*Your Code Here*/
}




