#include <iostream>

// 연산자 오버로딩도 가능

using namespace std;

/*
	. .* :: ?: # ## 제외

	&
	|
	^ 비트 연산자 - 우선순위가 낮아 일일히 괄호 쳐줘야함
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
		// int result = a + b; 오류

		int result = a.GetNum() + b.GetNum();
		a.SetNum(result); // 귀찮음

		// a + b를 만들자. --> 01로
	}

	return 0;
}