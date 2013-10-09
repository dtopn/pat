#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(long input, vector<long>& primi);


int main() {
	vector<long> primi;
	primi.push_back(2);
	long temp = 1;
	for (int i = 1; i < 10000; i++) {
		do temp += 2;
		while (!isPrime(temp, primi));
	}
	size_t n, m;
	cin >> n >> m;
	size_t i = n - 1;
	for(; i < m - 1; i++) {
		cout << primi[i];
		if ((i - n + 2) % 10) cout << " ";
		else cout << endl;
	}
	cout << primi[i];
	return 0;
}

//dynamicaly revised prime vector
bool isPrime(long input, vector<long>& primi) {
	vector<long>::iterator iterl = primi.begin();
	for (; *iterl <= sqrt(input) && iterl != primi.end(); iterl++) {
		if (input % *iterl == 0) return false;
		else continue;
	}
	primi.push_back(input);
	return true;
}
