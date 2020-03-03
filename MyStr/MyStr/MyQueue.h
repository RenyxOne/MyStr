#pragma once
#include "MyArr.h"

template <class T>
class MyQueue
{
	private:
		MyArr<T> arr;
		int q = 0;
	public:
		MyQueue<T>(){ arr.setN(1000); }
		~MyQueue() { arr.setN(0); q = 0; }
		void push(const T& a)
		{
			arr[q] = a;
			q++;
		}
		T pop()
		{
			if (Empty()) throw ("Queue empty");
			T res = arr[0];
			for (int i = 1, j = 0; i < q; i++, j++)
			{
				arr[j] = arr[i];
			}
			q--;
			return res;
		}
		bool Empty()
		{
			return !q;
		}
};

