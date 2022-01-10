#if 0
#include<iostream>
#include<vector>
using namespace std;
//01背包

//一维数组
void Bag1()
{
	int bagweight = 4;
	vector<int> weight = { 1,3,4 };
	vector<int> value = { 15,20,30 };

	vector<int> dp(bagweight + 1, 0);

	for (int i = 0; i < weight.size(); i++)
	{
		//逆向遍历
		for (int j = bagweight; j >=weight[i]; j--)
		{
			dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
		}
	}
	cout << dp[bagweight] << endl;
}
//二维数组
void Bag2()
{
	int bagweight = 4;
	vector<int> weight = { 1,3,4 };
	vector<int> value = { 15,20,30 };
	//dp数组的含义
	vector<vector<int>>dp(value.size(), vector<int>(bagweight + 1, 0));
	//初始化
	for (int j = weight[0]; j <= bagweight; j++)
	{
		dp[0][j] = value[0];
	}
	//遍历过程
	for (int i = 1; i < value.size(); i++)
	{
		for (int j = 1; j <= bagweight; j++)
		{
			if (j < weight[i]) dp[i][j] = dp[i - 1][j];
			else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
		}
	}
	cout << dp[value.size() - 1][bagweight];
}

int main()
{
	Bag1();
	Bag2();
}
#endif