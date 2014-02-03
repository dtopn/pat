//linear lookup table
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string a, b;
	getline(cin, a);
	getline(cin, b);
	int del[256];
	memset(del, -1, sizeof(del));
	for (int i = 0; i < b.size(); i++) {
		del[b[i]] = 0;
	}
	for (int i = 0; i < a.size(); i++) {
		if (del[a[i]] != 0) cout << a[i];
	}


	return 0;
}