#include "queue.h"
Queue::Queue(){
	front = 0;
	rear = 0;
}

bool Queue::IsEmpty() {
	return(flag== 0);
}

bool Queue::IsFull() {
	return((flag==1) &&(rear == front));
}
void Queue::EnterQueue(char realdata) {
	data[rear] = realdata;
	rear = (rear + 1) % MAXSIZE;
	flag = 1;
}

char Queue::DeleteQueue() {
	char realdata = data[front];
	front = (front + 1) % MAXSIZE;
	if (rear == front) flag = 0;
	return realdata;
}

char Queue::GetHead() {
	return data[front];
}

Queue::~Queue(){
	rear = front = 0;
}