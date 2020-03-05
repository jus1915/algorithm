#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
queue <int> Q;
int main(void) {
	int n;
	string N;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> N;
		if (N == "push") {
			int a;
			cin >> a;
			Q.push(a);
		}
		else if (N == "front") {
			if (!Q.empty())
				cout << Q.front() << "\n";
			else
				cout << "-1\n";
		}
		else if (N == "size") {
			cout << Q.size() << "\n";
		}
		else if (N == "empty") {
			cout << Q.empty() << "\n";
		}
		else if (N == "pop") {
			if (!Q.empty()) {
				cout << Q.front() << "\n";
				Q.pop();
			}
			else
				cout << "-1\n";
		}
		else if (N == "back") {
			if (Q.empty())
				cout << "-1\n";
			else
				cout << Q.back() << "\n";
		}
	}
	return 0;
}