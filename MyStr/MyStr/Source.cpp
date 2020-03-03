#include <iostream>
#include "MyStr.h"
#include "MyArr.h"
#include "MyStack.h"
#include "MyQueue.h"

#include "Interface.h"
#include "Cat.h"
#include "Dog.h"
template <class T>
void BubbleSort(T* a, int n)
{
	T t;
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = 0; i < n-1; i++)
			if (a[i] > a[i + 1]) { flag = true; t = a[i]; a[i] = a[i + 1]; a[i + 1] = t; }

	}
}

int main()
{
	//MyStr a("Hello");
	//MyStr a1(" World");
	//MyStr a3;
	//a3 = 123;
	//MyStr arr1[3];
	////arr1[0] = a1; arr1[1] = a; arr1[2] = a3;
	//cout << a3;// << " " << a1;
	//MyStr a2;
	//a2 = a + a1;
	//int d = a2 > a1;
	////std::cout <<"\n d="<< d<<endl;
	//int arr[3] = { -3,-4,20 };
	//BubbleSort(arr1, 3);
	//for (int i = 0; i < 3; i++)
	//	cout << arr1[i] << ' ';
	//int n = 10;
	//MyArr<int> a1(n);
	//for (int i = 0; i < n; i++)
	//	a1[i] = i;
	//std::cout << a1;
	MyQueue<int> Q;
	//Interface<int>* Q = new MyQueue<int>;

	/*int n = 15;
	for (int i = 0; i < n; i++)
		Q.push(i);
		

	for (int i = 0; i < n; i++)
	{
		int t = Q.pop();
		cout << t << endl;
	} */
	Interface* s = new Dog;
	s->say();

	return 0;

}