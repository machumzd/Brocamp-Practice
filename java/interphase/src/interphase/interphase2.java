package interphase;
interface kunddan{
	public void yathu();
	public void riya();
}
class hello implements kunddan{
	public void yathu() {
		System.out.println("hello its yathu");
	}
	public void riya() {
		System.out.println("hello its riya");
	}
}
public class interphase2 {
public static void main(String[] args) {
	hello h=new hello();
	h.yathu();
	h.riya(); 
}
}
