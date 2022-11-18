import java.util.Scanner;

public class Hello {
public static void main(String ar[])
{
	Scanner s=new Scanner(System.in);
	System.out.println("enter two numbers");
	int a=s.nextInt();
	int b=s.nextInt();
	int c=a+b;
	System.out.println("the result is "+c);
}
}
