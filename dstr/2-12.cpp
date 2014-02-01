//weird enouph this code cannot pass
#include <list>
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	typedef list<int> li;
	li list1, list2, list;
	int t;
	cin >> t;
	while (-1 != t) {
		list1.push_back(t);
		cin >> t;
	}
	cin >> t;
	while (-1 != t) {
		list2.push_back(t);
		cin >> t;
	}
	if (list1.empty() && list2.empty()) {
		cout << "NULL\n"; 
		return 0;
	}
	li::iterator iter1, iter2;
	iter1 = list1.begin(); iter2 = list2.begin();
	while (iter1 != list1.end() && iter2 != list2.end()) {
		if (*iter1 == *iter2) {
			int temp = *iter1;
			list.push_back(temp);
			while (iter1 != list1.end() && temp == *iter1) iter1++;
			while (iter2 != list2.end() && temp == *iter2) iter2++;
		}
		else if (*iter1 < *iter2) iter1++;
			else iter2++;
	}
	iter1 = list.begin(); 
	if (iter1 == list.end()) { 
		cout << "NULL\n"; 
		return 0;
	}
	cout << *iter1; iter1++;
	for (; iter1 != list.end(); iter1++) cout << ' ' << *iter1;
	return 0;
}