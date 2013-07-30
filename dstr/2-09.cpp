#include <iostream>

using namespace std;

int main() {
	
	int box[1000];
	int box_num = 0;
	int item_num;
	cin >> item_num;
	if (item_num == 0) {
			cout << 0;
			return 0;
	}
	for (int i = 0; i < 1000; i++) box[i] = 0;
	for (int i = 0; i < item_num; i++) {
		int item;
		cin >> item;
		int j;
		for (j = 0; j < box_num; j++) {
			if (item + box[j] <= 100) {
				box[j] += item;
				cout << item << ' ' << j + 1 << endl;
				break;
			}
		}
		if ( j == box_num ) {
			box_num ++;
			box[j] = item;
			cout << item << ' ' << box_num << endl;
		}
	}
	cout << box_num;
	return 0;
}
