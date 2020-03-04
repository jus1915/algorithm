#include<iostream>
#include<queue>
using namespace std;
int ch[100][100];
queue<int> Q;
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> ch[i][j];
		}
	}
	int a, b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < n; j++) {
			if (ch[i][j]) {
				Q.push(i); Q.push(j);
				while (!Q.empty()) {
					a = Q.front(); 
					Q.pop();
					b = Q.front(); 
					Q.pop();
					for (int k = 0; k < n; k++) {
						if (ch[b][k]) {
							Q.push(b); Q.push(k);
							ch[a][k] = 1;
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < n; j++) {
			cout << ch[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}