//Do not forget to decrease the index of the dynamic array
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long n, m, temp, query;
	typedef map<long, int> mapper;
	vector<mapper> all;

	cin >> n;
	mapper set;
	while (n--) {
		set.clear();
		cin >> m;
		while (m--) {
			cin >> temp;
			set[temp]++;
		}
		all.push_back(set);
	}
	cin >> query;
	int a, b;
	int comm, total;
	while (query--) {
		cin >> a >> b;
		a--; b--;
		total = all[a].size();
		comm = 0;
		mapper::iterator iter;
		for (iter = all[b].begin(); iter != all[b].end(); iter++) {
			if (all[a].find(iter->first) == all[a].end()) {
				total++;
			}
			else comm++;
		}
		double percent = 100.0 * comm / total;
		cout.setf(ios::fixed, ios::floatfield);
		cout.precision(1);
		cout << percent << '%' << endl;
	}
	return 0;
}