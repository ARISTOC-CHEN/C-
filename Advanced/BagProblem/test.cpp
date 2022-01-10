#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int b(int n)
{
	stack<int> s;
	vector<int> ans;
	while (n)
	{
		s.push(n %2);
		n =n/2;
	}
	while (!s.empty())
	{
		ans.push_back(s.top());
		s.pop();
	}
	int i = 0;
	for (i; i < ans.size(); i++)
	{
		if (ans[i] == 1)
		{
			return ans.size() - 1 - i;
		}
	}
	return -1;
}
int main()
{
	cout << b(10) << endl;
}