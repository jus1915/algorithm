#include<iostream>
#include<stdio.h>
using namespace std;
int main(void) {
	int a, b, v, day;
	int day=0;
	cin >> a >> b >> v;
	if ((v - a) % (a - b) == 0)
		day = (v - a) / (a - b)+1;
	else
		day= (v - a) / (a - b) + 2;
	printf("%d", day);
	return 0;
}