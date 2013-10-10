#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	string str1, str2, str3, str4;
	cin >> str1 >> str2 >> str3 >> str4;
	string::const_iterator iterstr, iterstr2;
	size_t posiIn, posiIn1, posiIn2, posiHour, posiMinute;
	posiIn2 = posiHour = posiMinute = string::npos;
	vector<char> posi;

	iterstr = str1.begin();
	iterstr2 = str2.begin();
	while (posi.size() != 2) { 
		if (isupper(*iterstr) && isupper(*iterstr2)) {
			posiIn2 = str2.find_first_of(*iterstr );
			posiIn1 = str1.find_first_of(*iterstr2);
			posiIn  = min(posiIn1, posiIn2);
			if (posiIn != string::npos) posi.push_back(posiIn);
			posiIn  = max(posiIn1, posiIn2);
			if (posiIn != string::npos) posi.push_back(posiIn);
		}
		else if (isupper(*iterstr)) {
			posiIn2 = str2.find_first_of(*iterstr );
			if (posiIn2 != string::npos) posi.push_back(posiIn2);
		}
		else if (isupper(*iterstr2)) {
			posiIn1 = str1.find_first_of(*iterstr2);
			if (posiIn1 != string::npos) posi.push_back(posiIn1);
		}
		++iterstr; ++iterstr2;
	}
	iterstr = str2.begin();
	for (; string::npos == posiIn2; iterstr++) { 
		if (isupper(*iterstr)) {
			posiIn2 = str2.find_first_of(*iterstr);
		}
	}
	int dayOfWeek = str2.at(posiIn2) - 'A';
	const char *weekDays[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	cout << weekDays[dayOfWeek] << " ";

	iterstr = str1.begin();
	for (; posiHour == string::npos; iterstr++) {
		if ((isalnum(*iterstr) && *iterstr <= 'N') ) {
			posiHour = str2.find_first_of(*iterstr, posiIn2 + 1);
		}
	}
	for (; posiHour == string::npos; iterstr++) {
		if ((isupper(*iterstr) && *iterstr <= 'N') | isdigit(*iterstr) ) {
			posiHour = str2.find_first_of(*iterstr, posiIn2 + 1);
		}
	}
	int hour;
	if (isdigit(str2.at(posiHour)) ) hour = str2.at(posiHour) - '0';
	else hour = 10 - 'A' + str2.at(posiHour);
	if (hour < 10) cout << "0" << hour;
	else cout << hour;
	cout << ":";

	iterstr = str3.begin();
	for (; posiMinute == string::npos; iterstr++) {
		if (isalpha(*iterstr)) {
			posiMinute = str4.find_first_of(*iterstr);
		}
	}
	iterstr = str4.begin();
	for (; posiMinute == string::npos; iterstr++) {
		if (isalpha(*iterstr)) {
			posiMinute = str3.find_first_of(*iterstr);
		}
	}
	if (posiMinute < 10)
		cout << '0' << posiMinute;
	else cout << posiMinute;
	return 0;
}
