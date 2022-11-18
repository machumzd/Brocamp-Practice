package smartphone;

import java.util.Scanner;

public class SmartMain {
public     void main(String[] args) {
	Smartphone phone1=new Smartphone();
	Smartphone phone2=new Smartphone();
	Scanner sc=new Scanner(System.in);
	
	
	phone1.make="Apple";
	phone1.model="11 pro";
	phone1.price=4000;
	
	System.out.println("\n \n brand: "+phone1.make+"\nmodel:"+phone1.model+"\nprice:"+phone1.price);
	
	
	phone2.make="poco";
	phone2.model="f1 ultra";
	phone2.price=2800;
	
	System.out.println("\n \n brand: "+phone2.make+"\nmodel:"+phone2.model+"\nprice:"+phone2.price);
	
	System.out.println("\n \n enter a number \n1.for calling to apple \n2.for messaging to poco");
	int input=sc.nextInt();
	if(input==1) {
		phone1.call();
	}else if(input==2)
	{
	
	phone2.msg();
	}
	
}
}
