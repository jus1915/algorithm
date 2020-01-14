package project1;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Main app=new Main();
		Scanner sc=new Scanner(System.in);
		int[][] a=new int[5][5];
		for(int i=0;i<5;i++) {
			for(int j=0;j<5;j++) {
				a[i][j]=sc.nextInt();
			}
		}
		for(int i=1;i<25;i++) {
			int r=0,c=0,cr=0,rcr=0,cnt=0;
			int n=sc.nextInt();
			for(int x=0;x<5;x++) {
				for(int y=0;y<5;y++) {
					if(a[x][y]==n)
						a[x][y]=0;
				}
			}
			for(int j=0;j<5;j++) {
				r=0;
				for(int k=0;k<5;k++) {
					if(a[j][k]==0) r++;
					if(r==5) cnt++;
				}
			}
			for(int j=0;j<5;j++) {
				c=0;
				for(int k=0;k<5;k++) {
					if(a[k][j]==0) c++;
					if(c==5) cnt++;
				}
			}
			for(int j=0;j<5;j++) {
				if(a[j][j]==0) cr++;
				if(cr==5) cnt++;
			}
			for(int j=0;j<5;j++) {
				if(a[j][4-j]==0) rcr++;
				if(rcr==5) cnt++;
			}
			if(cnt>=3) {
				System.out.println(i);
				break;
			}
		}
	}
}
