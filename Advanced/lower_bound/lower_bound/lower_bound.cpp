#include<iostream>
#include<vector>
using namespace std;
//实现lower_bound,返回第一个大于等于target的下标值
int low_b(vector<int> nums,int target)
{
	int left = 0, right = nums.size() - 1;
	while (left < right)
	{
		int mid = (right - left) / 2 + left;
		if (nums[mid] == target)		return mid;
		else if (nums[mid] > target)		right=mid;
		else left= mid+1;
	}
	return right;
}
//实现查找一个元素是否在数组中
bool find_target(vector<int>nums, int target)
{
	int left = 0, right = nums.size() - 1;
	while (left <=right)
	{
		int mid = (right - left) / 2 + left;
		if (nums[mid] == target)		return true;
		else if (nums[mid] > target)		right = mid - 1;
		else left = mid + 1;
	}
	return false;
}
int main()
{
	vector<int> nums = { 1,4,7,12,18 };
	cout << find_target(nums, 12) << endl;
}