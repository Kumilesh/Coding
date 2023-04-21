import java.util.Scanner;
class seqSearch
{
    public static void seqSearch(char inp,char[] x)
    {
        int low=0;
        int high=x.length-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(x[mid]-32==inp)
            {
                System.out.println(inp+" is found at index "+mid);
                break;
            }
            else if(x[mid]-32>inp)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }

        }
    }
    public static void main(String args[])
    {

        char[] x=new char[]{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'};
        //Scanner sc=new Scanner(System.in);
        //char inp=sc.next().charAt(0);
        seqSearch('A',x);
        seqSearch('C',x);

    }
}