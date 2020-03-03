#pragma once
#include "MyArr.h"

template <class T>
class MyStack
{
private:
	int nStack=0;
	MyArr<T> arr;
public:
	/*MyStack<T>(int n){
		arr = MyArr<T>(n);
	}*/
	MyStack<T>() {
		arr.setN(1000);
	}
	~MyStack() { arr.setN(0); nStack = 0; }
	void push(const T &a)
	{
		arr[nStack] = a;
		nStack++;
	}
	T pop()
	{
		nStack--;
		T help = (arr[nStack]);
		return help;
	}
};

