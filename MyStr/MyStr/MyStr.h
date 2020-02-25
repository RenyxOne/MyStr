#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#pragma once
class MyStr
{
private:
	char* str;
	int n;
public:
	MyStr();
	MyStr(const char* a);
	MyStr(const MyStr& a);
	;
};

