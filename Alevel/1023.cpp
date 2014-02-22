//It may overflow and produces a 21 digts number
#include <iostream>
#include <cstring>
#include <string>
#include <list>

using namespace std;

int main() {
	int a[10], b[10];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	string str;
	cin >> str;
	int carry = 0;
	int digit;
	list<int> input, output;
	for (int i = 0; i < str.length(); i++) {
		input.push_back(str[i] - '0');
		a[str[i] - '0']++;
	}
	for (list<int>::reverse_iterator iter=input.rbegin(); iter != input.rend(); iter++) {
		digit = (*iter * 2 +carry) % 10;
		output.push_back(digit);
		carry = (*iter * 2 +carry) / 10;
		b[digit]++;
	}
	bool flag = true;
	for (int i = 0; i < 10; i++) {
		if (a[i] == b[i]) flag &= true;
		else flag &= false;
	}
	if( flag == true && carry == 0) {
		cout << "Yes\n";
	}
	else cout << "No\n";
	if (carry) cout << carry;
	for (list<int>::reverse_iterator iter=output.rbegin(); iter != output.rend(); iter++) {
		cout << *iter;
	}
	return 0;
}