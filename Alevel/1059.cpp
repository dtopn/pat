/*
测试点	结果	用时(ms)	内存(kB)	得分/满分
0	答案正确	0	750	15/15
1	答案正确	0	790	4/4
2	答案正确	0	790	2/2
3	答案正确	0	740	2/2
4	答案正确	0	790	2/2
*/
#include <iostream>

using namespace std;

int main() {
    
    long int a;
    cin >> a;
    if (a == 1) {
        cout << "1=1";
        return 0;
    }
    long int ab = a;
    
    long int i;
    long int fact[1000][2];
    for (int k = 0; k < 1000; k++) {
        fact[k][0] = fact[k][1] = 0;
    }
    
    int iter;
    int fanum = 0;
    for (i = 2; i <= a; i++) {
        if ( a % i == 0) {
             a /= i;
             fact[fanum][0] = i;
             fact[fanum][1]++;                   
             i--;
        }
        else {
             if (fact[fanum][0] != 0) {
                fanum ++;                   
             }     
        }
            
    }    
    cout << ab << '=';
    for (int k = 0; k <= fanum; k++) {
        cout << fact[k][0];
        if (fact[k][1] > 1) {
        cout << '^' << fact[k][1];
        
        }
        if (k != fanum) cout << '*';
    }

    return 0;
}
/*
1059. Prime Factors (25)

时间限制
50 ms
内存限制
32000 kB
代码长度限制
16000 B
判题程序
Standard
作者
HE, Qinming
Given any positive integer N, you are supposed to find all of its prime factors, and write them in the format N = p1^k1 * p2^k2 *…*pm^km.

Input Specification:

Each input file contains one test case which gives a positive integer N in the range of long int.

Output Specification:

Factor N in the format N = p1^k1 * p2^k2 *…*pm^km, where pi's are prime factors of N in increasing order, and the exponent ki is the number of pi -- hence when there is only one pi, ki is 1 and must NOT be printed out.

Sample Input:
97532468
Sample Output:
97532468=2^2*11*17*101*1291
*/
