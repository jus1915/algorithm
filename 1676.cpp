#include<iostream>
using namespace std;
int main(void) {
	int n;
	int cnt_2 = 0, cnt_5 = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int k = i;
		while(k%2==0){
			cnt_2++;
			k /= 2;
		}
		while (k % 5 == 0) {
			cnt_5++;
			k /= 5;
		}
	}
	if (cnt_2 >= cnt_5)
		cout << cnt_5 << endl;
	else
		cout << cnt_2 << endl;
	return 0;
}