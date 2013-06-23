#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int sign; cin >> sign;

	double a, b;

	int apow, bpow;
	apow = bpow = 0;

	stringstream stg1, stg2;
	string str1, str2;

	cin >> str1 >> str2;
	stg1 << str1; stg2 << str2;
	stg1 >> a; stg2 >> b;

	double temp;
	temp = a;
	for (; temp - 1 >= 0; apow++) temp /= 10;
	temp = b;
	for (; temp - 1 >= 0; bpow++) temp /= 10;
	//cout << apow << bpow;
	a /= pow(10.0, apow);
	b /= pow(10.0, bpow);
	stringstream stga, stgb;
	stga << a; stgb << b;
	stga >> str1; stgb >> str2;
	//TODO: 把字串長度弄出來，超出長度的就是補上0，下面那個判斷有誤
	//TODO: 輸入數字變成浮點的時候貌似有損失 只能保留8數字左右
	str1[1] = str2[1] = '.';
	for (int i = 0; i < 2 + sign; i++) {
		if (!(str1[i] >= '0' && str1[i] <= '9' || str1[i] == '.'))
		str1[i] = '0';
		if (!(str2[i] >= '0' && str2[i] <= '9' || str2[i] == '.'))
		str2[i] = '0';
	}
	cout << str1 << str2 << endl;
	//cout << flag;
	//cin  >> flag;
	string stra, strb;
	stra.erase(); strb.erase();
	for (int i = 0; i < 2 + sign; i++) {
		stra.push_back(str1[i]);
	};
	for (int i = 0; i < 2 + sign; i++) {
		strb.push_back(str2[i]);
	}
	if (apow != bpow || stra != strb ) {
		cout << "NO ";
	}
	else {
		cout << "YES ";
	}
	cout << stra;
	cout << "*10^" << apow;
	cout << " ";
	cout << strb;
	cout << "*10^" << bpow;
	return 0;
}
