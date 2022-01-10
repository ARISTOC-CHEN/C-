#if  0
#include<iostream>
#include<string>
using namespace std;

//���󹤳�ģʽ

class KeyBoard {//�������
public:
	virtual	void show() = 0;
};

class KeyBoardMicro :public KeyBoard {//΢��ļ���
public:
	void show()
	{
		cout << "΢��ļ���" << endl;
	}
};

class KeyBoardLenovo :public KeyBoard {//����ļ���
public:
	void show()
	{
		cout << "����ļ���" << endl;
	}
};

class Mouse {//�������
public:
	virtual void show() = 0;
};

class MouseMicro :public Mouse {//΢������
public:
	void show()
	{
		cout << "΢������" << endl;
	}
};

class MouseLenovo :public Mouse {//��������
public:
	void show()
	{
		cout << "��������" << endl;
	}
};

//����
class Factory {
public:
	virtual KeyBoard* CreateKeyBoard() = 0;
	virtual Mouse* CreateMouse() = 0;
};

class FactoryMirco :public Factory {//΢����
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

class FactoryLenovo :public Factory {//���빤��
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