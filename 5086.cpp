#include<iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 2; n != 1; i++) {
		while(n%i==0){
			n = n / i;
			cout << i << endl;
		}
	}
	return 0;
}