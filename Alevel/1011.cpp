//Type faster
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class game {
public:
	double rate;
	char type;
	game(double rate, char type) :rate(rate), type(type) {}
	int operator< (const game &a) const { return rate < a.rate; }
};
int main() {
	ios::sync_with_stdio(false);
	typedef vector<game> vi;
	vi a;
	double temp;
	double sum = 1.0;
	cin >> temp; a.push_back(game(temp, 'W'));
	cin >> temp; a.push_back(game(temp, 'T'));
	cin >> temp; a.push_back(game(temp, 'L'));
	sort(a.rbegin(), a.rend());
	sum *= a.begin()->rate; cout << a.begin()->type << ' ';
	a.clear();
	cin >> temp; a.push_back(game(temp, 'W'));
	cin >> temp; a.push_back(game(temp, 'T'));
	cin >> temp; a.push_back(game(temp, 'L'));
	sort(a.rbegin(), a.rend());
	sum *= a.begin()->rate; cout << a.begin()->type << ' ';
	a.clear();
	cin >> temp; a.push_back(game(temp, 'W'));
	cin >> temp; a.push_back(game(temp, 'T'));
	cin >> temp; a.push_back(game(temp, 'L'));
	sort(a.rbegin(), a.rend());
	sum *= a.begin()->rate; cout << a.begin()->type << ' ';
	a.clear();

	sum *= .65;
	sum -= 1.0;
	sum *= 2.0;
	printf("%.2f", sum);

	return 0;
}