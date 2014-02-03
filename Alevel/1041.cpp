//type faster
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, temp;
	int num[10001];
	int bet[100001];
	cin >> N;

	memset(num, -1, sizeof(num));

	int n = N;
	while (n--) {
		cin >> temp;
		bet[n] = temp;
		num[temp]++;
	}
	n = N;
	while (n--) {
		if (num[bet[n]] == 0) {
			cout << bet[n];
			break;
		}
	}
	if (-1 == n) cout << "None";
	return 0;
}