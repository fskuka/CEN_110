#include <iostream>
#include <fstream>
#include <string>


using namespace std;

struct Donators{
	string name;
	string surname;
	double amount;

};


void getData(Donators Don[], int &m, int &n);
void showData(Donators Don[], int n);
void selSort(Donators Don[], int n);


int main()
{
	int m, n;
	Donators Dn[10000];

	getData(Dn, m, n);
	selSort(Dn, m);
	showData(Dn, n);
	return 0;
}

void getData(Donators Don[], int &m, int &n)
{
	ifstream fin("input.txt");

	fin >> m >> n;

	for (int i = 0; i<m; i++)
	{
		fin >> Don[i].name >> Don[i].surname >> Don[i].amount;
	}
}


void showData(Donators Don[], int n)
{

	for (int i = 0; i<n; i++)
	{
		cout << Don[i].name << " " << Don[i].surname << " " << Don[i].amount << endl;
	}
}


void selSort(Donators Don[], int n)
{
	int i, j, temp;

	for (i = 0; i<n - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < n; j++)
		{
			if (Don[j].amount>Don[min].amount)
				min = j;
		}
		swap(Don[min], Don[i]);
	}
}