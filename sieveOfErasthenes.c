//include files
#include<stdio.h>
//flip function to flip number
void flip(int arr[],int x)
{
    arr[x]=0;
}
//Main method
int main()
{
    //Asking for size of array
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n+1];
    //Assigning all values in the array to 1
    for(int i=1;i<n+1;i++)
    {
        arr[i]=1;
    }
    arr[1]=0;
    //Applying sieve of erasthenes
    for(int p=2;p*p<=n;p++)
    {
    if(arr[p]==1)
    {
        for(int i=p*p;i<=n;i+=p)
        {
        flip(arr,i);    
        }
    }
    }
    //fw=field width
    //pc=prime count
    int fw=0;
    int pc=0;
    //Printing primes
    for(int i=1;i<n;i++)
    {
        //for every 10 numbers there is a new line
        if(fw%10==0)
        {
            printf("\n");
        }
        //if number is prime arr[i] is 1
        if(arr[i]==1)
        {
            printf("%d ",i);
            pc++;
            fw++;
        }
    }
    //printing pc
    printf("\ntotal primes found: %d",pc);
}