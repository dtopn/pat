#include <iostream>
#include <list>
#include <algorithm>

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
	ios::sync_with_stdio(false); //faster input and output
	int i; cin >> i;
	int de, cai;
	long id;
	cin >> low >> high;
	list<stu> list1, list2, list3, list4;
	while (i--) {
		cin >> id >> de >> cai;
		if (de >= high && cai >= high) list1.push_back(stu(id,de,cai));
		else if (de >= high && cai >= low) list2.push_back(stu(id,de,cai));
		else if (de >= low && cai >= low && de >= cai) list3.push_back(stu(id,de,cai));
		else if (de >= low && cai >= low) list4.push_back(stu(id,de,cai));
	}
	list1.sort(); list2.sort(); list3.sort(); list4.sort();
	list<stu>::reverse_iterator riter;
	cout << list1.front().num << endl;
	for (riter = list1.rbegin(); riter != list1.rend(); ++riter) cout << *riter;
	for (riter = list2.rbegin(); riter != list2.rend(); ++riter) cout << *riter;
	for (riter = list3.rbegin(); riter != list3.rend(); ++riter) cout << *riter;
	for (riter = list4.rbegin(); riter != list4.rend(); ++riter) cout << *riter;
	return 0;
}

ostream& operator << (ostream& out, const stu& astu) {
	out << astu.id << ' ' << astu.de << ' ' << astu.cai << endl;
	return out;
}