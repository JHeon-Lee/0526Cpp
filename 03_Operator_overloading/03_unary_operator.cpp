#include <iostream>

// 단항 연산자 + - !

using namespace std;

class Won
{
	int value;

public:
	Won(int value = 0) : value(value) {}

	auto GetValue() const { return value; }

	friend ostream& operator << (ostream& out, const Won& won)
	{
		out << won.value;
		return out;
	}

	bool operator !() const
	{
		return (value == 0) ? true : false;
	}
};

int main()
{
	const Won w1(10);
	const Won w2(0);

	cout << boolalpha;
	cout << !w1 << endl;
	cout << !w2 << endl;

	return 0;
}