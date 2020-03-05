#include<iostream>
#include<stack>
#include<cstring>
enum ch{push,pop,size,empty,top};
using namespace std;
stack <int> s;
int main(void) {
	int n;
	string N;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> N;
		if (N == "push") {
			int a;
			cin >> a;
			s.push(a);
		}
		else if (N == "top") {
			if (!s.empty())
				cout << s.top() << "\n";
			else
				cout << "-1\n";
		}
		else if (N == "size") {
			cout << s.size() << "\n";
		}
		else if (N == "empty") {
			cout << s.empty() << "\n";
		}
		else if (N == "pop") {
			if (!s.empty()) {
				cout << s.top() << "\n";
				s.pop();
			}
			else
				cout << "-1\n";
		}
	}
	return 0;
}