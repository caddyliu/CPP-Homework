#pragma once
const int MAXSIZE=5;
class Queue
{
private:
		int front;
		int rear;
		int flag;
public:
	int data[MAXSIZE];
	Queue();
	bool Queue::IsEmpty();
	bool Queue::IsFull();
	void Queue::EnterQueue(char datatype);
	char Queue::DeleteQueue();
	char Queue::GetHead();
	~Queue();

};
