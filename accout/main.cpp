#include"accout.h"
#include"iostream"
using namespace std;

int main(int argc, int argv) {
	Accout saver1(2000.00, 0.03);
	Accout saver2(3000.00, 0.03);
	cout << "�˻���saver1  ||   ��ϢΪ��"<<saver1.caculate()<<"  ||   ���Ϊ��"<<saver1.showsaving()<<endl;
	cout << "�˻���saver2  ||   ��ϢΪ��" << saver2.caculate() << "  ||   ���Ϊ��" << saver2.showsaving() << endl;
	saver1.modify(0.04);
	saver2.modify(0.04);
	cout << "�˻���saver1  ||   ��ϢΪ��" << saver1.caculate() << "  ||   ���Ϊ��" << saver1.showsaving() << endl;
	cout << "�˻���saver2  ||   ��ϢΪ��" << saver2.caculate() << "  ||   ���Ϊ��" << saver2.showsaving() << endl;
	system("pause");
	return 0;
}