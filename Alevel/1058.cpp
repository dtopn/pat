/*
测试点	结果	用时(ms)	内存(kB)	得分/满分
0	答案正确	0	840	10/10
1	答案正确	0	790	2/2
2	答案正确	0	790	2/2
3	答案正确	0	740	2/2
4	答案正确	0	790	2/2
5	答案正确	0	790	2/2
*/

#include <iostream>

using namespace std;

int main() {
    long int aga, asi, akn;
    long int bga, bsi, bkn;
    scanf("%ld.%ld.%ld %ld.%ld.%ld", &aga, &asi, &akn, &bga, &bsi, &bkn);
    akn += bkn;
    asi += bsi;
    aga += bga;
    asi += akn / (long int) 29;
    akn %= 29;
    
    aga += asi / (long int) 17;
    asi %= 17;
    cout << aga << '.' << asi << '.' << akn;
    return 0;   
}

/*
1058. A+B in Hogwarts (20)

时间限制
50 ms
内存限制
32000 kB
代码长度限制
16000 B
判题程序
Standard
作者
CHEN, Yue
If you are a fan of Harry Potter, you would know the world of magic has its own currency system -- as Hagrid explained it to Harry, "Seventeen silver Sickles to a Galleon and twenty-nine Knuts to a Sickle, it's easy enough." Your job is to write a program to compute A+B where A and B are given in the standard form of "Galleon.Sickle.Knut" (Galleon is an integer in [0, 107], Sickle is an integer in [0, 17), and Knut is an integer in [0, 29)).

Input Specification:

Each input file contains one test case which occupies a line with A and B in the standard form, separated by one space.

Output Specification:

For each test case you should output the sum of A and B in one line, with the same format as the input.

Sample Input:
3.2.1 10.16.27
Sample Output:
14.1.28
*/
