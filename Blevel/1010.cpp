/*
 * 使用了stringstream的str函數
 * ss.str() 返回 string類型的ss裡面的內容
 * ss.str(const string&) 據說這個可以設置裡面的內容
0	答案错误	0	620	0/12
1	答案错误	0	790	0/4
2	答案错误	0	780	0/3
3	答案错误	0	750	0/3
4	答案错误	0	750	0/3
 */

#include <iostream>
#include <string>

using namespace std;

int main () {
	int coeffi, expo;
	int flag = 0;
	while ( cin >> coeffi >> expo ) {
		if (coeffi && expo) {
			if (flag)	cout << " ";
			else flag = 1;
			cout << coeffi * expo << " " << expo - 1;
		} 
	}
	if (!flag) cout << "0 0";
	return 0;
}

/*

 */
