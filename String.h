#pragma once
class String
{
private:
	char* str;
	int size;
	static int amount_elements;
public:
	static int getAmountOfElements();
	int MyStrLen();
	
	String(const String& str);
	String(char*, int);
	String(int);
	String();
	~String();
};