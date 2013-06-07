/*
测试点	结果	用时(ms)	内存(kB)	得分/满分
0	答案正确	0	790	12/12
1	答案正確	0	780	2/2
2	答案正确	0	790	6/6
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int count;
	cin >> count;
	string max_name, max_num, min_name, min_num, temp1, temp2;
	int max, min, temp;
	cin >> temp1 >> temp2;
	cin >> temp;
	max_name = min_name = temp1;
	max_num  = min_num  = temp2;
	max = min = temp;

	for (int i = 1; i < count; i++) {
		cin >> temp1 >> temp2 >> temp;
		if ( temp > max ) max = temp, max_name = temp1, max_num = temp2;
		if ( temp < min ) min = temp, min_name = temp1, min_num = temp2;
	}
	cout << max_name << ' ' << max_num << endl <<
			min_name << ' ' << min_num << endl ;
	return 0;
}
/*
1004. 成绩排名 (20)

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
读入n名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

输入格式：每个测试输入包含1个测试用例，格式为

  第1行：正整数n
  第2行：第1个学生的姓名 学号 成绩
  第3行：第2个学生的姓名 学号 成绩
  ... ... ...
  第n+1行：第n个学生的姓名 学号 成绩
其中姓名和学号均为不超过10个字符的字符串，成绩为0到100之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
输出格式：对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，第2行是成绩最低学生的姓名和学号，字符串间有1空格。

输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
输出样例：
Mike CS991301
Joe Math990112
*/
