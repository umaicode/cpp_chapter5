#include <iostream>
using namespace std;

class Student {
	char* sid;
	char* sname;
	int age;

public:
	Student(char* sid, char* sname, int age) : age(age)
	{
		// �ּҸ� ����Ų��.
		// this->sid = sid;
		// this->sname = sname;

		// �ڽ��� �ִ� ������ ����Ų��. 
		this->sid = new char[sizeof(sid)];
		strcpy(this->sid, sid);
		this->sname = new char[sizeof(sname)];
		strcpy(this->sname, sname);
	}
	friend ostream& operator<<(ostream&, Student& s);
	~Student() {
		delete[] sid;
		delete[] sname;
	};
};
ostream& operator<<(ostream& os, Student& s) {
	os << "student:: " << s.sid << " " << s.sname << " " << s.age << endl;
	return os;
}
int main() {
	cout << "�̰��� �׽�Ʈ ���α׷�" << endl;
	Student s1("cse001", "hong", 23);
	cout << s1;
	system("pause");
	return 1;
}