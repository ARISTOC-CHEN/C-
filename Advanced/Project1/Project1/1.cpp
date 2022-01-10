#include<iostream>
#include<vector>
using namespace std;
int love(int n, int budget, int budget_num, vector<int> favorite_value, vector<int> adopt_cost, vector<int> feed_cost)
{
	vector<int> feed_budget(n);
	for (int i = 0; i < n; i++)
	{
		feed_budget[i] = budget_num / n * favorite_value[i];
	}
	//喂养预算小于喂养成本
	//领养成本和喂养成本同时小于预算即可
	for (int i = n - 1; i >= 0; i--)
	{
		if (feed_budget[i] >= feed_cost[i] && feed_budget[i] <= budget && adopt_cost[i] <= budget)
		{
			return favorite_value[i];
		}
	}
	return -1;
}
int main()
{
	int n = 5, budget = 100, budget_num = 100;
	vector<int> favorite_value = { 1,2,3,4,5 };
	vector<int> adopt_cost = { 20,50,90,120,150 };
	vector<int> feed_cost = { 11,22,44,88,176 };
	cout << love(n, budget, budget_num, favorite_value, adopt_cost, feed_cost);
}