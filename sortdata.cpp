//Incliude header files
#include <bits/stdc++.h>
using namespace std;
#include<fstream>
using std::ofstream;
//main method
int main()
{
    //Initialization and declaration as per given input format
    int n;
    cout<<"How many values? ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" values: ";
    //Looping through n to take integer values
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a theshold:";
    int k;
    cin>>k;
    
    //object out is created to print the output data in problem1.text file 
    ofstream out;
    //Sorting the array
    sort(arr,arr+n);
    //Opening the file
    out.open("C:/Users/kumilesh/Desktop/problem1.txt");
    //Writing output to file
    out<<"Generated by (Your name)\n";
    for(int i=1;i<=k;i++)
    {
        out<<arr[i]<<" ";
        if(i%5==0)
        out<<"\n";
    }
    cout<<"\nproblem1.txt is created";
    

}