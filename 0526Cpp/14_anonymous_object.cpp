#include <iostream>

// 익명 객체

using namespace std;

class A
{
public:
	void print()
	{
		cout << "Print" << endl;
	}
};

int main()
{
	//A a;
	//a.print(); 번거로울때

	A().print(); // 익명 객체 - 사용하고 바로 사라짐

	return 0;
}