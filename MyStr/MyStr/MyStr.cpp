#include "MyStr.h"

MyStr::MyStr()
{
	str = 0;  n = 0;
}

MyStr::MyStr(char* a)
{
	n = strlen(a); str = new char[n + 1]; strcpy(str, a);
}

MyStr::MyStr(const char* a)
{
	n = strlen(a); str = new char[n + 1]; strcpy(str, a);
}

MyStr::MyStr(const MyStr& a)
{
	n = a.n;
	str = new char[n + 1];
	strcpy(str, a.str);
}

MyStr::~MyStr()
{
	n = 0; delete[] str;
}

MyStr& MyStr::operator=(const MyStr& a)
{
	n = a.n;
	delete[] str;
	str = new char[n+1];
	strcpy(str, a.str);
	return* this;
}

MyStr MyStr::operator+(const MyStr& a)
{
	MyStr s1;
	s1.n = this->n + a.n;
	s1.str = new char[s1.n + 1];
	strcpy(s1.str, this->str);
	strcat(s1.str, a.str);
	return s1;
}

MyStr& MyStr::operator=(const int& a)
{
	char help[20] = { '\0' };
	this -> n = 0;

	for (int i = 0, a1 = a; a1 > 0; i++)
	{ 
		help[i] = a1 % 10+'0'; 
		a1 /= 10; 
		n++; 
	}
	//cout << "\n n = " << n << endl;
	delete[] str; str = new char[n + 1];
	for (int i = 0, j = n - 1; j >=0 ; i++, j--) 
		str[i] = help[j];
	str[n] = '\0';
	return *this;
}

bool MyStr::operator>(const MyStr& a)
{
	return strcmp(str, a.str) > 0;
}

ostream& operator<<(ostream& os, const MyStr& a)
{
	return os << a.str;
}

