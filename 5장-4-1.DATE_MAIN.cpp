// 5��-4-1.DATE_MAIN.CPP   5.3.3 class�� interface�� body 
// ���ο� �Լ��� ���� class Date�� ���� test program
#include "5��-3.DATE2.h"//class Date�� header file�� ����
#include <stdlib.h>
//separate compilation: DATE2.h�� function body ������ DATE2.cpp
void main(){
    // ��ü newYearsDay�� �����ϰ� ��ü�� ���� �ٸ� ������ ����
    Date newYearsDay (1,1,2017);

    newYearsDay.PrintDate ();
    newYearsDay.IncreaseDate ();       // ������ ����Ű�� ��ü�� ���� �����Ͱ� �����                             
    newYearsDay.PrintDate ();	
    newYearsDay.PrintLeap ();

    Date d (5,15,2016);    // Date class�� ��ü d�� �����ϰ� �ٸ� ������ ����

    d.IncreaseDate ();
    d.PrintDate ();
    d.PrintLeap ();
    // �־��� ��¥���� �������� print�Ѵ�
    for (Date dd(2,25,2017); dd.Day()<3||dd.Day()>10; dd.IncreaseDate())
		dd.PrintDate ();
	system("pause");
}