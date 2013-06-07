/*

*/

#include <vector>
#include <iostream>

using namespace std;

int main() {
	long int a, b;
	cin >> a >> b;
	long int out(a + b);
	out < 0? cout << '-', out = -out : out ;
	vector<int> output;
	if (!out) { cout << 0; return 0; }
	while (out) {
		int temp;
		temp = out % 1000;
		output.push_back(temp);
		out /= 1000;
	}
	vector<int>::reverse_iterator iter;
	for (iter = output.rbegin(); iter != output.rend(); iter++) {
		if (iter != output.rbegin()) {
				cout << ',';
			cout.fill('0'); //added
			cout.width(3); //added
		}
		cout << *iter;
	}
	return 0;
}

/*

*/
