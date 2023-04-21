import java.util.Scanner;
class abc
{
    static int countEven(int a,int b,int ct)
    {
        if(a%2!=0 && b%2!=0)
        {
            return st;
        }
        for(int i=0;i<2;i++)
        {
            if(a%2==0)
            {
            ct+=1;
            return countEven(a/2,b,ct);
            }
            else if(b%2==0)
            {
                ct+=1;
            return countEven(a,b/2,ct);
            }
        }
        return 1;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int ct=0;
        int r=countEven(a,b,ct);
        System.out.println(ct);

    }

}