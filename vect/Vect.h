#pragma once
class Vect
{
public:
	void Input(int asize,int value);
	void Output(int asize);
	void Copy(const Vect&v);
	void Print();
	Vect();
	Vect(int asize);
	Vect(int* value,int asize);
	Vect(const Vect& v);
	~Vect();

private:
	int size;
	int* arr;
};

