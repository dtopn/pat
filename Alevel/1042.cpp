//indices really matters
#include <iostream>
#include <cstring>

using namespace std;

inline void output(int a)  {
	if (a == 53) cout << "J2";
	else if (a == 52) cout << "J1";
	else {
		switch ((a) / 13) {
		case 0:cout << "S"; break;
		case 1:cout << "H"; break;
		case 2:cout << "C"; break;
		default: cout << "D"; break;
		}
		cout << a % 13 + 1;
	}
}

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int temp;
	int prv[54], now[54], deck[54];
	for (int i = 0; i < 54; i++) {
		prv[i] = i;
		cin >> temp;
		deck[i] = temp - 1;
	}
	while (n--) {
		for (int i = 0; i < 54; i++) {
			now[deck[i]] = prv[i];
		}
		memcpy(prv, now, sizeof(now));
	}
	for (int i = 0; i < 53; i++) {
		output(now[i]);
		cout << ' ';
	}
	output(now[53]);
	return 0;
}