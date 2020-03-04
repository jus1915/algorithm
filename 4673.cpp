#include<iostream>
using namespace std;
bool arr[10001];
int main(void) {
	for (int i = 1; i < 10; i++) {
		arr[i + i] = true;
	}
	for (int i = 10; i < 100; i++) {
		arr[i + i / 10 + i % 10] = true;
	}
	for (int i = 100; i < 1000; i++) {
		arr[i + i / 100 + ((i % 100) / 10) + (i % 10)] = true;
	}
	for (int i = 1000; i < 10000; i++) {
		arr[i + i / 1000 + ((i % 1000) / 100) + ((i % 100) / 10) + (i % 10)] = true;
	}
	for (int i = 1; i <= 10000; i++) {
		if (!arr[i])
			cout << i << "\n";
	}
	return 0;
}