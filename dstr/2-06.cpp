#include <iostream>

using namespace std;

int main() {
	long digi[100001]; //* 100000
	long A, N;
	cin >> A >> N;
	if ( !A || !N ) {
		cout << 0;
		return 0;
	}
	for ( long i = 0; i < N; i++ ) {
		digi[i]     += A * (N - i);
		digi[i + 1] =  digi[i] / 10;
		digi[i]     %= 10;
	}
	if (digi[N]) cout << digi[N]; //*
	for ( long i = N - 1 ; i >= 0; i--) {
		cout << digi[i];
	}
	return 0;
}
