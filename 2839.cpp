#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

int main(void) {
	string n;
	int arr[10] = {};
	cin >> n;
	for (int i = 0; i < n.length(); i++) {
		arr[n[i]-'0']++;
	}
	int m = 0;
	int m_index = 0;
	for (int i = 0; i < 10; i++) {
		if (m < arr[i]) {
			m = arr[i];
			m_index = i;
		}
	}
	if (m_index == 6 || m_index == 9) {
		if((arr[6] + arr[9]) % 2==0)
			cout << (arr[6]+arr[9]) / 2 << endl;
		else
			cout << ((arr[6] + arr[9]) / 2)+1 << endl;
	}
	else
		cout << m << endl;
	return 0;
}