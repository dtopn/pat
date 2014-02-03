//add will overflow
// use long long for 64bit integer
#include <iostream>
#include <climits>
#include <cstdio>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long long a, b, c;
	long long temp;
	int n;
	cin >> n;
	bool flag;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		temp = a + b;
		if (a < 0 && b < 0 && a < LLONG_MIN - b) flag = false;
		else if (a > 0 && b > 0 && a > LLONG_MAX - b) flag = true;
		else if (a + b > c) flag = true;
		else flag = false;
		if (flag) printf("Case #%d: true\n", i + 1);
		else printf("Case #%d: false\n", i + 1);
	}

	return 0;
}