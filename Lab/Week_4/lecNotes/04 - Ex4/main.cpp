#include <iostream>
#include <iomanip>

using namespace std;

void showNum(double num, int n=2);

int main()
{
    double PI=3.141592653589793;
    showNum(PI);
    showNum(PI,1);
    showNum(PI,5);
    showNum(PI,15);
    return 0;
}

void showNum(double num, int n)
{
    cout<<fixed<<setprecision(n)<<num<<endl;
}
