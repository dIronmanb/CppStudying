//ExceptionDefine.cpp
#include <iostream>
#include "ExceptionClass.h"
using namespace std;

Exception::Exception(ExceptionType type)
{
	this->type = type;
}

void Exception::message(void)
{
	switch (type) {
	case ZERO: cout << "0을 입력하면 안됩니다." << endl;
		break;
	case TOO_BIG: cout << "100이상의 수를 입력하면 안됩니다." << endl;
		break;
	case ODD_NUM: cout << "홀수를 입력하면 안됩니다." << endl;
		break;
	case NEGATIVE: cout << "음수는 인쇄할 수 없습니다." << endl;
		break;
	}
}
