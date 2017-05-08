#include <iostream>
#include<string>
#include <fstream>
#include<vector>
#include<algorithm>

using namespace std;
ifstream fin("input.txt");

struct Student
{
	string name;
	int grade;
};
void getData(vector<Student> &Std, int n);
void showData(vector<Student> &Std, int a, int b);
bool compare(Student a, Student b);
int main()
{
	vector<Student> Std;
	int a, b, n;
	fin >> n >> a >> b;

	getData(Std, n);
	sort(Std.begin(), Std.end(), compare);
	showData(Std, a, b);
	return 0;
}



void getData(vector<Student> &Std, int n)
{

	Std.resize(n);
	string temp;

	for (int i = 0; i<n; i++)
	{
		getline(fin, temp);
		getline(fin, Std[i].name, ';');
		fin >> Std[i].grade;
	}
}

void showData(vector<Student> &Std, int a, int b)
{

	// cout<<b-a+1<<endl;
	for (int i = a; i <= b; i++)
	{
		cout << Std[i].name << "; " << Std[i].grade << endl;
	}

}

bool compare(Student a, Student b)
{
	if (a.grade>b.grade) return true;
	if (a.grade<b.grade) return false;
	return  a.name>b.name;
}
