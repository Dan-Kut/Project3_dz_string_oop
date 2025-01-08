#include "String.h"
#include "iostream"

using namespace std;


int String::amount_elements = 0;

int String::getAmountOfElements()
{
	return amount_elements;
}

int String::MyStrLen()
{
	int num = 0;
	for (int i = 0; i > -1; i++)
	{
		num = i;
		if (this->str[i] == '\0')
		{
			break;
		}
	}
	return num;
}

String::String(const String& str)
{
	if (str.str != nullptr && str.size >= 0)
	{
		this->size = str.size;
		this->str = new char[size + 1];
		strcpy_s(this->str, size + 1, str.str);
		this->str[size] = '\0';
		amount_elements++;
	}
	else
	{
		cout << "error";
	}
}

String::String(char* str, int size)
{
	if (str == nullptr && size <= 0)
	{
		this->size = 0;
		this->str = nullptr;
	}
	else
	{
		this->size = size;
		this->str = new char[size + 1];
		strcpy_s(this->str, size + 1, str);
		this->str[size] = '\0';
	}
	amount_elements++;
}

String::String(int size)
{
	if (size <= 0)
	{
		this->size = size;
		str = new char[size + 1];
		str[size] = '\0';
	}
	amount_elements++;
}

String::String()
{
	size = 80;
	str = new char[size + 1];
	str[size] = '\0';
	amount_elements++;
}

String::~String()
{
	if (str != nullptr)
	{
		delete[] str;
	}
}

