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
	case ZERO: cout << "0�� �Է��ϸ� �ȵ˴ϴ�." << endl;
		break;
	case TOO_BIG: cout << "100�̻��� ���� �Է��ϸ� �ȵ˴ϴ�." << endl;
		break;
	case ODD_NUM: cout << "Ȧ���� �Է��ϸ� �ȵ˴ϴ�." << endl;
		break;
	case NEGATIVE: cout << "������ �μ��� �� �����ϴ�." << endl;
		break;
	}
}
