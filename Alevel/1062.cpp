#include <iostream>
#include <list>

using namespace std;

class stu {
public:
	int talent, virtue, sum;
	long id;
	static int num;
	stu(long id, int t, int v): id(id), talent(t), virtue(v) {sum = t + v; num++;}
};

int stu::num = 0;

bool operator < (const stu& a, const stu& b) {
	if (a.sum < b.sum) return true;
	if (a.sum > b.sum) return false;
	else if (a.virtue < b.virtue) return true;
	else if (a.virtue > b.virtue) return false;
	else if (a.id < b.id) return false;
	else return true;
}

int main() {
	ios::sync_with_stdio(false);
	int n, low, high;
	cin >> n >> low >> high;
	list<stu> sage, noble, fool, small;
	int talent, virtue;
	long id;
	while(n--) {
		cin >> id >> virtue >> talent;
		if ( talent >= low && virtue >= low) {
			if (talent >= high && virtue >= high) {
				sage.push_back(stu(id, talent, virtue));
			}
			else if (virtue >= high) {
				noble.push_back(stu(id, talent, virtue));
			}
			else if (virtue >= talent) {
				fool.push_back(stu(id, talent, virtue));
			}
			else small.push_back(stu(id, talent, virtue));
		}
	}
	sage.sort();
	noble.sort();
	fool.sort();
	small.sort();
	sage.reverse();
	noble.reverse();
	fool.reverse();
	small.reverse();
	cout << stu::num << endl;
	list<stu>::iterator iter;
	for( iter = sage.begin(); iter!=sage.end(); iter++) {
		cout << iter->id << ' ' << iter->virtue << ' ' << iter->talent << '\n';
	}
	for( iter = noble.begin(); iter!=noble.end(); iter++) {
		cout << iter->id << ' ' << iter->virtue << ' ' << iter->talent << '\n';
	}
	for( iter = fool.begin(); iter!=fool.end(); iter++) {
		cout << iter->id << ' ' << iter->virtue << ' ' << iter->talent << '\n';
	}
	for( iter = small.begin(); iter!=small.end(); iter++) {
		cout << iter->id << ' ' << iter->virtue << ' ' << iter->talent << '\n';
	}
	return 0;
}