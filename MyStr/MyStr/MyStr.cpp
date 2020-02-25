#include "MyStr.h"

MyStr::MyStr()
{
	str = 0;  n = 0;
}

MyStr::MyStr(char* a)
{
	n = strlen(a); str = new char[n + 1]; strcpy(str, a);
}

MyStr::MyStr(MyStr& a)
{
	n = a.n;
	str = new char[n + 1];
	strcpy(str, a.str);
}
