#include<iostream>
using namespace std;
int main(void) {
	int arr[4];
	int cnt = 0;
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			cin >> arr[i];
			if (arr[i] == 0)
				cnt++;
		}
		if (cnt == 0)
			cout << "E" << endl;
		else if (cnt == 1) 
			cout << "A" << endl;
		else if (cnt == 2)
			cout << "B" << endl;
		else if (cnt == 3)
			cout << "C" << endl;
		else
			cout << "D" << endl;
		cnt = 0;
	}
	return 0;
}