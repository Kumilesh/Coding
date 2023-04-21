import java.util.*;  
import java.lang.Math; 

class JavaAssignment   
{  
public static void main(String[] args)  
{ 
Scanner sc= new Scanner(System.in);  
//question 1  
int x= sc.nextInt();  
int y= sc.nextInt();  
if(x> y ){
System.out.println(Math.pow(x,y));
}
//question 2
int age = sc.nextInt();
if(age>=18){
System.out.println("Eligible");
}else{
System.out.println("Not Eligible");
} 
//question 3
int a = sc.nextInt();
int b = sc.nextInt();
int c = sc.nextInt();
int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c); 
System.out.println(max);  
//Question 4
int num=sc.nextInt();
if(num==0)
{
    System.out.println("Number equal to Zero");
}
else if(num>0)
{
    System.out.println("Positive number");
}
else{
    System.out.println("Negative number");
}
//Question 5
a=sc.nextInt();
b=sc.nextInt();
char op=sc.next().charAt(0);
switch(op)
{
    case '+':
     System.out.println(a+b);
     break;
    case '-':
    System.out.println(a-b);
    break;
    case '*':
    System.out.println(a*b);
    break;
    case '/':
    System.out.println(a/b);
    break;
}

}
}
