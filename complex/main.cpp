#include"complex.h"
#include"iostream"

using namespace std;

int main(int argc, int argv) {
	complex c(1,1);
	cout << c.Returnreal() << "x+" << c.Returnimag() << "i" << endl;
	c.Setvalue(2, 4);
	cout << c.Returnreal()<<"x+" << c.Returnimag() << "i" << endl;
	return 0;
}