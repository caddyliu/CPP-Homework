#include"complex.h"
#include"iostream"
using namespace std;

complex::complex() {
	this->real = 0;
	this->imag = 0;
}
complex::complex(int real, int imag) {
	this->real = real;
	this->imag = imag;
}
void complex::Setvalue(int real, int imag)
{
	this->real = real;
	this->imag = imag;
}
int complex::Returnreal()
{
	return real;
}
int complex::Returnimag()
{
	return imag;
}