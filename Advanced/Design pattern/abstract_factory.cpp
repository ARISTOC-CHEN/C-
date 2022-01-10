#if  0
#include<iostream>
#include<string>
using namespace std;

//抽象工厂模式

class KeyBoard {//抽象键盘
public:
	virtual	void show() = 0;
};

class KeyBoardMicro :public KeyBoard {//微软的键盘
public:
	void show()
	{
		cout << "微软的键盘" << endl;
	}
};

class KeyBoardLenovo :public KeyBoard {//联想的键盘
public:
	void show()
	{
		cout << "联想的键盘" << endl;
	}
};

class Mouse {//抽象鼠标
public:
	virtual void show() = 0;
};

class MouseMicro :public Mouse {//微软的鼠标
public:
	void show()
	{
		cout << "微软的鼠标" << endl;
	}
};

class MouseLenovo :public Mouse {//联想的鼠标
public:
	void show()
	{
		cout << "联想的鼠标" << endl;
	}
};

//工厂
class Factory {
public:
	virtual KeyBoard* CreateKeyBoard() = 0;
	virtual Mouse* CreateMouse() = 0;
};

class FactoryMirco :public Factory {//微软工厂
public:
	KeyBoard* CreateKeyBoard()
	{
		return new KeyBoardMicro;
	}
	Mouse* CreateMouse()
	{
		return new MouseMicro;
	}
};

class FactoryLenovo :public Factory {//联想工厂
public:
	KeyBoard* CreateKeyBoard()
	{
		return new KeyBoardLenovo;
	}
	Mouse* CreateMouse()
	{
		return new MouseLenovo;
	}
};
void test()
{
	Factory* f = NULL;
	KeyBoard* k= NULL;
	Mouse* m = NULL;
	f = new FactoryMirco;
	k = f->CreateKeyBoard();
	m = f->CreateMouse();
	k->show();
	m->show();
}
int main()
{
	test();
}

#endif