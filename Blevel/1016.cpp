//simple question, just scan through the string and calculate the value, don't for get to initialize variables
#include <stdio.h>
#include <string.h>

int calc(char* a, char da) {
	int i;
	int sum;
	sum = 0;
	for (i = 0; i < strlen(a); i++) {
		if (*(a + i) - da == 0) sum = sum * 10 + da - '0';
	}
	return sum;
}

int main() {
	char a[11], b[11];
	char da, db;
	scanf("%s %c %s %c", a, &da, b, &db);
	int ai, bi;
	ai = calc(a, da);
	bi = calc(b, db);
	printf("%d", ai + bi);

	return 0;
}