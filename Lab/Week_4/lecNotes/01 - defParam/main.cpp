#include <iostream>

using namespace std;

int calcSum(int , int , int c=10, int d=20);


int main()
{

 //  cout<<calcSum() << endl;  // too few arguments to function
 // cout<<calcSum(2) << endl; // too few arguments to function
    cout<<calcSum(2,3) << endl;
    cout<<calcSum(2,3,4) << endl;
    cout<<calcSum(2,3,4,5) << endl;
    return 0;
}

int calcSum(int a, int b, int c, int d)
{
    return a+b+c+d;
}
