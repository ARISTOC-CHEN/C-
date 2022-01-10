#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,less<int>> q1;//´ó¶¥¶Ñ
	priority_queue<int, vector<int>, greater<int>>q2;
	for (int i = 0; i < 5; i++)
	{
		q1.push(i);
		q2.push(i);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << q1.top() << " ";
		q1.pop();
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << q2.top() << " ";
		q2.pop();
	}
	cout << endl;
	
}