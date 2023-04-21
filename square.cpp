//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

class B
{
    public:
    int square(int a)
    {
        //Const in cpp acts as final in java
        const int b=a*a;
        return b;
    }

};
int main()
{
    //creaating object b
    B b;
    //Printing result
    cout<<b.square(10);
}