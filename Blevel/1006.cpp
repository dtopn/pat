/*
 *测试点

测试点	结果	用时(ms)	内存(kB)	得分/满分
0	答案正确	0	780	4/4
1	答案正确	0	790	4/4
2	答案正确	0	790	1/1
3	答案正确	0	790	1/1
4	答案正确	0	790	1/1
5	答案正确	0	780	1/1
6	答案正确	0	790	1/1
7	答案正确	0	790	1/1
8	答案正确	0	750	1/1
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
	int input;
	int ge, shi, bai;
	cin >> input;
	int temp = input;
	ge = input % 10;
	input /= 10;
	shi = input % 10;
	bai = input /= 10;
	for (int i = 0; i < bai; i++) cout << 'B';
	for (int i = 0; i < shi; i++) cout << 'S';
	for (int i = 0; i < ge ; i++) cout << i + 1;
	//if (ge == 0) cout << ge;

	return 0;
}
/*
 *1006. 换个格式输出整数 (15)

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
让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。

输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。

输出格式：每个测试用例的输出占一行，用规定的格式输出n。

输入样例1：
234
输出样例1：
BBSSS1234
输入样例2：
23
输出样例2：
SS123
 */
