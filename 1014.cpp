#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main() {
	string str1, str2, str3, str4;
	cin >> str1 >> str2 >> str3 >> str4;
	string::const_iterator iterstr, iterstr2;
	int posi1[255], posi2[255], posi[255];
	for (int i = 0; i < 255; i++)
		posi1[i] = posi2[i] = posi[i] = -1;

	for (int i = 0; i < str1.length(); ++i) {
		if (posi1[(int) str1[i]] - -1 == 0) {
			posi1[(int) str1[i]] = i; cout << str1[i]; }
	}
	for (int i = 0; i < str2.length(); ++i) {
		if (posi2[(int) str2[i]] - -1 == 0) posi2[str2[i]] = i;
	}
	for (int i = 0; i < 255; ++i) {
		if (posi1[i] != -1 && posi2[i] != -1)
			posi[i] = max(posi1[i], posi2[i]);
	}
	map<int, char> letter;
	for (int i = '0'; i <= '9'; ++i) {
		if (posi[i] != -1) letter[(int) posi[i]] = i;
	}
	for (int i = 'A'; i <= 'N'; ++i) {
		if (posi[i] != -1) letter[(int) posi[i]] = i;
	}
	map<int, char>::const_iterator iterm = letter.begin();
	while (!isupper(iterm->second)) ++iterm;
	int dayOfWeek = iterm->second - 'A';
	const char *weekDays[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	cout << weekDays[dayOfWeek] << " ";

	iterm = letter.begin();
	while (!isupper(iterm->second) && !isdigit(iterm->second)) ++iterm;
	while (!isupper(iterm->second) && !isdigit(iterm->second)) ++iterm;

	//for (; posiHour == string::npos; iterstr++) {
	//	if ((isalnum(*iterstr) && *iterstr <= 'N') ) {
	//		posiHour = str2.find_first_of(*iterstr, posiIn2 + 1);
	//	}
	//}
	//for (; posiHour == string::npos; iterstr++) {
	//	if ((isupper(*iterstr) && *iterstr <= 'N') | isdigit(*iterstr) ) {
	//		posiHour = str2.find_first_of(*iterstr, posiIn2 + 1);
	//	}
	//}
	//int hour;
	//if (isdigit(str2.at(posiHour)) ) hour = str2.at(posiHour) - '0';
	//else hour = 10 - 'A' + str2.at(posiHour);
	//if (hour < 10) cout << "0" << hour;
	//else cout << hour;
	//cout << ":";

	//iterstr = str3.begin();
	//for (; posiMinute == string::npos; iterstr++) {
	//	if (isalpha(*iterstr)) {
	//		posiMinute = str4.find_first_of(*iterstr);
	//	}
	//}
	//iterstr = str4.begin();
	//for (; posiMinute == string::npos; iterstr++) {
	//	if (isalpha(*iterstr)) {
	//		posiMinute = str3.find_first_of(*iterstr);
	//	}
	//}
	//if (posiMinute < 10)
	//	cout << '0' << posiMinute;
	//else cout << posiMinute;*/
	return 0;
}
