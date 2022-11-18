import java.util.Scanner;

public class Calculator {
public static void main(String[] args) {
	Scanner s=new Scanner(System.in);
	System.out.println("enter first number..");
	int num1=s.nextInt();
	System.out.println("enter second number..");
	int num2=s.nextInt();
	System.out.println("entered numbers are.. "+num1+num2);
	System.out.println(" 1.addition \n 2.substraction \n 3.multiplication \n 4.division \n");
	int value=s.nextInt();
	
	
	
switch(value) {
case 1:
	addition(num1,num2);
	break;
case 2:
	substraction(num1,num2);
	break;
case 3:
	multiplication(num1,num2);
	break;
case 4:
	division(num1,num2);
	break;
default:
	System.out.println("\n sorry try again..");
	break;
}



}

public static void addition(int num1,int num2) {
	System.out.println("\n addition : "+(num1+num2));
}

public static void substraction(int num1,int num2) {
	System.out.println("\n substraction : "+(num1-num2));
}
public static void multiplication(int num1,int num2) {
	System.out.println("\n multiplication : "+(num1*num2));
}
public static void division(int num1,int num2) {
System.out.println("\n division : "+(num1/num2));
}
}
