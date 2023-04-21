//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

class A
{
    public:
    int calcSquare(int a,int b)
    {
        return a*b;
    }
    int calcSquare(int a,int b,int c,int d)
    {
        return a*a+b*b+c*c+d*d;
    }
    int calcSquare(int a)
    {
        return 3.14*a*a;
    }
};
int main()
{
    A a;
    cout<<a.calcSquare(3,4)<<"\n";//Rectangle
    cout<<a.calcSquare(3,4,5,6)<<"\n";//fourSquare
    cout<<a.calcSquare(3)<<"\n";//Circle

}