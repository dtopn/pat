/*
 *
 */

#include <iostream>

using namespace std;

int main() {
	
	int prv, now;
	int count;
	int first = 1;

	cin >> count;
	int sum = 0;
	prv = 0;
	for (int i = 0; i < count; i++) {
		sum += 5;
		cin >> now;
		now > prv? sum += (now - prv) * 6 : sum += (prv - now) * 4;
		prv = now;
	}
	cout << sum;
	
	return 0;
}
