#include <iostream>
#include "ExceptionDefine.h"
using namespace std;

void compute(int num) throw(Exception);
void print(int num) throw(Exception);

int main(void)
{
	int num;
	
	cout << "0���� ũ�� 100���� ���� ¦���� �Է��ϼ���: ";
	cin >> num;

	try
	{
		compute(num);
		cout << "�� ó���Ǿ����ϴ�." << endl;
		print(num);
		cout << "�μ� �Ǿ����ϴ�." << endl;
	}
	catch(Exception e)
	{
		e.message();
	}

	return 0;
}

void compute(int num) throw(Exception)
{
	if (num == 0)
		throw Exception(Exception::ZERO);
	else if (num > 100)
		throw Exception(Exception::TOO_BIG);
	else if (num % 2 == 1)
		throw Exception(Exception::ODD_NUM);

	//Do something......
}

void print(int num) throw(Exception)
{
	if (num < 0)
		throw Exception(Exception::NEGATIVE);

	//Printing..........
}