#include<iostream>
#include"Header.h"
using namespace std;

template<class t>
crqueue<t>::crqueue()
{
	maxsize = 5;
	rear = -1;
	arr = new t[maxsize]{};
	front = -1;
}
template<class t>
crqueue<t>::~crqueue(){

	delete[]arr;
	arr = nullptr;
}
template<class t>
bool crqueue<t>::isfull(){
	if (front == 0 && rear == maxsize - 1){
		return true;
	}
	return false;
}
template<class t>
bool crqueue<t>::isempty(){
	if (front == maxsize - 1){
		return true;
	}
	return false;
}

template<class t>
void crqueue<t>::enqueue(t value){
	if (front == -1)
	{
		front++;
	}
	rear = (rear + 1) % maxsize;
	arr[rear] = value;
}

template<class t>
t crqueue<t>::dequeue(){
	if (isempty())
	{
		cout << "circular queue is underflow" << endl;
	}

	int n = arr[front];
	front = (front + 1) % maxsize;
	return n;
}

template<class t>
int crqueue<t>::size(){
	if (front != -1 && rear != -1)
	{
		return maxsize;
	}
	else
	{
		cout << "crqueue is empty";
	}
}