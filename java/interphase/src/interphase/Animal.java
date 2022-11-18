package interphase;

interface animal{
	public void sound();
	
	
}
interface pig{
	public void size();
}


class sounde implements animal,pig{
public void sound() {
	System.out.println("hii");
}
public void size() {
	System.out.println("hello size");
}
}


class Main{
	public static void main(String[] args) {
		sounde s=new sounde();
		s.sound();
		s.size();
	
	}
}