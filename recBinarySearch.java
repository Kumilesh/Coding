import java.util.*;
class recBinarySearch{
    public static int recBinarySearch(int inp,int[] x,int low,int high)
    {
        int mid=(low+high)/2;
        if(high<low)
        {
            return -1;
        }

        if(x[mid]==inp)
        {
            return mid;
        }
        else if(x[mid]>inp)
        {
            return recBinarySearch(inp,x,low,mid-1);
        }
        else
        {
            return recBinarySearch(inp,x,mid+1,high);
        }

    }
    public static void main(String args[])
    {
        int[] x=new int[]{1,2,3,5,7,4,8,9,10,15,20,21,13,17,18,22,25,6,23,30};
        Arrays.sort(x);
        //System.out.println(Arrays.toString(x));
        //System.out.println(x.length);
        Scanner sc=new Scanner(System.in);
        int inp=sc.nextInt();
        int ans=recBinarySearch(inp,x,0,20);
        System.out.println("The number "+inp+ " is found recursively at index number "+ans);
    }
}