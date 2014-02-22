//Beware of the range of the base
//When n == 0 output Yes directly
#include <iostream>
#include <list>

using namespace std;

long N, b;
int digi;

int main () {
	ios::sync_with_stdio(false);
	cin >> N >> b;
	int n = N;
	if (!n) {cout << "Yes\n0"; return 0;}
	list<long> rev, fwd;
	while (n) {
		rev.push_back(n%b);
		n /= b;
	}
	list<long>::reverse_iterator iter = rev.rbegin();
	for( ;iter != rev.rend(); iter++) {
		fwd.push_back(*iter);
	}
	if (fwd == rev) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	iter = rev.rbegin();
	cout << *iter++;
	for( ;iter != rev.rend(); iter++) {
		cout << ' ' << *iter;
	}
	return 0;
}