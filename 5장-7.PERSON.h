// 5��-7.PERSON.H   5.6 class queue
// class Person�� ����
// ǥ�� C++ String class�� �����Ѵ�
//#include <cstring>
#include <string>
#include <iostream>
using namespace std;

class Person{
    string name;
	
public:
    Person (string n) :
    name (n){} 

    Person () : name (string()) {}

    string Name (){
        return name;
    }
};