#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int gcd(int a, int b);
vector<int> v;
int main(void) {
	int n;
	int arr[100] = {};
	int G;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	G = arr[1] - arr[0];
	for (int i = 2; i < n; i++) {
		G = gcd(G, arr[i] - arr[i - 1]);
	}
	for(int i=2;i*i<=G;i++){
		if (G % i == 0) {
			v.push_back(i);
			v.push_back(G / i);
		}
	}
	v.push_back(G);
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
	return 0;
}
int gcd(int a, int b) {
	if (a % b == 0)
		return b;
	return gcd(b,a%b);
}