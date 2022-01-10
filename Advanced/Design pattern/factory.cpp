#if 0
#include<iostream>
#include<string>
using namespace std;

//����ģʽ
class AbstractFruit {
public:
	virtual void showname() = 0;
};

class Apple :public AbstractFruit {
public:
	void showname()
	{
		cout << "I'm an apple" << endl;
	}
};

class Banana :public AbstractFruit {
public:
	void showname()
	{
		cout << "I'm a banana" << endl;
	}
};

//���󹤳���
class AbstractFactory {
public:
	virtual AbstractFruit* createfruit() = 0; 
};
//ƻ������
class AppleFactory:public AbstractFactory{
public:
	AbstractFruit* createfruit()
	{
		return new Apple;
	}
};
//�㽶����
class BananaFactory :public AbstractFactory {
public:
	AbstractFruit* createfruit()
	{
		return new Banana;
	}
};

void test()
{
	AbstractFactory* factory = NULL;
	AbstractFruit* fruit = NULL;

	//��factory��ֵΪAppleFactory
	factory = new AppleFactory;//����˵���ﻹ�ǵ�new
	fruit = factory->createfruit();
	fruit->showname();
	delete fruit;
	//��factory��ֵΪBananaFactory
	factory = new BananaFactory;//����˵���ﻹ�ǵ�new
	fruit = factory->createfruit();
	fruit->showname();
}
int main()
{
	test();
}
#endif