#include<iostream>
using namespace std;
long long dp[1000001];
void fibonacci(int p);
int main(void) {
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}
