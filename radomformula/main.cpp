#include"iostream"
#include"radom.h"
#include <stdlib.h>
using namespace std;
int num;
int main(int argc,int argv){
	RadomFormula rf;
	int Num;
	cout << "Please input the number of formulas you want"<<endl;
	cin >> Num;
	cout << "The Formula" << endl;
	for (int i = 1; i <= Num; i++)
	{
		cout <<"The No."<<i<<" : "<< rf.GetFormula() << endl;
	}

	system("pause");

}