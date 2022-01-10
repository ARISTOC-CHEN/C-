#include<iostream>
#include<vector>
#include<stack>
using namespace std;
//231模式如何构造
bool find231pattern(vector<int> nums)
{
	stack<int> s;
	int left_2 = INT_MIN;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] < left_2)	 return true;
		while (!s.empty() && nums[i] > s.top())
		{
			left_2 = s.top();
			s.pop();
		}
		s.push(nums[i]);
	}
	return false;
}
int main()
{
	vector<int> nums = { 1,2,3 };
	cout << find231pattern(nums);
}