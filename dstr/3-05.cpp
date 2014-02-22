//Using STL is just like cheating
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	typedef vector<int> vi;
	vi a;
	int k, temp;
	cin >> temp;
	k = temp;
	cin >> temp;
	while (temp >= 0) {
		a.push_back(temp);
		cin >> temp;
	}
	vi::reverse_iterator iter;
	for (iter = a.rbegin(); iter != a.rend(); iter++) {
		k--;
		if (!k) break;
	}
	if (iter != a.rend()) cout << *iter;
	else cout << "NULL\n";

	return 0;
}