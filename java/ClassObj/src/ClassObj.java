
public class ClassObj {
public static void main(String ar[]) {
	Sample s1=new Sample();
	Sample s2=new Sample();
	
	s1.a=10;
	s1.b=20;
	s2.a=30;
	s2.b=50;
	s1.calculate();
	s2.calculate();
	
	s1.display();
	s2.display();
	
}
}
