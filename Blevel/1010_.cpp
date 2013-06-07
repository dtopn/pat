/*
0	答案正确	0	620	10/10
1	答案错误	0	790	0/2
2	答案正确	0	780	2/2
3	答案正确	0	750	2/2
4	答案正确	0	750	2/2
5	答案正确	20	750	2/2
 */

#include <iostream>
#include <cstdio>
#include <sstream>
#include <string>

#define OUT ' '
char buff;

using namespace std;

long int readnum() {
	long int num = 0;
	long int flag = 1;
	buff == '-' ? flag = -1 , buff = getchar(): flag = 1;
	while (buff - 10 && buff - ' ') {
		num = num * 10 + buff - '0';
		buff = getchar();
	}
	return num * flag;
}

int main () {
	buff = getchar();
	string str, temp;
	long int coeffi, expo;
	long int coeffi_, expo_;
	while (buff - 10) {
		coeffi = readnum();
		buff = getchar();
		expo = readnum();
		/*if (buff - 10) {
			coeffi_ = readnum();
			buff = getchar();
			expo_ = readnum();
		}*/
		if (expo * coeffi) {
			stringstream strg;
			strg << coeffi * expo << OUT;
			strg << expo - 1 << OUT;
			strg >> temp;
			str += temp;	
		}
		if (!expo) {
			stringstream strg;
			strg << coeffi * expo << OUT;
			strg << expo << OUT;
			strg >> temp;
			str += temp;	
		}
		else {
			str.erase(str.length(), 1);
		}
		if (buff - 10)
		buff = getchar();
		
	}
	if (str[str.length() - 1] == OUT) 
			str[str.length() - 1] = 0;
	cout << str;
	return 0;
}

/*

 */
