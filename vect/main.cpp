#include"Vect.h"
#include"iostream"
using namespace std;

int main(int argv, int argc) {
	int value[4] = { 2,1,0,7 };
	Vect v1(4); Vect v2; Vect v3(value, 4);
	cout << "v1初始化"<<endl;
	v1.Print();
	cout << "v2初始化"<<endl;
	v2.Print();
	cout << "v3初始化"<<endl;
	v3.Print();
	cout << "将v3复制给v1"<<endl;
	v1.Copy(v3);
	v1.Print();
	cout << "改变v1的第二个元素" << endl;
	v1.Input(1,9);
	v1.Input(5,9);
	cout << "获取v1的第四个元素" << endl;
	v1.Output(3);
	v1.Output(5);
	v1.Print();
	system("pause");
	return 0;
}