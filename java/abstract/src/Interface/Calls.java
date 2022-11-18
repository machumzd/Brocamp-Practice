package Interface;

public interface Calls {
	void call();
	void mute();
}
class Audiocall implements Calls{
	public void call() {
		System.out.println("whatsapp call");
	}
	public void mute() {
		System.out.println("audiocall muted");
	}
}
class Videocall implements Calls{
	public void mute() {
		System.out.println("muted");
	}
	public void call() {
		System.out.println(" voideo  call");
}	
}
