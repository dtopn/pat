//Input is in base 10 and output in base 13 respectively
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int parse(string str) {
	int num = 0;
	int digit;
	for (int i  = 0 ; i < str.length(); i++) {
		if(isalpha(str[i])) digit = 10 + str[i] - 'A';
		else digit = str[i] - '0';
		num = num * 10 + digit;
	}
	return num;
}

char hexput(int i) {
	if (i >= 10) return 'A'+i - 10;
	else return '0'+i;
}

int main() {
	ios::sync_with_stdio(false);
	string rstr, gstr, bstr;
	int r, g, b;
	int a, b1, c, d, e, f;
	cin >> rstr >> gstr >> bstr;
	r = parse(rstr);
	g = parse(gstr);
	b = parse(bstr);
	cout << '#';
	a = r/13, b1=r%13;
	c = g/13, d=g%13;
	e = b/13, f=b%13;
	cout << hexput(a);
	cout << hexput(b1);
	cout << hexput(c);
	cout << hexput(d);
	cout << hexput(e);
	cout << hexput(f);
	return 0;
}