#pragma once
class Accout
{
public:
    double static annual ;
	static void modify(double realannual);
	double caculate();
	double showsaving();
	Accout();
    Accout(double savein);
	Accout(double savein, double annual);

private:
	double savings;
};