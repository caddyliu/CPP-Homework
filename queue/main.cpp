#include<iostream>
#include"queue.h"
using namespace std;

int main(int argc, char *argv) {
	Queue q;
	char	  real[MAXSIZE];
	int i = 0, j;
	cout << "--------------------Start the Queue Operation--------------------" << endl;
	cout << "Input menber" << endl;
	while (!q.IsFull())
	{
		cin >> real[i];
		q.EnterQueue(real[i]);
		i++;
	}
	for ( j= 0; j < 5; j++)
	{
		cout << (char)q.data[j] ;
	}
	cout << endl;
	cout << "Delete menber  :" << q.DeleteQueue() << endl;
	cout << "Get the top menber  :" << q.GetHead() << endl;
	system("pause");
	return 0;

}