package sec01.exam01;

public class Recursion {
	public int RecFunc(int num) {
		if(num==1)
			return 1; 
		return num + RecFunc(num-1);
	}
	public static void main(String[] args) {
		Recursion r=new Recursion();
		System.out.println("1���� 5������ ���� "+r.RecFunc(5));
	}

}
