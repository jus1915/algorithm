#include<iostream>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;
char map[25][25];
int ch[25][25];
queue <int> Q;
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == '1' && !ch[i][j]) {
				Q.push(i); Q.push(j);
				ch[i][j] = cnt;
				while (!Q.empty()) {
					int a = Q.front(); Q.pop();
					int b = Q.front(); Q.pop();
					if (a + 1 < n)
						if(map[a + 1][b] == '1' && !ch[a + 1][b]) {
							Q.push(a + 1); Q.push(b);
							ch[a + 1][b] = cnt;
					}
					if (b + 1 < n)
						if(map[a][b + 1] - '0' && !ch[a][b + 1]) {
							Q.push(a); Q.push(b + 1);
							ch[a][b + 1] = cnt;
					}
					if (a - 1 >= 0)
						if(map[a - 1][b] - '0' && !ch[a - 1][b]) {
							Q.push(a - 1); Q.push(b);
							ch[a - 1][b] = cnt;
					}
					if (b - 1 >= 0)
						if(map[a][b - 1] - '0' && !ch[a][b - 1]) {
							Q.push(a); Q.push(b - 1);
							ch[a][b - 1] = cnt;
					}
				}
				cnt++;
			}
		}
	}
	cout << cnt - 1 << endl;
	int c[314] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (ch[i][j] != 0)
				c[ch[i][j]]++;
		}
	}
	sort(c, c + 314);
	for (int i = 0; i < 314; i++) {
		if (c[i] != 0)
			cout << c[i] << endl;
	}
	return 0;
}