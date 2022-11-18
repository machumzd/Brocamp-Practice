import java.util.Scanner;
public class ForSample {
public static void main(String a[]) {
	Scanner s=new Scanner(System.in);
	System.out.println("enter a number");
	int num=s.nextInt();
	for(int i=1;i<=num;i++) {
		System.out.println("\n"+i);
	}
}
}
