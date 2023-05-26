#include <iostream>

// 관계연산자 < > <= >= == !=

using namespace std;

class Won
{
	int value;
	int value1;

public:
	Won(int value = 0, int value1 = 0) : value(value), value1(value1) {}

	auto GetValue() const { return value; }
	void SetValue(const int& value) { this->value = value; }

	friend ostream& operator << (ostream& out, const Won& won)
	{
		out << won.value;
		return out;
	}

	bool operator==(const Won& rhs) const
	{
		return value == rhs.value && value1 == rhs.value1;
	}

	bool operator!=(const Won& rhs) const
	{
		// return value != rhs.value && value1 != rhs.value1;
		return !(*this == rhs);
	}

	bool operator < (const Won& rhs) const
	{
		return value < rhs.value;
	}

	friend bool test(const Won& lhs, const Won& rhs);
};

bool test(const Won& lhs, const Won& rhs)
{
	// return lhs.GetValue() > rhs.GetValue();
	return lhs.value > rhs.value;
}

int main()
{
	Won w1(10), w2(20);

	if (w1 == w2)
		cout << "같다" << endl;
	else if (w1 != w2)
		cout << "다르다" << endl;

	if (w1 < w2)
		cout << w2 << endl;
	else
		cout << w1 << endl;
	return 0;
}