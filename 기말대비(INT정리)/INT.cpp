#include <iostream>

using namespace std;

// ++, ()
//int �� ǥ���ϴ� class �����
class INT {
	int val;
public:
	INT() = default;
	INT(int v) : val{ v } {}

	INT& operator++() {		//���� ����
		++val;
		return *this;
	}

	INT& operator++(int) {
		INT temp{ *this };
		++(*this);
		return temp;
	}		// n ++ ++ ++ �̰� �ȵ� �� �ȵɱ�?

	friend ostream& operator<<(ostream& os,const  INT& s) {
		return os << s.val;
	}
};

int main()
{
	
}