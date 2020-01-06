package sec01.exam01;

import java.util.Scanner;

public class SelectionSort {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("배열의 크기 입력 :");
		int n=sc.nextInt();
		int[] array=new int[n];
		System.out.println("원소 입력 :");
		for(int i=0;i<n;i++) {
			array[i]=sc.nextInt();
		}
		int min,temp;
		for(int i=0;i<n-1;i++) {
			min=i;
			for(int j=i+1;j<n;j++) {
				if(array[j]<array[min])
					min=j;
			}
			if(i!=min) {
				temp=array[i];
				array[i]=array[min];
				array[min]=temp;
			}
		}
		for(int i=0;i<n;i++) {
			System.out.println(array[i]);
		}
	}
}
