// 5��-2.DATE1.CPP   5.3 class
// ���ο� �Լ��� ���� class Date�� ���� test program
#include <iostream>
#include "5��-1.DATE1.h"

int main(){
    // ��ü newYearsDay�� �����ϰ� ��ü�� ���� �ٸ� ������ ����
    Date newYearsDay (1,1,2017);
   // Date dx;
    newYearsDay.PrintDate ();
    newYearsDay.IncreaseDate ();    // ������ ����Ű�� ��ü�� ���� �����Ͱ� �����                               
    newYearsDay.PrintDate ();	
    newYearsDay.PrintLeap ();

    Date d (5,15,2016);    // Date class�� ��ü d�� �����ϰ� �ٸ� ������ ����
    //d.day++;
    d.IncreaseDate ();
    d.PrintDate ();
    d.PrintLeap ();
    Date dy(13, 35, -1212);
    dy.PrintDate();//�� ���� ���ڰ� �Էµ�
    for (Date dd(2,25,2017); dd.Day()<3||dd.Day()>10; dd.IncreaseDate())    // �־��� ��¥���� �������� print�Ѵ�
		dd.PrintDate ();
	system("pause");
    return 1;
}