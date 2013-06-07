/*
 *這道題目大概就是把所有鏈接點放到一個矩陣中去，然後計算這個矩陣的n次方
 *這個矩陣是對稱的，但是為了避免重複計算還是不對稱好，因此c1 < c2：
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, c1, c2;
	long int m;
	cin << n << m << c1 << c2;
	int team[500];
	for (int i = 0; i < n; i++) {
		cin << team[i];
	}
	return 0;
}

/*
 *
 */
