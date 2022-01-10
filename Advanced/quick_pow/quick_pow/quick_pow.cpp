#include<iostream>
using namespace std;
//函数1：返回多次幂的后三位,最简单的方法但是在一直算时多半过不了，会超时。
long long func1(long long x,long long y)
{
	long long ans=1;
	for (long long i =1 ; i <= y; i++)
	{
		ans *= x;
	}
	return ans%1000;
}
//函数2：利用模运算的性质求幂运算的最后三位
long long func2(long long x, long long y)
{
	long long ans = 1;
	for (long long i = 1; i <= y; i++)
	{
		ans = (ans % 1000 * x % 1000) % 1000;
	}
	return ans ;
}
//函数3：通过快速幂求x的y次方
long long quick_pow(int x, int y)
{
	long long ans = 1;
	//还可以将其改为二进制位运算
	while (y> 0)
	{
		if (y % 2 == 1)		ans = ans * x;
		y /= 2;
		x *= x;
	}
	return ans;
}
int main()
{
	cout << func1(9,22 ) << endl;//幂值很大时，会溢出
	cout << func2(9, 22) << endl;//方法很棒
	cout << quick_pow(2, 10) << endl;//快速幂
}