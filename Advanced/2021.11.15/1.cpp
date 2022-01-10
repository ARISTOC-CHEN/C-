#include<iostream>
using namespace std;
//÷∏’Î–Œ Ω
void func1(int** a)
{
	int b = 100;
	*a =&b;
}
int main()
{
	int a = 10;
	int* p = &a;
	int** p1 = &p;
	**p1 = 100;
	cout << a << " " << *p << " " << **p1;


}