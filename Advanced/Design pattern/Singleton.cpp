#if 0
#include<iostream>
using namespace std;

//����ģʽ��һ����ֻ����һ�����󱻴���
//����ʽ
class  Singleton_Lazy {
public:
	static Singleton_Lazy* GetInstance()
	{
		if (m_pInstance == NULL)
		{
			m_pInstance = new Singleton_Lazy;
		}
		return m_pInstance;
	}
private:
	Singleton_Lazy() { cout << "����ʽ" << endl; };//���캯��˽�л�
	static Singleton_Lazy* m_pInstance;//��̬��Ա����
};
Singleton_Lazy* Singleton_Lazy::m_pInstance = NULL;//��̬��Ա���������ʼ��


//����ʽ
class  Singleton_Hungry {//����ʽ
public:
	static Singleton_Hungry* GetInstance()
	{
			return m_pInstance;
	}
private:
	Singleton_Hungry() { cout << "����ʽ" << endl; };//���캯��˽�л�
	static Singleton_Hungry* m_pInstance;//��̬��Ա����
};
Singleton_Hungry* Singleton_Hungry::m_pInstance = new Singleton_Hungry;//��̬��Ա���������ʼ��

void test()
{
	Singleton_Lazy* p1 = Singleton_Lazy::GetInstance();
	Singleton_Lazy* p2 = Singleton_Lazy::GetInstance();
	if (p1 == p2) cout << "p1==p2���ǵ���" << endl;
	delete p1;
	delete p2;
	Singleton_Hungry* p3 = Singleton_Hungry::GetInstance();
	Singleton_Hungry* p4 = Singleton_Hungry::GetInstance();
	if (p3 == p4) cout << "p1==p2���ǵ���" << endl;
	delete p3;
	delete p4;
}
int main()
{
	test();
}
#endif
