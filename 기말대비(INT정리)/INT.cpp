#include <iostream>

using namespace std;

// ++, ()
//int 를 표현하는 class 만들기
class INT {
	int val;
public:
	INT() = default;
	INT(int v) : val{ v } {}

	INT& operator++() {		//전위 증가
		++val;
		return *this;
	}

	INT& operator++(int) {
		INT temp{ *this };
		++(*this);
		return temp;
	}		// n ++ ++ ++ 이게 안됨 왜 안될까?

	friend ostream& operator<<(ostream& os,const  INT& s) {
		return os << s.val;
	}
};

int main()
{
	
}