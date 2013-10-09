#include <iostream>

#include <string>
#include <list>
#include <sstream>

using namespace std;

string inline process (int i) {
	string temp;
	temp.clear();
	stringstream strm;
	strm << i << '.';
	temp += strm.str();
	while (i != 1) {
		if (i % 2) {
			i = (i * 3) + 1; i /= 2;
			stringstream strm;
			strm << i << '.';
			temp += strm.str();
		}
		else {
			i /= 2;
			stringstream strm;
			strm << i << '.';
			temp += strm.str();
		}
	}
	return string(temp);
}

int main (int argc, char* argv[])
{
	int i;
	list<string> lstr;
	lstr.clear();
	cin >> i;
	int input;
	while (i--) {
		cin >> input;
		lstr.push_back(process(input));
		list<string>::iterator iter = lstr.begin();
		while (*iter != lstr.back()) {
			size_t posi;
			if (iter->length() >= lstr.back().length()) {
				posi = iter->find(lstr.back());
				if (posi != string::npos) {
					lstr.pop_back();
					break;
				}
				else iter++;
			}
			else {
				posi = lstr.back().find(*iter);
				if (string::npos != posi) lstr.erase(iter++);
				else iter++;
			}
		}
	}
	list <int> lint;
	for (list<string>::iterator iter = lstr.begin(); iter != lstr.end(); iter++) {
		stringstream sstrm;
		for (string::iterator siter = iter->begin(); *siter != '.'; siter++) {
			sstrm << *siter;
		}
		int i;
		sstrm >> i; lint.push_back(i);
	}
	lint.sort();
	list<int>::reverse_iterator ri = lint.rbegin();
	cout << *ri;
	ri++;
	for (; ri != lint.rend(); ri++) {
		cout << ' ' << *ri;
	}
	return 0;
}
