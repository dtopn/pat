//Utilize the library, you will benefit a lot
//isalnum isupper islower
#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	char c = 0;

	typedef map<string, int> msi;
	msi mots;
	string tempStr;
	int max = 0;
	while (c != '\n') {
		cin.get(c);
		if (isalnum(c)) {
			if (isupper(c)) c = tolower(c);
			tempStr.push_back(c);
		}
		else {
			if (!tempStr.empty()) {
				mots[tempStr]++;
				max = mots[tempStr] > max ? mots[tempStr] : max;
			}
			tempStr.clear();
		}
	}
	for (msi::iterator iter = mots.begin(); iter != mots.end(); iter++) {
		if (iter->second - max == 0) {
			cout << iter->first << ' ' << max;
			break;
		}
	}

	return 0;
}