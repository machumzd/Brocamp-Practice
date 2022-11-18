package methodOverloading;

public class Hello {
static int findsum(int a,int b) {
	return a+b;
	
}
static int findsquare(int x,int y,int z)
{
	return x*y*z;
}
static int findsquare(int a,int c) {
	return a-c;
}  
public static void main(String[] args) {
	int sum1=findsum(8,50);
	int sum2=findsquare(5,6);
	System.out.println(sum1);
	System.out.println(sum2);
}
}
