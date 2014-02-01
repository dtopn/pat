//what should I say ..
#include <iostream>
#include <string.h>

using namespace std;

int i, j, k;
int n1, n2;

int a[2001], b[2001], s[2001], p[4001];
int input[2001];
int main() {
	ios::sync_with_stdio(false);
	memset(a, 0, 2001);
	memset(b, 0, 2001);
	memset(s, 0, 2001);
	memset(p, 0, 4001);
	cin >> n1;
	int temp = n1;
	for (i = 0; i < n1; i++) {
		cin >> temp;
		input[i] = temp;
		cin >> temp;
		a[temp + 1000] = input[i];
	}
	cin >> n2;
	for (i = 0; i < n2; i++) {
		cin >> temp;
		input[i] = temp;
		cin >> temp;
		b[temp + 1000] = input[i];
	}
	//calc
	for (i = 0; i < 2001; i++) {
		s[i] = a[i] + b[i];
	}
	for (i = 0; i < 2001 ; i++) {
		for (j = 0; j < 2001; j++) {
			p[i + j] += a[i] * b[j];
		}
	}
	//output
	bool flag;
	flag = false;
	for (i = 4001; i >= 0; i--) {
		if (p[i]) {
			if (!flag) {
				cout << p[i] << ' ' << i - 2000;
				flag = true;
			}
			else cout << ' ' << p[i] << ' ' << i - 2000;
		}
	}
	if (!flag) cout << "0 0";
	cout << endl;

	flag = false;
	for (i = 2001; i >=0; i--) {
		if (s[i]) {
			if (!flag) {
				cout << s[i] << ' ' << i - 1000;
				flag = true;
			}
			else cout << ' ' << s[i] << ' ' << i - 1000;
		}
	}
	if (!flag) cout << "0 0";
	cout << endl;

	return 0;
}