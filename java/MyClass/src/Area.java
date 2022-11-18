import java.util.Scanner;

public class Area {
	Scanner k=new Scanner(System.in);
void circle() {
	
	System.out.println("enter your object radius");
	int radius=k.nextInt();
	double area=(3.14*radius*radius);
	System.out.println("the area of your circle object :"+area);
}
void square() {
	System.out.println("enter your left side length in cm");
	int left=k.nextInt();
	System.out.println("enter your right side length in cm");
	int right=k.nextInt();
	int area=(left*right);
	System.out.println("the area of your square object :"+area);
}
void rectangle() {
	System.out.println("enter your left side length");
	int length=k.nextInt();
	System.out.println("enter your object breadth");
	int breadth=k.nextInt();
	int area=(length*breadth);
	System.out.println("the area of your rectangle object :"+area);
}
void triangle() {
	System.out.println("enter your object height");
	int height=k.nextInt();
	System.out.println("enter your object breadth");
	int breadth2=k.nextInt();
	int area=((height*breadth2)/2);
	System.out.println("the area of your triangle object :"+area);
}

}
