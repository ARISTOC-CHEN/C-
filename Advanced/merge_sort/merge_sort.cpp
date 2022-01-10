#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void merge(vector<int> &arr,int left,int mid,int right)
{
	int n1 = mid - left + 1;//���Ԫ�ظ��� 
	int n2 = right - mid;//�ұ�Ԫ�ظ����������ұߵ�Ԫ�ش�mid+1��right
	int* L = new int[n1+1];
	int* R = new int[n2+1];
	for (int i = 0; i < n1; i++)	L[i] = arr[left + i];
	for (int j = 0; j < n2; j++)	R[j] = arr[mid +1+j];
	L[n1] = INT_MAX; R[n2] = INT_MAX;
	int i = 0, j = 0;
	for (int k = left; k <= right; k++)
	{
		if (L[i] <= R[j]) arr[k] = L[i++];
		else arr[k] = R[j++];
	}
	delete [ ]L;
	delete [ ]R;
}
//�鲢����
void merge_sort(vector<int>&arr,int left,int right)
{
	//ʲô������أ���ֻʣһ��Ԫ��ʱ
	if (left == right) return;
	int mid = (left + right) / 2;
	merge_sort(arr, left, mid);
	merge_sort(arr, mid + 1, right);
	merge(arr, left, mid, right);
}
int main()
{
	vector<int> arr = { 2,1,5,9,3,6,4,7,8,0 };
	cout << "����ǰ��";
	display(arr);
	merge_sort(arr, 0, arr.size()-1);
	cout << "�����";
	display(arr);
}