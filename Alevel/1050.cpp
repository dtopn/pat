//Map uses binary search tree
//cout << (char)*iter;
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	char c;
	c = getchar();
	string str;
	while ('\n' != c) {
		str.push_back(c);
		c = getchar();
	}
	map<char, int> del;
	c = getchar();
	while ('\n' != c) {
		del[c]++;
		c = getchar();
	}
	string::iterator iter;
	for (iter = str.begin(); iter != str.end(); iter++) {
		if (del.find((char)*iter) == del.end()) cout << (char)*iter;
	}
	cout << '\n';
	return 0;
}