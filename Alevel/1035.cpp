//did some review for c++ language
#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

class team {
public:
	string name;
	string pass;
	static int num;
	static int modify;
	bool flag;
	team(string, string);
	friend ostream& operator <<(ostream&, team&);
};
int team::num = 0;
int team::modify = 0;
team::team(string str1, string str2) {
	name = str1;
	flag = false;
	for (size_t i = 0; i < str2.size(); i++) {
		switch (str2[i]) {
		case '1': flag = true; str2[i] = '@'; break;
		case '0': flag = true; str2[i] = '%'; break;
		case 'l': flag = true; str2[i] = 'L'; break;
		case 'O': flag = true; str2[i] = 'o'; break;
		default: break;
		}
	}
	if (flag) modify++;
	num++;
	name = str1;
	pass = str2;
}
ostream& operator<<(ostream& out, team& a) {
	out << a.name << ' ' << a.pass << endl;
	return out;
}

template <typename T>
void print(T& a) {
	cout << a;
}

int main() {
	ios::sync_with_stdio(false);
	int N, n;
	cin >> N; n = N;
	string str1, str2;
	list<team> a, b;
	while (n--) {
		cin >> str1 >> str2;
		a.push_back(team(str1, str2));
		if (a.back().flag) b.push_back(a.back());
	}
	if (team::modify) {
		cout << team::modify << endl;
		for_each(b.begin(), b.end(), print);
	}
	else if (team::num - 1 == 0) {
		cout << "There is 1 account and no account is modified" << endl;
	}
	else cout << "There are " << team::num << " accounts and no account is modified" << endl;
	return 0;
}