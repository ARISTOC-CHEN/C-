#include<iostream>
using namespace std;
//����1�����ض���ݵĺ���λ,��򵥵ķ���������һֱ��ʱ�������ˣ��ᳬʱ��
long long func1(long long x,long long y)
{
	long long ans=1;
	for (long long i =1 ; i <= y; i++)
	{
		ans *= x;
	}
	return ans%1000;
}
//����2������ģ�����������������������λ
long long func2(long long x, long long y)
{
	long long ans = 1;
	for (long long i = 1; i <= y; i++)
	{
		ans = (ans % 1000 * x % 1000) % 1000;
	}
	return ans ;
}
//����3��ͨ����������x��y�η�
long long quick_pow(int x, int y)
{
	long long ans = 1;
	//�����Խ����Ϊ������λ����
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
	cout << func1(9,22 ) << endl;//��ֵ�ܴ�ʱ�������
	cout << func2(9, 22) << endl;//�����ܰ�
	cout << quick_pow(2, 10) << endl;//������
}