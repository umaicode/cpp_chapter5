// 5-5.QUE-USE.CPP  5.6 class queue
#include <iostream>
#include "5��-8.QUEUE.h"
using namespace std;
#include <stdlib.h>
/*
1) ����
�� source code�� class Queue�� �̿��Ͽ� ��ü�� ����, queue�� ���� �Ǵ� ������ �غ��� �����̴�.
2) ���
 ��. �ּ� 1���� �����Ͽ� ��ü�� �����ϰ� queue�� ����, �����ϴ� ������ �ڼ��� ���캸��.
 ��. �ּ� 2���� �����Ͽ� Queue��ü�� ���� pointer�� �̿��Ͽ� queue�� ����, �����ϴ� ������ ���캸��.
 ��. student.h �� �����Ͽ� ��ü�� �����ϰ� queue�� ����, ���������� ���� �ǽ��غ���.
*/
void main (){
    //�ּ� 1��
    //*
    Queue q;
	Queue t;//t�� ���ÿ��� �ǽ�
	t = q; // ���� �ǽ�
    // queue�� �ִ� ����� ���ڸ� ����Ѵ�
    cout << "queue�� �ִ� ����� "<< q.Number () << " �� �Դϴ�." 
         << endl << endl;
    // queue�� �� ����� �߰��Ѵ�
    q.Push ( Person ("ȫ�浿") );
    q.Push ( Person ("���Ӵ�") );
    q.Push ( Person ("������") );
    q.Push ( Person ("�����") );
    cout << "queue�� �ִ� ����� "
         << q.Number () << " �� �Դϴ�." << endl << endl;
    // queue�� ù ��° ����� �����Ѵ�
    q.Pop();
    cout << "queue�� �ִ� ����� "<< q.Number () << " �� �Դϴ�." 
         << endl << endl;
    // queue�� ���� ������ ����� �߰��Ѵ�
    q.Push ( Person ("ȫ���") );
    cout << "queue�� �ִ� ����� " << q.Number () << " �� �Դϴ�." 
         << endl << endl;
    // queue ��ü�� ����
    cout << "��� ����� queue���� �����ϴ�." << endl<<endl;
    while (q.Number () > 0){
       q.Pop ();
       cout << "queue�� �ִ� ����� " << q.Number () << " �� �Դϴ�." 
            << endl << endl;
    }
    //*/
    //�ּ� 2��
    /*
    //Queue ��ü�� pointer�� �̿��Ͽ� q�� ������ Person��ü�� �Է°� ��ü ���� ���
    Queue *pq = &q;
    (*pq).Push ( Person ("ȫ�淡") );
    cout << "queue�� �ִ� ����� "
         << (*pq).Number () << " �� �Դϴ�." << endl << endl;
    (*pq).Pop();
    */
	system("pause");
}