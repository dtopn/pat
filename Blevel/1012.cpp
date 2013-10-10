#include <iostream>

using namespace std;

int main() {
	int i; cin >> i;
	int input;
	int a1 = 0; int a1_flag = 0;
	int a2 = 0; int a2_flag = 1; int a2_has = 0;
	int a3 = 0;
	double a4 = 0; int a4_nu = 0;
	int a5 = 0; int a5_flag = 0;
	while (i--) {
		cin >> input;
		switch (input % 5) {
		case 0: if (input % 2 == 0) a1 += input, a1_flag = 1; break;
		case 1: a2_has = 1; a2 += (a2_flag * input); a2_flag *= -1; break;
		case 2: a3++; break;
		case 3: a4 += input; a4_nu++; break;
		case 4: if (a5_flag) input > a5? a5 = input: a5_flag = 1; else a5_flag = 1, a5 = input; break;
		}
	}
	if (a1_flag) cout << a1; else cout << "N";
	cout << ' ';
	if (a2_has)  cout << a2; else cout << "N";
	cout << " ";
	if (a3)      cout << a3; else cout << "N";
	cout << ' ';
	if (a4_nu) {
		cout.precision(1);
		cout << fixed << a4 / a4_nu;
	}
	else cout << "N";
	cout << " ";
	if (a5_flag) cout << a5; else cout << "N";
	return 0;
}

