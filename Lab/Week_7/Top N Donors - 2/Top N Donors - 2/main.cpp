#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Donators{
	string name;
	string surname;
	double amount;

};

void getData(vector<Donators>& Don, int &m, int &n);
void showData(vector<Donators>& Don, int n);
bool compare(Donators a, Donators b);

int main()
{
	int m, n;
	vector<Donators> Dn;

	getData(Dn, m, n);
	sort(Dn.begin(), Dn.end(), compare);
	showData(Dn, n);
	return 0;
}

void getData(vector<Donators>& Don, int &m, int &n)
{
	ifstream fin("input.txt");
	fin >> m >> n;

	Don.resize(m);
	for (int i = 0; i<m; i++)
	{
		fin >> Don[i].name >> Don[i].surname >> Don[i].amount;
	}
}

void showData(vector<Donators>& Don, int n)
{

	for (int i = 0; i<n; i++)
	{
		cout << Don[i].name << " " << Don[i].surname << " " << Don[i].amount << endl;
	}
}

bool compare(Donators a, Donators b)
{
	return a.amount>b.amount;
}