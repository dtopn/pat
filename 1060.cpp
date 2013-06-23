#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

#define DLTT 0.000000000000000000001
using namespace std;

int apow, bpow;


int out(double a, int sign) { 


}

int main() {
    
 int sign; cin >> sign;
    double a, b;
    stringstream stg1, stg2;
    string str1, str2;
    cin >> str1 >> str2;
    stg1 << str1;
    stg2 << str2;
    stringstream stg;
    str1 = stg1.str();
    str2 = stg2.str();
    
    apow = bpow = 0;
    stg1 >> a; stg2 >> b;
 double temp;
 temp = a;
 for (; temp - 1 >= 0; apow++) temp /= 10;
 temp = b;
 for (; temp - 1 >= 0; bpow++) temp /= 10;
 //cout << apow << bpow;
 a /= pow(10.0, apow);
 b /= pow(10.0, bpow);
 stringstream stga, stgb;

 stga << a; stgb << b;
 stga >> str1; stgb >> str2;

 //cout << a << endl << b << endl;
 //cout << str1 << endl << str2 << endl;
 int flag = 0;
 str1[1] = str2[1] = '.';
 for (int i = 0; i < 2 + sign; i++) {
  if (!(str1[i] >= '0' && str1[i] <= '9' || str1[i] == '.'))
    str1[i] = '0';
  if (!(str2[i] >= '0' && str2[i] <= '9' || str2[i] == '.'))
    str2[i] = '0';
  if (str1[i] == str2[i]) flag = 1;
  else flag = 0;
  if (flag == 0) break;
 }
 //cout << flag;
 //cin  >> flag;
 if (apow != bpow || flag == 0) {
  cout << "NO ";
 }
 else {
  cout << "YES ";
 }
 
 for (int i = 0; i < 2 + sign; i++) {
  if (str1[i] >= '0' && str1[i] <= '9' || str1[i] == '.')
   cout << str1[i];
  else cout << '0';
 }
 cout << "*10^" << apow;
 cout << " ";
 for (int i = 0; i < 2 + sign; i++) {
  if (str2[i] >= '0' && str2[i] <= '9' || str2[i] == '.')
   cout << str2[i];
  else cout << '0';
 }
 cout << "*10^" << bpow;
    return 0;
}


