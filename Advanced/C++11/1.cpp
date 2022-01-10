#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	const char* s = "abcdef";
	s += 2;
	cout<< "s=" << strlen(s) << endl;
}