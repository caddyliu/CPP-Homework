#include"Vect.h"
#include"iostream"
using namespace std;

int main(int argv, int argc) {
	int value[4] = { 2,1,0,7 };
	Vect v1(4); Vect v2; Vect v3(value, 4);
	cout << "v1��ʼ��"<<endl;
	v1.Print();
	cout << "v2��ʼ��"<<endl;
	v2.Print();
	cout << "v3��ʼ��"<<endl;
	v3.Print();
	cout << "��v3���Ƹ�v1"<<endl;
	v1.Copy(v3);
	v1.Print();
	cout << "�ı�v1�ĵڶ���Ԫ��" << endl;
	v1.Input(1,9);
	v1.Input(5,9);
	cout << "��ȡv1�ĵ��ĸ�Ԫ��" << endl;
	v1.Output(3);
	v1.Output(5);
	v1.Print();
	system("pause");
	return 0;
}