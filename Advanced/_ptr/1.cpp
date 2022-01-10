#include<iostream>
#include<memory>
using namespace std;

int main()
{
	unique_ptr<int> p1(new int(10));
	unique_ptr<int> p2;
	p2 .reset(p1.release());
	cout << *p2;
}