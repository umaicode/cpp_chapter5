// 5��-9.QUEUE.CPP   5.6 class queue
#include <iostream>
#include "5��-8.QUEUE.h"
using namespace std;
Queue :: Queue (){
	// queue�� �ִ� ����� ���ڷμ� �ʱ� ���´� 0���� �Ѵ�
	number = 0;
}
void Queue :: Push (Person p){
	// queue�� ���� ����� �߰��Ѵ�
	// queue�� ��ü ����� ���� 1 �����Ѵ�
	line [number] = p;
	number++;
	cout<<number<<endl;
	// queue�� ���� ������ ����Ѵ�
	cout<<p.Name()<<" has joined the queue"<<endl;
}

Person Queue :: Pop (){
	// queue���� ������ ����� �����Ѵ�("��(line)�� ù ��° ���")
	Person  p = line [0];
	// queue�� ���� ������ �̵��Ѵ�. ��� ����� ������ �ϳ��� �̵��Ѵ�
	for (int i = 1; i < number; i++) 
		line [i-1] = line [i];
	number --;
	// queue�� ��ü ����� ���ڸ� 1 �����Ѵ�
	// queue�� ���� ������ ����Ѵ�
    cout << p.Name () << " has left the queue" << endl;
	// queue�� �ٿ��� ù ��° ����� �����Ͽ�,
	// �ӽ� ���� p�� �����Ѵ�
    return p;
}
int Queue :: Number (){
	// queue�� �ִ� ����� ���ڸ� return�Ѵ�
    return number;
}