#include <stdio.h>
#include <stdlib.h>

int calcProCost(int arr[], int m);

int main()
{
	int i, n, m;
	int minProcCos, proCos;
	int arr[20000];
	scanf("%d%d", &n, &m);
	
	minProcCos = calcProCost(arr, m);

	for (i = 1; i<n; i++)
	{
		proCos = calcProCost(arr, m);
		if (proCos<minProcCos)
			minProcCos = proCos;
	}

	printf("%d", minProcCos);
	return 0;
}

int calcProCost(int arr[], int m)
{
	int i;
	int num, max, sum = 0;

	scanf("%d", &arr[0]);
	max = arr[0];

	for (i = 1; i<m; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i]>max)
			max = arr[i];
	}

	for (i = 0; i<m; i++)
	{
		sum += (max - arr[i]);
	}
	return sum;
}
