// 5��-8.QUEUE.H  5.6 class queue
// class Queue�� interface ����
#include "5��-7.PERSON.h"
using namespace std;
class Queue {
private:
	Person    line[20];
	int        number; //static variable�� ����� ����ϵ��� �����ϴ� �ǽ�

public:
	Queue();
	void Push(Person p);
	Person Pop();
	int Number();
};