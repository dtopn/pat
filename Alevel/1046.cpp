//Be cautious about the index of the array
#include <iostream>

using namespace std;

int a[100002];

int main() {
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n;
	int temp;
	for (int i = 1; i <= n; i++) {
		cin >> temp;
		a[i] = temp + a[i - 1];
	}
	cin >> m;
	int da, db;
	int fw, rv;
	for (int i = 0; i < m; i++) {
		cin >> da >> db;
		if (da < db) da ^= db ^= da ^= db;
		fw = a[da - 1] - a[db - 1];
		rv = a[n] - fw;
		cout << (fw < rv ? fw : rv) << endl;
	}
	return 0;
}