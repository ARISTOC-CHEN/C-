#if  0
#include<iostream>
#include<string>
using namespace std;

//��ӰƱ���۷���
/*(1) ѧ��ƾѧ��֤������Ʊ��8���Żݣ�
	(2) ������10���꼰���µĶ�ͯ������ÿ��Ʊ����10Ԫ���Żݣ�ԭʼƱ������ڵ���20Ԫ����
	(3) ӰԺVIP�û�������Ʊ�۰���Ż��⻹�ɽ��л��֣������ۼƵ�һ����ȿɻ�ȡ��ӰԺ���͵Ľ�Ʒ��
	��ϵͳ�ڽ������ܻ�Ҫ������Ҫ�����µĴ��۷�ʽ��
*/

//��ӰƱ��,����д��
class MovieTicket {
public:
	//����Ʊ��
	void setPrice(double p)
	{
		this->price = p;
	}
	//��������
	void setType(string t)
	{
		this->type = t;
	}
	//����Ʊ��
	double calculate()
	{
		//ѧ��Ʊ
		if (this->type == "student")
		{
			cout << "ѧ��Ʊ:";
			return this->price * 0.8;
		}
		//��ͯƱ
		else if (this->type == "children" && this->price >= 20)
		{
			cout << "��ͯƱ:";
			return this->price - 10;
		}
		//VIPƱ
		else if (this->type == "vip")
		{
			cout << "vipƱ:";
			cout << "���ӻ���!";
			return this->price * 0.5;
		}
		//�������κ����������ԭ��
		else
		{
			return this->price;
		}
	}
	//��ȡƱ��
	double getPrice()
	{
		return this->calculate();
	}
private:
	double price;//Ʊ��
	string type;//Ʊ������
};


////���������
//class Discount {
//public:
//	virtual ~Discount() {};
//	virtual double calculate()=0;
//};
//
////��ӰƱ����ģʽ
//class MovieTicket {
//public:
//	void setPrice(double p)
//	{
//		this->price = p;
//	}
//	void setDiscount(Discount d)
//	{
//		this->discount = d;
//	}
//	double getPrice()
//	{
//		return discount.calculate();
//	}
//private:
//	double price;
//	Discount& discount;
//};
//
//
////���������
//class studentdicount:public Discount{
//	double calculate(double price)
//	{
//		cout << "ѧ��Ʊ:";
//		return price * 0.8;
//	}
//};
//
//class childrendicount :public Discount {
//	double calculate(double price)
//	{
//		cout << "��ͯƱ:";
//		return price -10;
//	}
//};
//
//class vipdicount :public Discount {
//	double calculate(double price)
//	{
//		cout << "VIP:";
//		return price * 0.5;
//	}
//};
int main()
{
	MovieTicket mt;
	double orignalprice = 60.0;//ԭʼƱ��
	double currentprice;//����Ʊ��
	
	mt.setPrice(orignalprice);
	cout << "ԭʼƱ��Ϊ��" << orignalprice << endl;
	cout << "----------------------------------" << endl;

	mt.setType("student");//ѧ��Ʊ
	currentprice = mt.getPrice();
	cout << "�ۺ�Ʊ��Ϊ��" << currentprice << endl;
	cout << "----------------------------------" << endl;

	mt.setType("children");//��ͯƱ
	currentprice = mt.getPrice();
	cout << "�ۺ�Ʊ��Ϊ��" << currentprice << endl;
	cout << "----------------------------------" << endl;

	mt.setType("vip");
	currentprice = mt.getPrice();
	cout << "�ۺ�Ʊ��Ϊ��" << currentprice << endl;
	cout << "----------------------------------" << endl;

}
#endif