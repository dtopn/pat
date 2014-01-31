//By recalling how to do division in primary school, this problem can be solved
//An intermediate quotient can be 0, it must be printed
//If the number is one digit a 0 must be printed
#include <stdio.h>
#include <string.h>

int i;
int a[1001];
int b;
char c;
int main() {
	i = 0;
	c = getchar();
	for (i = 0; c != ' '; c = getchar(), i++) {
		a[i] = c - '0';
	}
	a[i] = ' ';
	scanf("%d", &b);

	int re;
	re = 0;
	int flag = 0;
	for (i = 0; a[i] != ' '; i++) {
		re = re * 10 + a[i];
		if (re < b) {
			if (flag) printf("0");
		}
		else {
			flag = 1;
			printf("%d", re / b);
			re = re % b;
		}
	}
	if (!flag) printf("0");
	printf(" %d", re);
	return 0;
}