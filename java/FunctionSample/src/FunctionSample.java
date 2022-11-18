import java.util.Scanner;
public class FunctionSample {
	public static void main(String ar[]) {
		Scanner s=new Scanner(System.in);
		System.out.println("enter two numbers");
		int a=s.nextInt();
		int b=s.nextInt();
		int result=sum(a,b);
		System.out.println("result is :"+result);
		
	}
static int sum(int num1,int num2) {
	int c=num1+num2;
	return c;
}
}
