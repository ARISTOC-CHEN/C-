#if 0
#include<iostream>
using namespace std;
//����ԭ������ӿڱ��
class abstactcalculator {
public:
	virtual void setnum(int a, int b) =0;
	virtual int getresult() =0;
};

class addfunc :public abstactcalculator {
public:
	void setnum(int a, int b)
	{
		this->m_a = a;
		this->m_b = b;
	}
	int getresult()
	{
		return m_a + m_b;
	}
private:
	int m_a;
	int m_b;
};
int main()
{
	abstactcalculator* c = new addfunc;
	c->setnum(10, 20);
	cout << c->getresult();
}
#endif