//Scanner helps to take input
import java.util.Scanner;
//class name same as prog name
class sum_of_area
{
    public static void main(String args[])
    {
        System.out.println("This program computes area of rectangles.");
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter height of rectangle 1:");
	  //Taking inputs h1 and w1 and computing area in area1..
        int h1=sc.nextInt();
        System.out.print("Enter width of rectangle 1:");
        int w1=sc.nextInt();
        int area1=h1*w1;
	  //Taking inputs in h2 and w2 and cmputing in area2.
	
        System.out.print("Enter height of rectangle 2:");
        int h2=sc.nextInt();
        System.out.print("Enter width of rectangle 2:");
        int w2=sc.nextInt();
        int area2=h2*w2;
        //Storing total area in total_area and printing it.
        int total_area=area1+area2;
        System.out.println("The total area of both rectangles is "+total_area);

    }
}