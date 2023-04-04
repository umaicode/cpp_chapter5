//5��-5-2.Rectangle.h    5.4 C++ class�� �߻� ������ Ÿ��
using namespace std;
// Horowitz, E., Sahni S., Mehta D. [2007] �ڷᱸ������ �����Ͽ� �ڵ带 �߰���
class Rectangle{
public:
//	Rectangle(int x = 0, int y = 0, int h = 0, int b = 0);
	//Rectangle();
	Rectangle(int x, int y, int h, int b);
	~Rectangle();
	int Height();
	int Base();
	int Perimeter ();
	int Area();
	int operator==(const Rectangle& s);
	//os<<r;�� operator<<(os, r)�� ȣ���ϴ� �Ͱ� ���� 
	friend ostream& operator<< (ostream& os, Rectangle& r);
private:
	int x_pos, y_pos, height, base;
};
