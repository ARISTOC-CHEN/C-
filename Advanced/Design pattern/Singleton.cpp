#if 0
#include<iostream>
using namespace std;

//单例模式，一个类只能有一个对象被创建
//懒汉式
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
	Singleton_Lazy() { cout << "懒汉式" << endl; };//构造函数私有化
	static Singleton_Lazy* m_pInstance;//静态成员变量
};
Singleton_Lazy* Singleton_Lazy::m_pInstance = NULL;//静态成员变量类外初始化


//饿汉式
class  Singleton_Hungry {//饿汉式
public:
	static Singleton_Hungry* GetInstance()
	{
			return m_pInstance;
	}
private:
	Singleton_Hungry() { cout << "饿汉式" << endl; };//构造函数私有化
	static Singleton_Hungry* m_pInstance;//静态成员变量
};
Singleton_Hungry* Singleton_Hungry::m_pInstance = new Singleton_Hungry;//静态成员变量类外初始化

void test()
{
	Singleton_Lazy* p1 = Singleton_Lazy::GetInstance();
	Singleton_Lazy* p2 = Singleton_Lazy::GetInstance();
	if (p1 == p2) cout << "p1==p2，是单例" << endl;
	delete p1;
	delete p2;
	Singleton_Hungry* p3 = Singleton_Hungry::GetInstance();
	Singleton_Hungry* p4 = Singleton_Hungry::GetInstance();
	if (p3 == p4) cout << "p1==p2，是单例" << endl;
	delete p3;
	delete p4;
}
int main()
{
	test();
}
#endif
