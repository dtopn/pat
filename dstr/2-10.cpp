#include <iostream>

using namespace std;

main() {
	int D, P;
	cin >> D >> P;
	P = P / 2 + 1;
	if (P == 2) cout << D - P + 1;
	else if (D - P) cout << D - P;
	else cout << 1;
	return 0;
}
