import java.util.Scanner;

public class prime {
public static void main(String ar[]) {
	System.out.println("enter a number to check prime or not");
	Scanner s=new Scanner(System.in);
	int num=s.nextInt();
	int i,flag=0;
	int m=num/2;
	if(num==0 ||num==1) {
		System.out.println(num+"its not a prime number check it again");
	}
	else
	{
		for(i=2;i<=m;i++) {
			if(num%i==0){
				System.out.println("\nits not a prime number check it again");
				flag=1;
				break;
			}
		}
		if(flag==0) {
			System.out.println(num+ "\nits a prime number");
		}
		
	}
		}
	}
