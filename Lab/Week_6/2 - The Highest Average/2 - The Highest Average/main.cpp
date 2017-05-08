#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student
{
	string name;
	string surname;
	double avg;
};
double average(int sum, int cnt);
void getData(Student stu[], int &n);
int searchMax(Student stu[], int n);


int main()
{
	Student st[100];
	int n, ind;

	getData(st, n);

	ind = searchMax(st, n);
	cout << st[ind].name << " " << st[ind].surname << " " << st[ind].avg << endl;
	return 0;
}


double average(int sum, int cnt)
{
	if (cnt<4) cnt = 4;
	return (double)sum / cnt;

}

void getData(Student stu[], int &n)
{
	ifstream fin("input.txt");
	int sum, cnt, grade;

	fin >> n;

	for (int i = 0; i<n; i++)
	{
		fin >> stu[i].name >> stu[i].surname;
		sum = 0, cnt = 0;

		do
		{
			fin >> grade;
			if (grade != -1)
			{
				sum += grade;
				cnt++;
			}
		} while (grade != -1);

		stu[i].avg = average(sum, cnt);

	}

}

int searchMax(Student stu[], int n)
{
	int mPos = 0;
	for (int pos = 1; pos<n; pos++)
	if (stu[pos].avg>stu[mPos].avg)mPos = pos;
	return mPos;
}
