#include <iostream>

// 입출력 연산자

using namespace std;

// istream >>
// ostream << 

class Point
{
	int x = 0;
	int y = 0;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	auto Getx() const { return x; }
	auto Gety() const { return y; }

	void Print()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}

	friend ostream& operator << (ostream& out, const Point& p) // 전역함수로 만들어야함
	{
		out << "(" << p.x << ", " << p.y << ")" << endl;
		return out;
	}

	friend istream& operator >> (istream& in, Point& p)
	{
		in >> p.x >> p.y;
		return in;
	}
};

int main()
{
	Point p1(0, 1), p2(5, 5);

	// cout << p1 << ", " << p2 << endl; 불가능

	p1.Print();
	p2.Print();

	// 선언 후

	Point p3, p4;
	cin >> p3 >> p4;
	cout << p3 << ", " << p4 << endl;

	return 0;
}