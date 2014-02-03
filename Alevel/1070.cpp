//Sort them according to unit price and that's all
//If they are equal in unit price
//If the market demand is larger than the supply ability
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class goods{
public:
	double unit;
	double unitPrice;
	double totalPrice;
	goods(double unit, double total) : unit(unit), totalPrice(total) { unitPrice = (double)total / unit; }
	friend int operator < (const goods a, const goods b);
};
int operator < (const goods a, const goods b) {
	return a.unitPrice < b.unitPrice ? 1 : 0;
}


int main() {
	int n;
	double cap;
	cin >> n >> cap;
	typedef vector<goods> vg_t;
	vg_t vg;

	double input[1001][2];
	double temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		input[i][0] = temp;
	}
	for (int i = 0; i < n; i++) {
		cin >> temp;
		input[i][1] = temp;
	}
	for (int i = 0; i < n; i++) {
		vg.push_back(goods(input[i][0], input[i][1]));
	}
	sort(vg.rbegin(), vg.rend());
	double supp = 0;
	double sum = 0;
	for (vg_t::iterator iter = vg.begin(); iter != vg.end() && supp < cap; iter++) {
		if (supp + iter->unit > cap) {
			sum += (double)(cap - supp) * iter->unitPrice;
			supp = cap;
		}
		else {
			sum += (double)iter->totalPrice;
			supp += iter->unit;
		}
	}
	cout.precision(2); cout.setf(ios::fixed, ios::floatfield);
	cout << sum << endl;
	return 0;
}
