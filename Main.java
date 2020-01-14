package project1;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		n=1000-n;
		int cnt=0;
		while(n>0) {
			if(n>=500) {
				cnt+=n/500;
				n=n%500;
			}
			else if(n>=100) {
				cnt+=n/100;
				n=n%100;
			}
			else if(n>=50) {
				cnt+=n/50;
				n=n%50;
			}
			else if(n>=10) {
				cnt+=n/10;
				n=n%10;
			}
			else if(n>=5) {
				cnt+=n/5;
				n=n%5;
			}
			else {
				cnt+=n/1;
				n=n%1;
			}
		}
		System.out.println(cnt);
	}
}