#include "String.h"
#include "iostream"

using namespace std;

int main()
{
	char arr[10] = { 's','d','g','4' };
	String str1;
	String str2 = { 21 };
	String str3 = {arr, 24 };

	cout << str1.MyStrLen();
}