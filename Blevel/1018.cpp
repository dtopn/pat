//Enumerate every case. That's it
#include <iostream>
#include <string>

using namespace std;

int n;
char a, b;
int a1, a2, a3;
int ab, ac, aj, bb, bc, bj;

int max(int a, int b) {
	return a >= b ? a : b;
}

int main() {
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == b) a2++;
		if (a == 'B' && b == 'J') a3++, bj++;
		if (a == 'C' && b == 'J') a1++, ac++;
		//if (a == 'J' && b == 'J')
		if (a == 'B' && b == 'C') a1++, ab++;
		//if (a == 'C' && b == 'C')
		if (a == 'J' && b == 'C') a3++, bc++;
		//if (a == 'B' && b == 'B')
		if (a == 'C' && b == 'B') a3++, bb++;
		if (a == 'J' && b == 'B') a1++, aj++;
	}
	cout << a1 << ' ' << a2 << ' ' << a3 << endl;
	cout << a3 << ' ' << a2 << ' ' << a1 << endl;
	int maxa, maxb;
	maxa = max(max(ab, aj), ac);
	maxb = max(max(bb, bj), bc);
	if (ab - maxa == 0) cout << 'B';
	else if (ac - maxa == 0) cout << 'C';
	else if (aj - maxa == 0) cout << 'J';
	cout << ' ';
	if (bb - maxb == 0) cout << 'B';
	else if (bc - maxb == 0) cout << 'C';
	else if (bj - maxb == 0) cout << 'J';
	return 0;
}