//5��-5. rectangle_main.cpp   5.4.2 class ��ü�� ����� member �Լ��� ȣ��
#include <stdlib.h>
#include <iostream>
#include "5��-5-2.Rectangle.h"
using namespace std;
//main������ iostream, std, xxx.h ����
//�ǽ� ����: Rectangle.h ��������� main �������
//�ǽ� ����: Rectangle.cpp ����Ǿ main �������
void main(){
    Rectangle a(2,3,5,6), b(2,3,5,5);
    Rectangle *c = &b;	
    cout<<a<<b;
    if( a.Area() > c->Area())
        cout<<"a";
    else 
        cout<<"b";
    cout<<"�� �� ���� ������ ������"<<endl;
	if (a == b) cout << "a�� b�� ����";
	else cout << "a�� b�� �ٸ���"<<endl;
	system("pause");
}