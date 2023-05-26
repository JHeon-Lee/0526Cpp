#include <iostream>

// ��ø ����

using namespace std;

class Character
{
public:
	Character(string&& name) : name(name) {}

	enum class Movement // enum, class ��ø�ؼ� ���
	{
		Idle,
		Walk,
		Run,
		Count
	};

	void SetCharacterMovement(enum class Movement inMove)
	{
		movementState = inMove;
		speed = movementSpeed[static_cast<int>(inMove)];
	}

	void PrintCurrentMovementState()
	{
		switch (movementState)
		{
		case Character::Movement::Idle:
			cout << name << "�� ���� �̵� ���� : Idle, ���� �ӵ� : " << speed << endl;
			break;
		case Character::Movement::Walk:
			cout << name << "�� ���� �̵� ���� : Walk, ���� �ӵ� : " << speed << endl;
			break;
		case Character::Movement::Run:
			cout << name << "�� ���� �̵� ���� : Run, ���� �ӵ� : " << speed << endl;
			break;
		}
	}

private:
	string name;

	const int movementSpeed[static_cast<int>(Movement::Count)] =
	{
		0,
		200,
		500
	};

	enum class Movement movementState = Movement::Idle;

	int speed = movementSpeed[static_cast<int>(Movement::Idle)];
};

int main()
{
	Character player(string("Player"));
	player.PrintCurrentMovementState();
	player.SetCharacterMovement(Character::Movement::Walk);
	player.PrintCurrentMovementState();
	player.SetCharacterMovement(Character::Movement::Run);
	player.PrintCurrentMovementState();

	return 0;
}

// OOP�� �⺻ Ư��