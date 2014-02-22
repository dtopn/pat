//Cheat with STL
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	typedef vector<int> vi;
	vi a;
	int k, temp;
	cin >> temp;
	k = temp;
	while (k--) {
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end());
	vi::iterator iter;
	bool flag = false;
	for (iter = a.begin(); iter != a.end(); iter++) {
		if (flag) cout << ' ' << *iter;
		else {
			flag = true; cout << *iter;
		}

	}

	return 0;
}