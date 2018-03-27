#include <iostream>

using namespace std;

char compare(char a, char b);
int compare(int a, int b);
double compare(double a, double b);
string compare(string, string );

template <class T> // or template <typename T>
T cmp(T a, T b);


int main()
{
    char c1='A', c2='B';
    int nr1=3, nr2=5;
    double num1=2.3, num2=5.3;
    string str1="Andi", str2="Aldi";

    cout<<"Using Polymorphism:\n";
    cout << compare(c1,c2) << endl;
    cout << compare(nr1,nr2) << endl;
    cout << compare(num1,num2) << endl;
    cout << compare(str1,str2) << endl<<endl;

    cout<<"Using Function Templates:\n";
    cout << cmp(c1,c2) << endl;
    cout << cmp(nr1,nr2) << endl;
    cout << cmp(num1,num2) << endl;
    cout << cmp(str1,str2) << endl;

    return 0;
}

char compare(char a, char b)
{
    if(a>b) return a;
    return b;
}

int compare(int a, int b)
{
    if(a>b) return a;
    return b;
}

double compare(double a, double b)
{
    if(a>b) return a;
    return b;
}

string compare(string a, string b)
{
    if(a>b) return a;
    return b;
}

template <class T>  // or template <typename T>
T cmp(T a, T b)
{
    if(a>b) return a;
    return b;
}


