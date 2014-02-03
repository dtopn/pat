//if a color accounts for more than half of the pixels, by decresing the count when encounters a diffrent color the most color can prevail in this test
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n, m;
	int temp;
	int color, count;
	color = -1, count = 0;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cin >> temp;
			if (0 == count) { color = temp; }
			else if (temp - color == 0) count++;
			else count--;
		}
	}
	cout << color;
	return 0;
}