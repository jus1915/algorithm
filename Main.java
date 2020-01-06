package sec01.exam01;
import java.util.Scanner;
public class Main {
	public int RecFunc(int n) {
		if(n==0)
			return 0;
		else if(n==1)
			return 1;
		return RecFunc(n-1)+RecFunc(n-2);
		
	}
	public static void main(String[] args) {
		Main m=new Main();
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		System.out.println(m.RecFunc(n));
	}
}