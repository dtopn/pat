//Test your program with following inputs and correct errors
//5 0.000 0
//5 001200 0.0012300

#include <iostream>
#include <string>

using namespace std;

class parse {
public:
	string str;
	int adot;
	parse(int, string);
};

parse::parse(int n, string a) {
	while (a[0] == '0' && a.length() > 1 && a[1] == '0') a.erase(0, 1);
	if (a[0] == '0' && a.length() > 1 && a[1] != '.') a.erase(0, 1);
	adot = a.find('.');
	if (adot == string::npos) { //int
		if (a[0] == '0' && a.length() == 1) adot = 0;
		else adot = a.length();
	}
	else if (adot == 1 && a[0] == '0') {//0.xx
		a.erase(0, 2);
		adot = a.find_first_not_of('0');
		if (adot == string::npos) {//0.00
			adot = 0; a = "0";
		}
		else {
			a.erase(0, adot);
			adot = -adot;
		}
	}
	else if (a[0] == '0' && a.length() == 1) adot = 0;
	else {
		a.erase(adot, 1);
	}
	while (a.length() < n) a.push_back('0');
	string temp;
	for (int i = 0; i < n; i++) {
		temp.push_back(a[i]);
	}
	temp += "*10^";
	str = temp;
	temp.clear();
}

int main() {
	string a, b;
	int n;
	cin >> n >> a >> b;
	int adot, bdot;

	parse pa(n, a);
	parse pb(n, b);
	a = pa.str;
	b = pb.str;
	adot = pa.adot;
	bdot = pb.adot;
	if (a == b && adot == bdot) {
		cout << "YES" << ' ' << "0." << a << adot;
	}
	else cout << "NO" << ' ' << "0." << a << adot << ' ' << "0." << b << bdot;
	return 0;
}