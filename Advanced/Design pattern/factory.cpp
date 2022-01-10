#if 0
#include<iostream>
#include<string>
using namespace std;

//工厂模式
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

//抽象工厂类
class AbstractFactory {
public:
	virtual AbstractFruit* createfruit() = 0; 
};
//苹果工厂
class AppleFactory:public AbstractFactory{
public:
	AbstractFruit* createfruit()
	{
		return new Apple;
	}
};
//香蕉工厂
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

	//将factory赋值为AppleFactory
	factory = new AppleFactory;//就是说这里还是得new
	fruit = factory->createfruit();
	fruit->showname();
	delete fruit;
	//将factory赋值为BananaFactory
	factory = new BananaFactory;//就是说这里还是得new
	fruit = factory->createfruit();
	fruit->showname();
}
int main()
{
	test();
}
#endif