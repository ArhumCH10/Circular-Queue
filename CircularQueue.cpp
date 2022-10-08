#include<iostream>
#include"Source.cpp"
using namespace std;

template<class t>
void showqueue(crqueue<t>&obj)
{
	cout << "Array :";

	for (int i = 0; i < obj.maxsize; i++)
	{
		cout << obj.arr[(obj.front + i) % obj.maxsize] << " ";
	}
}

int main()
{

	crqueue <int>  q;
	int num;
	cout << "Press 1 to add item to the crqueue: " << endl;
	cout << "Press 2 to remove item from the crqueue " << endl;
	cout << "Press 3 to check if the queue is full" << endl;
	cout << "Press 4 to check if the queue is empty" << endl;
	cout << "Press 5 to display the crqueue. " << endl;
	cout << "Press 0 to exit the queue" << endl;
	cout << "        " << endl;

	while (true)
	{

		cout << "press the key in the given menu:";
		cin >> num;
		if (num == 1)
		{
			cout << "Enter num :"; int L; cin >> L;
			q.enqueue(L);
		}
		else if (num == 2)
		{
			cout << " Remove element :" << q.dequeue() << endl;;
		}
		else if (num == 3)
		{
			if (q.isfull())
			{
				cout << "FuLL\n";
			}
			else
			{
				cout << "Not FuLL\n";

			}
		}
		else if (num == 4)
		{
			if (q.isempty())
			{
				cout << "Empty\n";
			}
			else
			{
				cout << "Not Empty\n";

			}
		}
		else if (num == 5)
		{
			showqueue(q);
		}
		else
		{
			cout << 1 << endl;
			break;
		}
	}

	return 0;
}