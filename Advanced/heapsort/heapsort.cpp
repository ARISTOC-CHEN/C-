#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//ʵ�ֶ�����
//���ƵĴ����������ϱȽϣ��������ϣ��������ң�
//�������ڵ�͵�����һ���ڵ㣬���ڵ�����һ�ľ������ֵ
//�ؽ��󶥶�

//�������
void display(vector<int> &arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//��С����,�����󶥶�
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
		//���У��Ƚ�������ӽڵ�͸��ڵ�
		child = child * 2 + 1;
	}
}
//��ʼ���ѣ��γɵ�һ���󶥶�
void BuildHeap(vector<int>&arr, int size)
{
	for (int i = arr.size() / 2 - 1; i >= 0; i--)
	{
		Down(arr, i,size);
	}
}
//������
void heapsort(vector<int> &arr)
{
	cout << "��ʼ�����飺";
	BuildHeap(arr,arr.size());//�����һ�ι����󶥶�
	display(arr);//���
	for (int i = arr.size() - 1; i > 0; i--)
	{
		swap(arr[0], arr[i]);//��һ�������һ������
		Down(arr, 0,i);//
		cout << "��������飺";
		display(arr);
	}
 }

//������
int main()
{
	vector<int> arr = { 49, 38, 65, 97, 76, 13, 27, 49, 10 };
	cout << "���鳤��Ϊ��" << arr.size() << endl;
	cout << "����ǰ���飺";
	display(arr);
	heapsort(arr);
}
