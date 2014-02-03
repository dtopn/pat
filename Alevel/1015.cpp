//Say nothing
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int isPrime(int n) {
	if (1 == n || 0 == n) return 0;
	if (2 == n) return 1;
	for(int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int calc(int n, int d) {
	typedef vector<int> vi;
	vi a;
	int rev = 0;
	int flag;
	flag = isPrime(n);
	while (n) {
		a.push_back(n % d);
		n /= d;
	}
	for (vi::iterator iter = a.begin(); iter != a.end(); iter++) {
		rev = rev * d + *iter;
	}
	flag = flag && isPrime(rev);
	return flag;
}

int main() {
	ios::sync_with_stdio(false);
	int n, d;
	cin >> n;
	while (n >= 0) {
		cin >> d;
		if (calc(n, d)) cout << "Yes\n";
		else cout << "No\n";
		cin >> n;
	}

	return 0;
}