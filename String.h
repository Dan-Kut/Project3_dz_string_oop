#pragma once
class String
{
private:
	char* str;
	int size;
public:
	int MyStrLen();
	String(char*, int);
	String(int);
	String();
	~String();
};
