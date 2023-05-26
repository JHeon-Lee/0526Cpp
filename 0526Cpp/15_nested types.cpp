#include <iostream>

// 중첩 형식

using namespace std;

class Character
{
public:
	Character(string&& name) : name(name) {}

	enum class Movement // enum, class 중첩해서 사용
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
			cout << name << "의 현재 이동 상태 : Idle, 현재 속도 : " << speed << endl;
			break;
		case Character::Movement::Walk:
			cout << name << "의 현재 이동 상태 : Walk, 현재 속도 : " << speed << endl;
			break;
		case Character::Movement::Run:
			cout << name << "의 현재 이동 상태 : Run, 현재 속도 : " << speed << endl;
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

// OOP의 기본 특성