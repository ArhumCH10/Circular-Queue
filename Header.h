#include<iostream>
using namespace std;
template<class t>
class crqueue{
public:
	t *arr;
	int maxsize;
	int front;
	int rear;
	crqueue();
	~crqueue();
	bool isempty();
	bool isfull();
	void enqueue(t value);
	t dequeue();
	int size();
};
