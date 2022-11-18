 abstract class Google {
	abstract void search();
	 void message() {
	System.out.println("thanks for use message");
}
}
 class searchImage extends Google{
	public void search() {
		System.out.println("image results");
	}
 }
 class searchVideo extends Google{
	 void search() {
		 System.out.println("video results");
	 }
 }
 