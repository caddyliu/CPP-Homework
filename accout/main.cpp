#include"accout.h"
#include"iostream"
using namespace std;

int main(int argc, int argv) {
	Accout saver1(2000.00, 0.03);
	Accout saver2(3000.00, 0.03);
	cout << "账户：saver1  ||   月息为："<<saver1.caculate()<<"  ||   存款为："<<saver1.showsaving()<<endl;
	cout << "账户：saver2  ||   月息为：" << saver2.caculate() << "  ||   存款为：" << saver2.showsaving() << endl;
	saver1.modify(0.04);
	saver2.modify(0.04);
	cout << "账户：saver1  ||   月息为：" << saver1.caculate() << "  ||   存款为：" << saver1.showsaving() << endl;
	cout << "账户：saver2  ||   月息为：" << saver2.caculate() << "  ||   存款为：" << saver2.showsaving() << endl;
	system("pause");
	return 0;
}