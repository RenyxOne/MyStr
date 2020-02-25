#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <fstream>
using namespace std;
#pragma once
class MyStr
{
private:
	char* str;
	int n;
public:
	MyStr(); 
	MyStr(char* a);
	MyStr(const char* a);
	MyStr(const MyStr& a);
	~MyStr();

	MyStr& operator = (const MyStr& a);
	MyStr operator + (const MyStr& a);
	MyStr& operator = (const int& a);
	bool operator > (const MyStr& a);
	friend ostream& operator << (ostream& os, const MyStr& a);
};

