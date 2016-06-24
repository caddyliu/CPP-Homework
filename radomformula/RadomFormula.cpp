#include"radom.h"
#include<conio.h>
#include <string>


RadomFormula::RadomFormula() {
	OpArr = "+-";
	srand((int)time(0));
}

string RadomFormula::GetFormula()
{
	p1 = rand() % 30;
	p2 = rand() % 30;
	op1 = rand() % OpArr.size();

	int pi = Operate(op1, p1, p2);
	int s1 = -pi;
	int s2 = 30 - pi;
	if (s1 < -30)
	{
		s1 = -30;
	}
	if (s2 > 30)
	{
		s2 = 30;
	}
	p3 = s1 + rand() % (s2 - s1);
	if (p3 >= 0)
	{
		op2 = 0;
	}
	else
	{
		op2 = 1; p3 = -p3;
	}
	return Transport(p1) + OpArr[op1] + Transport(p2) + OpArr[op2] + Transport(p3) + "=";
}



string RadomFormula::Transport(int real)
{
	string s1;
	stringstream sreal;
	sreal << real;
	sreal >> s1;
	return  s1;
}

int RadomFormula::Operate(int op, int a, int b)
{
	if (op == 0)
	{
		return a + b;
	}
	else
	{
		return a - b;
	}
}