#include"accout.h"
#include"iostream"
using namespace std;

double Accout::annual = 0;
void Accout::modify(double realannual)
{
	annual = realannual;
}

double Accout::caculate()
{
		double MI=0.00;
		MI =savings*annual / 12;
		return MI;
}

double Accout::showsaving()
{
	return savings;
}

Accout::Accout()
{
	annual = 0;
	savings = 0;
}
Accout::Accout(double savein)
{
	annual = 0;
	savings = savein;
}
Accout::Accout (double savein, double inannual)
{
	savings = savein;
	annual = inannual;
}
