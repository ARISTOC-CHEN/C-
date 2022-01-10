#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//实现堆排序
//大顶推的创建从下往上比较（从下往上，从左往右）
//交换根节点和倒数第一个节点，现在倒数第一的就是最大值
//重建大顶堆

//输出函数
void display(vector<int> &arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//从小到大,建立大顶堆
void Down(vector<int>&arr,int i,int n)
{
	int parent = i;
	int child = 2 * i + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child] < arr[child + 1]) child++;
		if (arr[parent] < arr[child])
		{
			//swap(arr, parent, child);
			swap(arr[parent], arr[child]);
			parent = child;
		}
		//换行，比较下面的子节点和父节点
		child = child * 2 + 1;
	}
}
//初始化堆，形成第一个大顶堆
void BuildHeap(vector<int>&arr, int size)
{
	for (int i = arr.size() / 2 - 1; i >= 0; i--)
	{
		Down(arr, i,size);
	}
}
//堆排序
void heapsort(vector<int> &arr)
{
	cout << "初始化数组：";
	BuildHeap(arr,arr.size());//数组第一次构建大顶堆
	display(arr);//输出
	for (int i = arr.size() - 1; i > 0; i--)
	{
		swap(arr[0], arr[i]);//第一个和最后一个交换
		Down(arr, 0,i);//
		cout << "排序的数组：";
		display(arr);
	}
 }

//主函数
int main()
{
	vector<int> arr = { 49, 38, 65, 97, 76, 13, 27, 49, 10 };
	cout << "数组长度为：" << arr.size() << endl;
	cout << "排序前数组：";
	display(arr);
	heapsort(arr);
}
