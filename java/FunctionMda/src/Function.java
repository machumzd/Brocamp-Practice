import java.util.Scanner;

public class Function {

	public static void main(String[] args) {
		int size;
		int a[][]=new int[100][100];
	size=getArray(a);
	displayArray(a,size);
	}
	
public static int getArray(int[][] a) {
	Scanner s=new Scanner(System.in);
	System.out.println("enter a size");
	int size=s.nextInt();

	System.out.println("enter the array");
	
	for(int i=0;i<size;i++) {
		for(int j=0;j<size;j++) {
			a[i][j]=s.nextInt();
			
		}
	}
	return size;
}
	public static void displayArray(int [][]a,int size)
	{
	System.out.println("the array is");
	for(int i=0;i<size;i++) {
		for(int j=0;j<size;j++) {
			System.out.print(a[i][j]+"\t");
		}
		System.out.println("\n");
	}
	
	}
}
	