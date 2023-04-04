//5��-5-1 Rectangle.cpp   5.4.1 C++���� ������ �߻�ȭ�� Encapsulation
#include <iostream>
#include "5��-5-2.Rectangle.h"
using namespace std;//header file ���� ������� �ʴ� ���� ����
//���� file�� cpp������ <iostream>, std, xxx.h ����
Rectangle::Rectangle(int x = 0, int y = 0, int h = 0, int b = 0)
	: x_pos(x), y_pos(y), height(h), base(b)
{ }
Rectangle::~Rectangle() {}
int Rectangle::Height() { return height;}
int Rectangle::Base() {return base;}
int Rectangle::Perimeter() {return 2*(height + base);}
int Rectangle::Area() {return height * base;}
int Rectangle::operator==(const Rectangle& s)
{
	if (this == &s) return 1;
	else if ( (x_pos == s.x_pos) && (y_pos == s.y_pos) &&
		(height == s.height) && (base == s.base) )
		return 1;
	return 0;
}

ostream& operator<<(ostream& os, Rectangle& r)
{
	os << "Position is: (" << r.x_pos << ", ";
	os << r.y_pos <<") :: ";
	os << "Height is: " << r.height << " and ";
	os << "Base is: " << r.base << endl;
	return os;
}
