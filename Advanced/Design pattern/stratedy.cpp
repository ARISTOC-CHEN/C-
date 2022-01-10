#if  0
#include<iostream>
#include<string>
using namespace std;

//电影票打折方案
/*(1) 学生凭学生证可享受票价8折优惠；
	(2) 年龄在10周岁及以下的儿童可享受每张票减免10元的优惠（原始票价需大于等于20元）；
	(3) 影院VIP用户除享受票价半价优惠外还可进行积分，积分累计到一定额度可换取电影院赠送的奖品。
	该系统在将来可能还要根据需要引入新的打折方式。
*/

//电影票类,常规写法
class MovieTicket {
public:
	//设置票价
	void setPrice(double p)
	{
		this->price = p;
	}
	//设置类型
	void setType(string t)
	{
		this->type = t;
	}
	//计算票价
	double calculate()
	{
		//学生票
		if (this->type == "student")
		{
			cout << "学生票:";
			return this->price * 0.8;
		}
		//儿童票
		else if (this->type == "children" && this->price >= 20)
		{
			cout << "儿童票:";
			return this->price - 10;
		}
		//VIP票
		else if (this->type == "vip")
		{
			cout << "vip票:";
			cout << "增加积分!";
			return this->price * 0.5;
		}
		//不满足任何情况，返回原价
		else
		{
			return this->price;
		}
	}
	//获取票价
	double getPrice()
	{
		return this->calculate();
	}
private:
	double price;//票价
	string type;//票的类型
};


////抽象策略类
//class Discount {
//public:
//	virtual ~Discount() {};
//	virtual double calculate()=0;
//};
//
////电影票策略模式
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
////具体策略类
//class studentdicount:public Discount{
//	double calculate(double price)
//	{
//		cout << "学生票:";
//		return price * 0.8;
//	}
//};
//
//class childrendicount :public Discount {
//	double calculate(double price)
//	{
//		cout << "儿童票:";
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
	double orignalprice = 60.0;//原始票价
	double currentprice;//打折票价
	
	mt.setPrice(orignalprice);
	cout << "原始票价为：" << orignalprice << endl;
	cout << "----------------------------------" << endl;

	mt.setType("student");//学生票
	currentprice = mt.getPrice();
	cout << "折后票价为：" << currentprice << endl;
	cout << "----------------------------------" << endl;

	mt.setType("children");//儿童票
	currentprice = mt.getPrice();
	cout << "折后票价为：" << currentprice << endl;
	cout << "----------------------------------" << endl;

	mt.setType("vip");
	currentprice = mt.getPrice();
	cout << "折后票价为：" << currentprice << endl;
	cout << "----------------------------------" << endl;

}
#endif