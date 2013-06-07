/*
0	答案正确	0	620	10/10
1	答案错误	0	790	0/2
2	答案正确	0	780	2/2
3	答案正确	0	750	2/2
4	答案正确	0	750	2/2
5	答案正确	20	750	2/2
 */

#include <iostream>
#include <cmath>

using namespace std;

int isprime( long input ) {
	for (long int i = 3; i <= sqrt(input); i += 2)
		if ( input % i == 0 )
				return 0;
	return 1;
	
	
}

int main () {
	long upper;
	cin >> upper;
	int count = 0;
	if (upper < 4) {
		cout << 0;
		return 0;
	}
	long int prv = 2;
	for (long int i = 3; i <= upper; i += 2) {
		if (isprime(i)) {
			if (i - prv == 2) {
				count ++;
			}
			prv = i;
		}
	}
	cout << count;
	return 0;
}

/*
1007. 素数对猜想 (20)

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
让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。显然有 d1=1 且对于n>1有 dn 是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数N (< 105)，请计算不超过N的满足猜想的素数对的个数。

输入格式：每个测试输入包含1个测试用例，给出正整数N。

输出格式：每个测试用例的输出占一行，不超过N的满足猜想的素数对的个数。

输入样例：
20
输出样例：
4
 */
