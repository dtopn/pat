//simply use map
#include <map>
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	typedef map<int, int> mii;
	mii a;
	int m, n;
	long temp;
	cin >> m>> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> temp;
			a[temp]++;			
		}
	}
	int max, color;
	max = 0;
	for (mii::iterator iter = a.begin(); iter != a.end(); iter++) {
		if (iter->second > max) max = iter->second, color = iter->first;
	}
	cout << color;
	return 0;
}