//5��-6-2 Letters_main.cpp   5.5 class �����Ϳ� class �Լ�
#include "5��-6-1.Letters.h"
#include <iostream>
using namespace std;
# include <stdlib.h>
// class ������ class �ܺ� ����
// Ŭ���� ������ �ʱ�ȭ�� main �ۿ��� �ؾ� �Ѵ�.
// stack�� ��������� ���� ���� �ʱ�ȭ �Ѵ�.
// ����๮�̴�.
int Letters :: num = 0;//private member�̳� �ʱ�ȭ ���

void main(){
    // ������ static �Լ� ȣ���� class ��ü�� �����ϰ�      
    // Ư�� ��ü�� �������� �ʴ´�
    // Letters::num++; // num�� Letters Ŭ������ private�̴�. -> main���� ������ �ȵȴ�.
    cout << "Program begins..." << endl;
    cout << "Number of letters at the beginning: "
          <<  Letters::Number() << endl;
	//cout << Letters::num;
    // class Letters�� �� ��ü�� ����
    Letters A ('a');
    Letters B ('b');
    Letters C ('c');
    Letters D ('d');
	//cout << A.num;
    cout << "Number of letters after declarations: "
          <<  A.Number() << endl;
  
    cout << endl;
    cout << "Entering a new block..." << endl;
    {
        Letters E ('e');
        Letters *pF;
        pF = new Letters ('f'); // �̶� new�� ��ü�� ����� �ּҸ� �ִ� ��. ���� ������ pF�� �Ҹ��ڰ� ���ͼ� ���ú����� �������� ��ü�� ����ִ�.(???)
       cout << "Total number of letters inside the block: "<<  A.Number() << endl;
        cout << endl;
        cout << "Leaving the block..." << endl;
    }
    // block�� �� E�� �Ҹ�Ǿ�����  pF�� �Ҹ���� ����     
    // �׷��� ������ �� ����   
    cout << endl;
    cout << "Total number of letters after the block: "
          <<  Letters::Number() << endl;
	system("pause");
}