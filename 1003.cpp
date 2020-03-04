#include<iostream>
using namespace std;
int zero[40];
int one[40];
void fibonacci(int p);
int main(void) {
    int n;
    cin >> n;
    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        fibonacci(k);
    }
    return 0;
}
void fibonacci(int p) {
    zero[0] = 1;
    zero[1] = 0;
    one[0] = 0;
    one[1] = 1;
    for (int i = 2; i <= p; i++) {
        zero[i] = zero[i - 1] + zero[i - 2];
        one[i] = one[i - 1] + one[i - 2];
    }
    cout << zero[p] << " " << one[p] << endl;
}