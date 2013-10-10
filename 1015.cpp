#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

class stu{
public: stu(long id, int de, int cai): id(id), de(de), cai(cai) {
			num++;
			zong = de + cai;
		}
		bool operator < (const stu& st) const {
			if (this->zong < st.zong) return true;
			if (this->zong > st.zong) return false;
			if (this->de   < st.de  ) return true;
			if (this->de   > st.de  ) return false;
			if (this->id   < st.id  ) return false;
			return true;
		}
		friend ostream& operator << (ostream& out, const stu& astu);
		void print() {
			printf("%ld %d %d\n",id, de, cai);
		}
public: //In order to same time for quick member access, conventional private fields are set to public
	long id;
	int de;
	int cai;
	int zong;
	static int num;
};

int stu::num = 0;
int low, high;
int main() {
	int i; cin >> i;
	int de, cai;
	long id;
	cin >> low >> high;
	vector<stu> list1, list2, list3, list4;
	while (i--) {
		cin >> id >> de >> cai;
		if (de >= high && cai >= high) list1.push_back(stu(id,de,cai));
		else if (de >= high && cai >= low) list2.push_back(stu(id,de,cai));
		else if (de >= low && cai >= low && de >= cai) list3.push_back(stu(id,de,cai));
		else if (de >= low && cai >= low) list4.push_back(stu(id,de,cai));
	}
	sort(list1.begin(),list1.end());
	sort(list2.begin(),list2.end());
	sort(list3.begin(),list3.end());
	sort(list4.begin(),list4.end());
	vector<stu>::reverse_iterator riter;
	cout << list1.front().num << endl;
	for (riter = list1.rbegin(); riter != list1.rend(); ++riter) riter->print();
	for (riter = list2.rbegin(); riter != list2.rend(); ++riter) riter->print();
	for (riter = list3.rbegin(); riter != list3.rend(); ++riter) riter->print();
	for (riter = list4.rbegin(); riter != list4.rend(); ++riter) riter->print();
	return 0;
}

ostream& operator << (ostream& out, const stu& astu) {
	out << astu.id << ' ' << astu.de << ' ' << astu.cai << endl;
	return out;
}