//5-1.CONSTRUCTOR_DESTRUCTOR.CPP     5.3.1 �����ڿ� �Ҹ��� 
#include <iostream>
using namespace std;
// ���� ���� �����ڸ� ���� class Date�� �κ� ����
class Date{
    int month;
    int day;
    int year;
public:
    // parameter�� �ִ� ������
	//*
    // �⺻ ������ (parameter�� ���� ��쿡 default ������ �ʱ�ȭ)
    Date (int m, int d, int y):month (m), day (d), year (y){ }
	//*/
    Date(){
    // compiler�� �� ���ǵ� ���� ������ member ���� �ʱ�ȭ���� �ʴ´�.
    // �׷��� ������ �ʱ� ���� ���� �����ϴ� ���� �ʿ��ϴ�.
       month = 1;
       day = 1;
       year = 1900;
    }
	//*/
    void showDate(){
        cout<<year<<"�� "<<month<<"�� "<<day<<"��"<<endl;
    }
    ~Date(){
        cout<<"�Ҹ��� ȣ��"<<endl;
    }
};
void main(){
	//�ּ� 1: default constructor�� ���, constructor() ��� �ּ� ó�� - compiler ����
    //�����ڰ� ���� ���
/*
    Date date;//default ��
    // �����ڰ� ���� ��� compiler�� �ڵ����� ������������,
    // �ƹ��� ���� ���� �ʱ� ������ ������ ���� ��µ�
    date.showDate();     
*/
	//�ּ�2: constructor�� ��� -    Date(){} ����� ���
    //parameter�� ���� ������
//*
    Date date1;
    date1.showDate();
//*/
    //�ּ�3 -  parameter�� �ִ� ������
/* 
    Date date2(3, 1, 2017);
    date2.showDate();
*/ 
	system("pause");
}