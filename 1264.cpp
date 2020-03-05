#include<iostream>
#include<string>
using namespace std;

int main(void) {
	string n;
	int cnt;
	while (true) {
		getline(cin,n);
		if (n == "#")
			break;
		cnt = 0;
		for (int i = 0; i < n.length(); i++) {
			if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u'|| n[i] == 'A' || n[i] == 'E' || n[i] == 'I' || n[i] == 'O' || n[i] == 'U')
				cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}