#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
queue<int> Q;
int N, M;
int map[101][101];
int ch[101][101];
int maze[101][101];
int main(void) {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%1d", &map[i][j]);
		}
	}
	Q.push(0);
	Q.push(0);
	ch[0][0] = true;
	maze[0][0] = +1;
	int a, b;
	while (!Q.empty()) {
		a = Q.front();
		Q.pop();
		b = Q.front();
		Q.pop();
		if (a+1 == N && b+1 == M)
			break;
		if (map[a][b + 1] && !ch[a][b + 1]) {
			Q.push(a);
			Q.push(b + 1);
			maze[a][b + 1] = maze[a][b] + 1;
			ch[a][b + 1] = true;
		}
		if (map[a + 1][b] && !ch[a + 1][b]) {
			Q.push(a + 1);
			Q.push(b);
			maze[a+1][b] = maze[a][b] + 1;
			ch[a + 1][b] = true;
		}
		if (b > 0 && map[a][b - 1] && !ch[a][b - 1]) {
			Q.push(a);
			Q.push(b - 1);
			maze[a][b - 1] = maze[a][b] + 1;
			ch[a][b - 1] = true;
		}
		if (a > 0 && map[a - 1][b] && !ch[a - 1][b]) {
			Q.push(a - 1);
			Q.push(b);
			maze[a - 1][b] = maze[a][b] + 1;
			ch[a - 1][b] = true;
		}
	}
	cout << maze[N - 1][M - 1] << endl;
	return 0;
}