//same as 1016 Blevel
#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string str1, str2, str3, str4;
	cin >> str1 >> str2 >> str3 >> str4;
	int i;
	for (i = 0; i < min(str1.length(), str2.length()); i++) {
		if (isupper(str1[i]) && 
			isupper(str2[i]) && 
			str1[i] - str2[i] == 0 &&
			str1[i] <= 'G')
		{
			const char* weekDay[7] = 
			{"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
			cout << weekDay[str1[i] - 'A'] << ' ';
			i++;
			break;
		}
	}
	for ( ; i < min(str1.length(), str2.length()); i++) {
		if (isupper(str1[i]) && 
			isupper(str2[i]) && 
			str1[i] - str2[i] == 0 &&
			str1[i] <= 'N')
		{
			cout << str1[i] - 'A' + 10 << ':';
			break;
		}
		if (isdigit(str1[i]) && 
			isdigit(str2[i]) && 
			str1[i] - str2[i] == 0)
		{
			cout << '0' << str1[i] - '0' << ':';
			break;
		}
	}
	for (i = 0; i < min(str3.length(), str4.length()); i++) {
		if (isalpha(str3[i]) && 
			isalpha(str4[i]) && 
			str3[i] - str4[i] == 0)
		{
			if (i < 10) cout << '0' << i;
			else cout << i;
			break;
		}
	}
	return 0;
}
