/*

*/
#include <iostream>

using namespace std;

int main() {
	long a, b, c;
	int t;
	cin >> t;
	int i = t;
	while (i--) {
		cin >> a >> b >> c;
		if (a + b > c)
			cout << "Case #" << t - i << ": true\n";
		else
			cout << "Case #" << t - i << ": false\n";
	}
	return 0;
}
