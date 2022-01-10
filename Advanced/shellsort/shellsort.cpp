#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void shellsort(vector<int>&nums)
{
	for (int gap = nums.size(); gap > 0; gap /= 2)
	{
		for (int i = gap; i < nums.size(); i++)
		{
			for (int j = i - gap; j >= 0; j -= gap)
			{
				if (nums[j] > nums[i])
				{
					swap(nums[j], nums[i]);
				}
			}
		}
	}
}
int main()
{
	vector<int> nums= { 2, 1, 4, 3, 11, 6, 5, 7, 8, 10, 15 };
	cout << "ÅÅÐòÇ°£º";
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	shellsort(nums);
	cout << "ÅÅÐòºó£º";
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
}