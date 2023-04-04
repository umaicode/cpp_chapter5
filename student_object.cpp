#include <iostream>
using namespace std;

class Student {
	char* sid;
	char* sname;
	int age;

public:
	Student(char* sid, char* sname, int age) : age(age)
	{
		this->sid = sid;
		this->sname = sname;
	}
	friend ostream& operator<<(ostream&, Student& s);
	~Student() {};
};
ostream& operator<<(ostream& os, Student& s) {
	os << "student:: "<< s.sid<<" "<<s.sname<<" "<<s.age<<endl;
		return os;
}
int main() {
	cout << "이것은 테스트 프로그램" << endl;
	Student s1("cse001", "hong", 23);
	cout << s1;
	system("pause");
	return 1;
}