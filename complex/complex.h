#pragma once
class complex
{
public:
	complex();
	complex(int real, int imag);
	void complex::Setvalue(int real,int imag);
	int complex::Returnreal();
	int complex::Returnimag();
private:
	int real;
	int imag;
};
