

#include <iostream>
#include <algorithm>

#include <cassert>

using namespace std;

#define copy(spec, all, line) for (int i = 0; i < 100; i++) spec[line][i] = all[line][i];

#define copy1(spec, all, line1, line2) for (int i = 0; i < 100; i++) spec[line1][i] = all[line2][i];


int main() {
	int total  = 100;
	cin >> total;
	int all[100][100];
	for (int i = 0; i < 100; i++) 
			for (int j = 0; j < 100; j++) 
					all[i][j] = 0;
	for (int i = 0; i < total; i++) {
		cin >> all[i][1];
	}
	for (int i = 0; i < total; i++) {
		int temp = all[i][1];
		int count = 1;
		while (1) {
			if (temp == 1) {
					all[i][0] = count; break; }
			temp % 2 == 1? temp = temp * 3 + 1, temp /= 2 : temp /= 2;
			count ++;
			assert(count <= 100);
			all[i][count] = temp;
		}
	}
	//if == 1 count = 0
	int spec[100][100];
	for (int i = 0; i < 100; i++) 
			for (int j = 0; j < 100; j++) 
					spec[i][j] = 0;
	int num = 1;
	copy(spec, all, 0);
	for (int j = 0; j < total; j++) {
		for (int i = 0; i < num; i++) {
			int posi = 0;
			if (all[j][0] <= spec[i][0]) {
				posi = spec[i][0] - all[j][0] + 1;
				if (all[j][1] == spec[i][posi]) {
					
					//copy1(spec, all, i ,j)
					break;
				}
				else{
					copy(spec, all, num)
					num++;//print spec from
					break;
				}
			}
			else {
				posi = spec[j][0];
				if (all[j][posi] == spec[i][posi]) { 
					copy1(spec, all, i ,j)
					break;
				}
				else {
					copy(spec, all, num)
					num++; break;
				}
			}
		}
	}
	return 0;
}

/*
1005. 继续(3n+1)猜想 (25)

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
卡拉兹(Callatz)猜想已经在1001中给出了描述。在这个题目里，情况稍微有些复杂。

当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。例如对n=3进行验证的时候，我们需要计算3、5、8、4、2、1，则当我们对n=5、8、4、2进行验证的时候，就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，因为这4个数已经在验证3的时候遇到过了，我们称5、8、4、2是被3“覆盖”的数。我们称一个数列中的某个数n为“关键数”，如果n不能被数列中的其他数字所覆盖。

现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字，并按从大到小的顺序输出它们。

输入格式：每个测试输入包含1个测试用例，第1行给出一个正整数K(<100)，第2行给出K个互不相同的待验证的正整数n(1<n<=100)的值，数字间用空格隔开。

输出格式：每个测试用例的输出占一行，按从大到小的顺序输出关键数字。数字间用1个空格隔开，但一行中最后一个数字后没有空格。

输入样例：
6
3 5 6 7 8 11
输出样例：
7 6
*/
