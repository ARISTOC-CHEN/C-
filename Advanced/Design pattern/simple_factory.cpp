#if 0
#include<iostream>
#include<string>
using namespace std;

//�򵥹���ģʽ
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

class Fruitfactory {
public:
	AbstractFruit* creatfruit(string flag)
	{
		if (flag == "apple")
		{
			return new Apple;
		}
		else  if (flag == "banana")
		{
			return new Banana;
		}
		else
			return NULL;
	}
};

int main()
{
	//����Ҫ���Ĵ�������
	Fruitfactory* factory = new Fruitfactory;
	AbstractFruit* fruit = factory->creatfruit("apple");
	fruit->showname();
	delete  fruit;
	fruit = factory->creatfruit("banana");
	fruit->showname();
	delete fruit;
	delete factory;
}
#endif