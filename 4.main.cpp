#include <iostream>
#include "ExceptionDefine.h"
using namespace std;

void compute(int num) throw(Exception);
void print(int num) throw(Exception);

int main(void)
{
	int num;
	
	cout << "0보다 크고 100보다 작은 짝수를 입력하세요: ";
	cin >> num;

	try
	{
		compute(num);
		cout << "잘 처리되었습니다." << endl;
		print(num);
		cout << "인쇄 되었습니다." << endl;
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