#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct Circle
{
	int ID;
	int x, y;
	int radius;
	int noInersect;
};

void getData(vector<Circle> &Cir, int &n, int &m);
bool intersect(Circle a, Circle b);
void calcIntersectedCircles(vector<Circle> &Cir, int n);
void showData(vector<Circle> &Cir, int n);
bool compare(Circle a, Circle b);

int main()
{
	vector<Circle> Cir;
	int n, m;
	getData(Cir, n, m);
	calcIntersectedCircles(Cir, n);
	sort(Cir.begin(), Cir.end(), compare);
	showData(Cir, m);
	return 0;
}

void getData(vector<Circle> &Cir, int &n, int &m)
{
	ifstream fin("input.txt");
	fin >> n >> m;
	Cir.resize(n);

	for (int i = 0; i<n; i++)
	{
		Cir[i].ID = i + 1;
		fin >> Cir[i].x >> Cir[i].y >> Cir[i].radius;
	}
}

void calcIntersectedCircles(vector<Circle> &Cir, int n)
{
	int cnt;
	int i, j;
	Cir.resize(n);
	for (i = 0; i<n; i++)
	{
		cnt = 0;
		for (j = 0; j<n; j++)
		{
			if (i == j) continue;
			if (intersect(Cir[i], Cir[j]))
				cnt++;
			Cir[i].noInersect++;
		}
		if (i == j) continue;
		Cir[i].noInersect = cnt;
	}
}

bool intersect(Circle a, Circle b)
{
	double distance;

	int diffX = a.x - b.x;
	int diffY = a.y - b.y;
	distance = sqrt((diffY * diffY) + (diffX * diffX));

	if (distance <= (a.radius + b.radius)) return true;
	return false;
}

void showData(vector<Circle> &Cir, int n)
{
	for (int i = 0; i<n; i++)
	{
		//cout<<Cir[i].ID<<" "<<Cir[i].y<<" "<<Cir[i].radius<<" "<<Cir[i].noInersect<<endl;
		cout << Cir[i].ID << " ";
	}
}

bool compare(Circle a, Circle b)
{
	if (a.noInersect > b.noInersect) return true;
	if (a.noInersect < b.noInersect) return false;
	if (a.ID > b.ID) return false;
}

