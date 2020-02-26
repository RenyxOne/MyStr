#pragma once
template <class T>
class MyArr
{
private:
	T* arr; int n;
	void copy(T* a, int n);
public:
	MyArr();
	MyArr(T* a, int n);
	MyArr(const MyArr& a);
	MyArr(int n);

	~MyArr();

	int getSize();

	MyArr& operator = (const MyArr& a);
	MyArr operator + (const MyArr& a);
	T& operator [] (int k);
};

template<class T>
inline void MyArr<T>::copy(T* a, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = a[i];
	this->n = n;
}

template<class T>
inline int MyArr<T>::getSize()
{
	return n;
}

template<class T>
inline MyArr<T>::MyArr()
{
	arr = NULL;
	n = 0;
}

template<class T>
inline MyArr<T>::MyArr(T* a, int n)
{
	arr = new T[n];
	copy(arr, a);
}

template<class T>
inline MyArr<T>::MyArr(const MyArr& a)
{
	n = a.n;
	
}

template<class T>
inline MyArr<T>::MyArr(int n)
{
	arr = new T[n];
	this->n = n;
}

template<class T>
inline MyArr<T>::~MyArr()
{
	n = 0;
	delete[] arr;
}

template<class T>
inline MyArr& MyArr<T>::operator=(const MyArr &a)
{
	if (arr) delete[] arr;
	arr = new T[n];
	copy(a.arr, a.n);
	return *this;
}

template<class T>
inline MyArr MyArr<T>::operator+(const MyArr& a)
{
	MyArr New(n + a.n);
	for (int i = 0; i < n; i++)
		New.Arr[i] = arr[i];
	for (int i = 0; i < a.n; i++)
		New.Arr[n + i] = a.arr[i];
	return New;
}

template<class T>
inline T& MyArr<T>::operator[](int k)
{
	if (k > n) throw("out of range");
	return arr[k];
}
