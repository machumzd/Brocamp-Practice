package methodOverloading;

public class recursion {
static int sum(int a) {
if(a>0) {
	return a+sum(a-1);
}
else {
	return 0;
}

}

public static void main(String[] args) {
	int result=sum(8);
	System.out.println(result);
}
}
