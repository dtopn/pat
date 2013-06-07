/*
 * Blevel 1002
 */

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void print(int num) {
  const char* a[10] = {
      "zero", "one", "two", "three", "four", "five", 
      "six", "seven", "eight", "nine"};
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
    cout << "zero"; return 0;
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

