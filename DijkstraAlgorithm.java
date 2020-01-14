package project1;
//라우터 사이의 최단 경로를 찾는 예제
import java.util.Scanner;

class DijkstraAlgorithm {
	   private int n;
	   private int map[][];

	   public DijkstraAlgorithm(int n) {
	      this.n = n;
	      map = new int[n + 1][n + 1];

	   }
	   
	   public void input(int i, int j, int w) {
	      map[i][j] = w;
	   }

	   public void dijkstra(int v) {
	      int distance[] = new int[n + 1];
	      boolean[] check = new boolean[n + 1];

	      for (int i = 1; i < n + 1; i++) {
	         distance[i] = Integer.MAX_VALUE;
	      }

	      distance[v] = 0;
	      check[v] = true;

	      for (int i = 1; i < n + 1; i++) {
	         if (!check[i] && map[v][i] != 0) {
	            distance[i] = map[v][i];
	         }
	      }

	      for (int a = 0; a < n - 1; a++) {
	         int min = Integer.MAX_VALUE;
	         int min_index = -1;

	         for (int i = 1; i < n + 1; i++) {
	            if (!check[i] && distance[i] != Integer.MAX_VALUE) {
	               if (distance[i] < min) {
	                  min = distance[i];
	                  min_index = i;
	               }
	            }
	         }

	         check[min_index] = true;
	         for (int i = 1; i < n + 1; i++) {
	            if (!check[i] && map[min_index][i] != 0) {
	               if (distance[i] > distance[min_index] + map[min_index][i]) {
	                  distance[i] = distance[min_index] + map[min_index][i];
	               }
	            }
	         }
	      }

	      for (int i = 1; i < n + 1; i++) {
	         System.out.printf("목적지 라우터 [%d]까지의 최단비용 : ", i);
	         System.out.println(distance[i]);
	      }
	   }
	   public static void main(String[] args) {
		      Scanner scan = new Scanner(System.in);
		      
		      DijkstraAlgorithm g = new DijkstraAlgorithm(8);
		      
		      g.input(1, 2, 7);
		      g.input(1, 5, 5);
		      g.input(1, 4, 1);
		      g.input(2, 3, 3);
		      g.input(3, 4, 2);
		      g.input(4, 5, 9);
		      g.input(5, 6, 7);
		      g.input(4, 7, 3);
		      g.input(7, 6, 8);
		      g.input(3, 8, 9);
		      g.input(6, 8, 1);
		      g.input(8, 1, 3);
		      
		      System.out.print("출발지 라우터 입력(1~8) : ");
		      int router = scan.nextInt();
		      
		      g.dijkstra(router);
		      
		   }
}