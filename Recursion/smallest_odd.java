import java.util.Scanner;
class smallest_odd
{
    public static void main(String args[])
    {
        //Prompt the user to enter length of the array
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter len of the array:");
        int n=sc.nextInt();
        //Declare an array named list of n integer numbers
        int list[]=new int[5];
        System.out.println("Enter array values:");
        //Prompt the user to fill the array
        for(int i=0;i<n;i++)
        {
            //nextInt reads the next integer input prompted by the user
            list[i]=sc.nextInt();
        }
        //Printing the elements in the array
        System.out.print("Array values are:");
        for(int i=0;i<n;i++)
        {
            System.out.print(list[i]+ " ");
        }
        //Findout the smallest odd number in the array
        int smallest=99999;
        for(int i=0;i<n;i++)
        {
            if(list[i]%2!=0 && list[i]<smallest)
            {
                smallest=list[i];
            }
        }
        if(smallest==1e5)
        System.out.println("\nNo odd smallest number in the array");
        else
        System.out.println("\nSmallest odd number: "+smallest);


    }
}