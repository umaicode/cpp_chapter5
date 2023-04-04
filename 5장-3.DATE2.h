// 5��-3.DATE2.H   5.3.3 class�� interface�� body 
// ���� ���� �����ڸ� ���� class Date�� �κ� ����
// class Date�� ��� interface ���� 
#ifndef date2_h
class Date{
    // private ������
    int month;
    int day;
    int year;

public:
    // day, month, year�� �� ��¥�� ����
    Date (int m, int d, int y);    // "ǥ��" ������
    Date ();    // default ������ 
    // ��¥ d ������ nn���� ���� ��¥�� ����
    Date (class Date d, int nn);
    // ���� �Լ����� �� �ٸ� ������ Date(Date d, int nn)����
    // ���Ǳ� ������ �߰���
    int Day ();    // �� ���� ��¥�� return��
    int Month ();    // �� ���� ���� return��
    int Year ();    // �⵵�� return��

    int LeapYear ();    // �����̸� 1, �ƴϸ� 0�� return��
    int DaysInMonth ();    // �ش� ���� ������ return
	void IncreaseDate ();    // ��¥�� �Ϸ� ������Ŵ

    void PrintDate ();    // ��¥�� �����
    void PrintLeap ();    // �ݳ��� �������� �ƴ����� ����ϴ� ������ ���
};
#endif