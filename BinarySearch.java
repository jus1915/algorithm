package sec01.exam01;

import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("배열의 크기 입력 : ");
		int n=sc.nextInt();
		int[] array=new int[n];
		System.out.print("원소의 값 입력 :");
	    for(int i=0;i<n;i++) {
	    	array[i]=sc.nextInt();
		}
		Arrays.sort(array);
		System.out.print("타겟 입력 : ");
		int target =sc.nextInt();
		int fir=0,last=n-1;
		while(fir<=last) {
			int mid=(fir+last)/2;
			if(array[mid]==target) {
				System.out.println("존재합니다.");
				break;
			}
			else if(array[mid]>target) {
				last=mid-1;
			}
			else if(array[mid]<target) {
				fir=mid+1;
			}
		}
		if(fir>last)
			System.out.println("존재하지 않습니다.");
	}
}
