#include <iostream>
#include <cmath>

using namespace std;

main() {
	int N;
	cin >> N;
	if ( N - 1 == 0 ) {
		cout << "0.00000";
		return 0;
	}
	double numb[10000];
	double out = 0;
	for (int i = 0; i < N; i++) {
		cin >> numb[i];
		out += numb[i];
	}
	double avg = out / N;
	out = 0;
	for (int i = 0; i < N; i++) {
		out += (numb[i] - avg) * (numb[i] - avg);
	}
	out /= N; out = sqrt(out);
	cout.precision(5); cout.setf(ios::fixed); cout << out; //*
	return 0;
}
