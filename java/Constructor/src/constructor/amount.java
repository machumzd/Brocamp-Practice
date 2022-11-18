package constructor;

class Tax {
public double Amount;
public Tax() {
	System.out.println("hello mzee");
	Amount=40.900;
}
}
public class amount{
	public static void main(String[] args) {
		Tax t=new Tax();
		System.out.println(t.Amount);
	}
	

}