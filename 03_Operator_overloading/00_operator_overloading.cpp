#include <iostream>

// ������ �����ε��� ����

using namespace std;

/*
	. .* :: ?: # ## ����

	&
	|
	^ ��Ʈ ������ - �켱������ ���� ������ ��ȣ �������
*/

class Number
{
	int num;

public:
	Number(int num) : num(num){}

	int GetNum()
	{
		return num;
	}

	void SetNum(int num)
	{
		this->num = num;
	}
};

int main()
{
	Number a(10), b(20);

	{
		// int result = a + b; ����

		int result = a.GetNum() + b.GetNum();
		a.SetNum(result); // ������

		// a + b�� ������. --> 01��
	}

	return 0;
}