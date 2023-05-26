#include <iostream>

// ��� ������

using namespace std;

/*
	+ - * / % += == *= /= %=
*/

#pragma region 1. �����Լ��� ���� ������ �����ε�
//class Won
//{
//public:
//	Won(int value) : value(value) {}
//	int Getvalue() const { return value; }
//
//	friend int operator+(const Won& lhs, const Won& rhs);
//
//	friend Won operator-(const Won& lhs, const Won& rhs);
//
//private:
//	int value;
//};
//
//int main()
//{
//	Won l(10), r(10);
//
//	int result1 = l + r;
//
//	cout << result1 << endl;
//
//	Won result2(l - r);
//	cout << result2.Getvalue() << endl;
//
//	return 0;
//}
//
//int operator+(const Won& lhs, const Won& rhs)
//{
//	return lhs.value + rhs.value;
//}
//
//Won operator-(const Won& lhs, const Won& rhs)
//{
//	return lhs.value - rhs.value;
//}

#pragma endregion

#pragma region 2. ����Լ��� ���� ������ �����ε�
//class Won
//{
//public:
//	Won(int value) : value(value) {}
//	
//	int GetValue() const { return value; }
//
//	// l + r => l.operator+(r)
//	int operator+(const Won& rhs)
//	{
//		return value + rhs.value;
//	}
//
//	Won operator-(const Won& rhs)
//	{
//		return value - rhs.value;
//	}
//
//private:
//	int value;
//};
//
//int main()
//{
//	Won l(10), r(10);
//
//	int result1 = l + r;
//	cout << result1 << endl;
//
//	Won result2 = l - r;
//	cout << result2.GetValue() << endl;
//
//	return 0;
//}
#pragma endregion

/*
	homework

	���� ������ +vector -vector
	���� ������ vector + vector  - * %
	���� ������ vector * 3(����)
	���� ������ - ����, ���� ������(++, --)
				Vector& operator++()
				Vector& operator++(int) // dummy
*/

#pragma region ��� ������ �����ε�
class Vector
{
public:
	Vector(int x, int y, int z) : x(x), y(y), z(z) {}

	// ���� +
	Vector operator+()
	{
		// return Vector{ x, y, z };
		return *this;
	}

private:
	int x;
	int y;
	int z;
};

#pragma endregion