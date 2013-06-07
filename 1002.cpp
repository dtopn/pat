/*
 *map 的排序是從小到大弱
 */

#include <iostream>
#include <map>

using namespace std;

int main () {
	int count;
	map<int, float> out;

	cin >> count;
	for (int i = 0; i < count; i++) {
		int expo; float coef;
		cin >> expo >> coef;
		out[expo] = coef;
	}
	cin >> count;
	for (int i = 0; i < count; i++) {
		int expo; float coef;
		cin >> expo >> coef;
		out[expo] += coef;
	}
	int num = 0;
	map<int, float>::reverse_iterator iter;
	for (iter = out.rbegin(); iter != out.rend(); iter++) {
		if (iter->second != 0) {
			num += 1;
		}
	}
	int first = 1;
	for (iter = out.rbegin(); iter != out.rend(); iter++) {
		if (first) {
			cout << num; first = 0;
		}
		if (iter->second != 0) {
			cout << ' ' << iter->first << ' ' << iter->second;
		}
	}

	return 0;
}

/*
 *
 */
