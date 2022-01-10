//#include<iostream>
//#include<vector>
//using namespace std;
////差分数组
////构造差分数组
//vector<int> diffnums(vector<int> nums)
//{
//	vector<int> diff(nums.size());
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (i == 0)
//		{
//			diff[i] = nums[i];
//			continue;
//		}
//		diff[i] = nums[i]-nums[i-1];
//	}
//	return diff;
//}
//int main()
//{
//	vector<int> nums = { 1,2,3,4,5 };
//	vector<int> result = diffnums(nums);
//	for (int i = 0; i < result.size(); i++)
//	{
//		cout << result[i] << " ";
//	}
//}