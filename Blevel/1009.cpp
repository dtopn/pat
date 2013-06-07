/*
0	答案正确	0	720	12/12
1	答案正确	0	790	3/3
2	答案正确	0	790	2/2
3	答案正确	0	790	3/3
 */

#include <string>
#include <iostream>
#include <list>
#include <sstream>
#include <cstdio>

using namespace std;

int main() {
	string input;
	char buff;
	input.erase();
	while ( (buff = getchar()) != 10) {
		input.push_back(buff);
	}
	int len = input.length();
	int space = 0;
	for (int i = 0; i < len; i++) {
		input[i] == ' '? space++ : space;
	}
	if (space == 0) {
		cout << input; return 0;
	}
	string output;
	output.erase();
	int j = 0;
	for (int i = 0; i <= space; i++) {
		string temp;
		temp.erase();
		for ( ; j < len && input[j] != ' '; j++) {
			temp.push_back(input[j]);
		}
		if ( i != 0 ) temp.push_back(' ');
		j++;
		output.insert(0, temp);
	}
	cout << output;
	return 0;
}

/*
1009. 说反话 (20)

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
给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

输出格式：每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
 */
