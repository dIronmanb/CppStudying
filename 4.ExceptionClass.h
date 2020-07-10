//ExceptionClass.h


class Exception
{
public:
	enum ExceptionType {ZERO, TOO_BIG, ODD_NUM, NEGATIVE};
	Exception(ExceptionType type);
	void message(void);

private:
	ExceptionType type;
};