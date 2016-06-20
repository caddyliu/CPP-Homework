#include "Vect.h"
#include"iostream"
using namespace std;

void Vect::Input(int asize, int value)
{
	if (asize > this->size)
		cout << "Wrong size" << endl;
	else
	{
		arr[asize] = value;
		cout << this->arr[asize] << endl;
	}
}
void Vect::Output(int asize)
{
	if (asize > this->size)
		cout << "Wrong size" << endl;
	else
		cout << this->arr[asize] << endl;
}

void Vect::Copy(const Vect & v)
{
	size = v.size;
	delete[]arr;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = v.arr[i];
	}
}
void Vect::Print()
{
	for (int i = 0; i < this->size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "³¤¶È£º" << size;
	cout << endl;
}
Vect::Vect()
{
	size = 1;
	arr = new int[size];
}
Vect::Vect(const Vect & v)
{
	size = v.size;
	arr = new int[size];
	for (int i = 0; i < v.size; i++)
	{
		arr[i] = v.arr[i];
	}
}
Vect::Vect(int asize)
{
	size = asize;
	arr = new int[size];
}

Vect::Vect(int *value, int asize)
{
	size = asize;
	arr = new int[size];
	for (int i = 0; i < asize; i++)
	{
		arr[i] = value[i];
	}
}

Vect::~Vect()
{
	delete[]arr;
}