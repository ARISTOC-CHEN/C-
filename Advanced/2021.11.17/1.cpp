#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>func(vector<int>nums,int target)
{
	
	auto it1 = lower_bound(nums.begin(),nums.end(),target);
	auto it2 = upper_bound(nums.begin(), nums.end(), target);
	if (it1 == nums.end() || it2 == nums.end())	return { -1,-1 };
	int num1 = it1 - nums.begin();
	int num2 = it2 - nums.begin();
	if (nums[num2] != target)	num2 = num2 - 1;
	return { num1,num2 };
}
class base {
public:
	void func()
	{
		cout << "base";
	}
};
int main()
{
	base::func
}