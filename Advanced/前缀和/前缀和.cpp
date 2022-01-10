//#include<iostream>
//#include<vector>
//using namespace std;
////输出任意区间的和
////n个元素，m个区间对
//int main()
//{
//	int n, m;
//	cin >> n;//输入
//	vector<int> nums(n);
//	vector<int> prefix_sum(n);
//	//输入构造数组
//	for (int i = 0; i < n; i++)
//	{
//		int t;cin >> t;
//		nums.push_back(t);
//	}
//	//计算前缀和
//	for (int i = 0; i < n; i++)
//	{
//		if (i == 0)
//		{
//			prefix_sum[i] = nums[i];
//			continue;
//		}
//		prefix_sum[i] = prefix_sum[i - 1] + nums[i];
//	}
//	//输出任意区间和
//	//问题，0-i区间的输出判断会越界
//	int l,r;
//	cin >> l >> r;
//	cout << prefix_sum[r] - prefix_sum[l]+nums[l];//这样做是不会溢出的
//}