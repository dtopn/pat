//wierd last check poitn wrong
#include <iostream>

using namespace std;

int a[100001], b[1000001], s[200001];
int main() {
	ios::sync_with_stdio(false);
	long n;
	cin >> n;

	long size = 2 * n;

	int t;
	for (long i = 0; i < n; i++) { cin >> t; a[i] = t; }
	for (long i = 0; i < n; i++) { cin >> t; b[i] = t; }

	long i, j; i = j = 0;
	long k = 0;
	while (i < n && j < n) {
		if (a[i] <= b[j]) {
			s[k] = a[i];
			t = a[i++];
			while (i < n && t - a[i] == 0) i++, size--;
			while (j < n && t - b[j] == 0) j++, size--;
		}
		else {
			s[k] = b[j];
			t = b[j++];
			while (j < n && t - b[j] == 0) j++, size--;
		}
		k++;
	}
	while (i < n) s[k++] = a[i++];
	while (j < n) s[k++] = b[j++];
	cout << s[(size + 1) / 2 -1];
	return 0;
}