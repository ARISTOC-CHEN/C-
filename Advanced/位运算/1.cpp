#include<iostream>
using namespace std;
//λ�������
//����1����2��4��8��
int func1(int n)
{
	return n >> 4;
}
int main()
{
	cout << func1(16) << endl;
}