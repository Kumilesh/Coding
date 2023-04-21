import java.util.Scanner;
import java.util.*;
import java.util.ArrayList;
public class course {
	String name;
	int number;
	String instructor;
	static int MaxNumberOfStudents=60;
	public int students[];;
	public course()
	{
		Scanner sc=new Scanner(System.in);
        System.out.println("Enter course name");
		this.name=sc.nextLine();
        System.out.println("Enter course number");
		this.number=sc.nextInt();
        System.out.println("Enter instructor name");
		this.instructor=sc.nextLine();
		int size;
		do
		{
		System.out.println("Enter size of the array:");
		size=sc.nextInt();
		}while(size>=0 && size<=MaxNumberOfStudents);
		students=new int[size];
		for(int i=0;i<size;i++)
		{
			System.out.println("Enter student ID of "+(i+1));
			students[i]=sc.nextInt();
		}
		
		Arrays.sort(students);
	}
	public course(String n,int num,String in,int s[])
	{
		this.name=n;
		this.number=num;
		this.instructor=in;
		int size=s.length;
		if(size>MaxNumberOfStudents)
		{
			students=new int[MaxNumberOfStudents];
			for(int i=0;i<MaxNumberOfStudents;i++)
			{
				students[i]=s[i];
			}
			
		}
		else
		{
			students=new int[size];
			for(int j=0;j<size;j++)
			{
				students[j]=s[j];
			}
			Arrays.sort(students);
		}
	}
	public static void incrementMaxNUmberOfStudents(int n)
	{
		MaxNumberOfStudents+=n;
	}
	public boolean addStudent()
	{
        boolean flag=true;
		System.out.println("Enter a student id:");
        Scanner sc=new Scanner(System.in);
        int id=sc.nextInt();
        if(students.length+1>MaxNumberOfStudents)
        {
            flag=false;
            return flag;
        }
        int newarr[]=new int[students.length+1];
        int k=0;
        for(int i=0;i<students.length;i++)
        {
            newarr[k]=students[i];
            k++;
        }
        newarr[k]=id;
        if(flag)
        {
            students=null;
            students=new int[newarr.length];
            for(int i=0;i<newarr.length;i++)
            {
                students[i]=newarr[i];
            }
        }
        Arrays.sort(students);
        return flag; 
    }
	public boolean removeStudent()
	{
        boolean bool=false;
        System.out.println("Enter a student id:");
        Scanner sc=new Scanner(System.in);
        int id=sc.nextInt();
        int newarr[]=new int[students.length-1];
        int k=0;
        for(int i=0;i<students.length && k<students.length-1;i++)
        {
            if(students[i]==id )
            {
                bool=true;
                continue;
            }
            newarr[k]=students[i];
            k++;
        }
        if(bool)
        {
            students=null;
            students=new int[newarr.length];
            for(int i=0;i<newarr.length;i++)
            {
                students[i]=newarr[i];
            }
        }
        return bool;
		
	}
	public void printDetails()
	{
		System.out.println("Course name:"+name);
		System.out.println("Course number:"+number);
		System.out.println("Instructor name"+instructor);
		int size=students.length;
		System.out.println("Number of registered students"+size);
		System.out.println("students ids are:");
		for(int i=0;i<size;i++)
		{
		System.out.println(students[i]);
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
        course c1=new course();
        c1.addStudent();
        c1.removeStudent();
        c1.printDetails();
        c1.incrementMaxNUmberOfStudents(3);


	}

}
