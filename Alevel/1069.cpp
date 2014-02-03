//Check if the difference is 6174 or 0 then stop the program
//Note that if the original input is 6174, it is required to output a line, so instead of using while condition, a do while condition is preferred.
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n;
char a, b;
int a1, a2, a3;
int ab, ac, aj, bb, bc, bj;

int max(int a, int b) {
	return a >= b ? a : b;
}

int main() {
	int num;
	cin >> num;
	vector<int> vint;
	do
	{
		vint.clear();
		vint.push_back(num % 10); num /= 10;
		vint.push_back(num % 10); num /= 10;
		vint.push_back(num % 10); num /= 10;
		vint.push_back(num % 10); num /= 10;
		sort(vint.begin(), vint.end());
		cout << vint[3] << vint[2] << vint[1] << vint[0];
		cout << " - ";
		cout << vint[0] << vint[1] << vint[2] << vint[3];
		cout << " = ";
		num = vint[3] * 1000 + vint[2] * 100 + vint[1] * 10 + vint[0];
		num -= vint[0] * 1000 + vint[1] * 100 + vint[2] * 10 + vint[3];
		cout << num / 1000 << num / 100 % 10 << num /10%10<< num %10;
		cout << endl;
	
	} while (num && num != 6174);
	
	return 0;
}