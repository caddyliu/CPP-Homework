#include<string>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<sstream>
using namespace std;
class RadomFormula
{
public:
	RadomFormula();
	string GetFormula();
private:
	string OpArr;
	int p1, p2, p3;
	int op1, op2;
	string Transport(int in);
	int Operate(int op, int a, int b);
};