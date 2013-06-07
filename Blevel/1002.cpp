/*
0	答案正确	0	740	12/12
1	答案正确	0	750	1/1
2	答案正确	0	630	1/1
3	答案正确	0	790	2/2
4	答案正确	0	790	2/2
5	答案正确	0	710	2/2
 */

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void print(int num) {
	const char* a[10] = {
			"ling", "yi", "er", "san", "si", "wu", 
			"liu", "qi", "ba", "jiu"};
	cout << a[num];
}

int main() {
	char buff;
	int sum = 0;
	int ge, shi, bai;
	while ( (buff = getchar()) != 10 ) {
		sum += buff - '0';
	}
	if (!sum) {
		cout << "ling"; return 0;
	}
	int temp = sum;
	ge = temp % 10;
	temp /= 10;
	shi = temp % 10;
	temp /= 10;
	bai = temp;
	if (bai) {
		print(bai);
		cout << ' ';
	}
	if (bai || shi) {
		print(shi);
		cout << ' ';
	}
	print(ge);
	return 0;
}

/*
1002. 写出这个数 (20)

时间限制
400 ms
内存限制
32000 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
 */
