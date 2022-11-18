import java.util.Scanner;

public class MyClass extends Area{
public static void main(String[] args) {
	Scanner s=new Scanner(System.in);
	
	System.out.println("are u seeking for the area of your object..\n here is the solution");
	System.out.println("plz enter your type of object.. \n 1.circle \n 2.square \n 3.rectangle \n 4.triangle \n");
	int num=s.nextInt();
	Area h=new Area();
	switch (num) {
	case 1:
		h.circle();
		break;
	case 2:
		h.square();
		break;
	case 3:
		h.rectangle();
		break;
	case 4:
		h.triangle();
		break;
	default:
		System.out.println("please check again");
		break;
	}
}
}
