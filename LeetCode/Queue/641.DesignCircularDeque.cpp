#include <iostream>
using namespace std;

class MyCircularDeque
{
private:
	int *_arr;
	int _capacity;
	int _count = 0;
	int _front;
	int _rear;

	int _prev(int pos)
	{
		--pos;
		if (pos == -1) // go back from begin
			pos = _capacity - 1;
		return pos;
		// return (pos - 1 + size) % size;	//  shorter way
	}

	int _next(int pos)
	{
		++pos;
		if (pos == _capacity)
			pos = 0;
		return pos;
		// return (pos + 1) % size;	//  shorter way
	}

public:
	MyCircularDeque(int k) : _capacity(k)
	{
		_arr = new int[k];
		_front = 0;
		_rear = 0;
	}

	bool insertFront(int value)
	{
		if (isFull())
			return false;

		_front = _prev(_front);  // move back before inserting
		_arr[_front] = value;
		_count++;
		return true;
	}

	bool insertLast(int value)
	{
		if (isFull())
			return false;

		_arr[_rear] = value;
		_rear = _next(_rear);  // move forward after inserting
		_count++;
		return true;
	}

	bool deleteFront()
	{
		if (isEmpty())
			return false;

		_front = _next(_front);  // move forward to delete
		_count--;
		return true;
	}

	bool deleteLast()
	{
		if (isEmpty())
			return false;

		_rear = _prev(_rear);  // move back to delete
		_count--;
		return true;
	}

	int getFront()
	{
		if (isEmpty())
			return -1;
		return _arr[_front];
	}

	int getRear()
	{
		if (isEmpty())
			return -1;
		return _arr[_prev(_rear)];
	}

	bool isEmpty()
	{
		return _count == 0;
	}

	bool isFull()
	{
		return _count == _capacity;
	}

	~MyCircularDeque()
	{
		delete[] _arr;
	}
};
