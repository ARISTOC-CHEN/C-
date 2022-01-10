#include<iostream>
using namespace std;
//位运算操作
//操作1，除2，4，8等
int func1(int n)
{
	return n >> 4;
}
int main()
{
	cout << func1(16) << endl;
}