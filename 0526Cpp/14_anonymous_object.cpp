#include <iostream>

// �͸� ��ü

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
	//a.print(); ���ŷοﶧ

	A().print(); // �͸� ��ü - ����ϰ� �ٷ� �����

	return 0;
}