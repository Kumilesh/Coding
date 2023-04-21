//Balayya Forever
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    cout<<"You may choose to roll or stay each turn\n\nIf you go over, you lose and cannot roll again.\n";
    cout<<"If the dealer goes over and you don't, you win!\nIf you both go over, you both lose.\n If you tie, nobody wins.\n\n";
    cout<<"If you choose to stay, the dealer will roll one more time even if the dealer already bust.";
    cout<<rand()%6;
}