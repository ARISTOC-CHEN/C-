//#include<iostream>
//#include<vector>
//using namespace std;
////�����������ĺ�
////n��Ԫ�أ�m�������
//int main()
//{
//	int n, m;
//	cin >> n;//����
//	vector<int> nums(n);
//	vector<int> prefix_sum(n);
//	//���빹������
//	for (int i = 0; i < n; i++)
//	{
//		int t;cin >> t;
//		nums.push_back(t);
//	}
//	//����ǰ׺��
//	for (int i = 0; i < n; i++)
//	{
//		if (i == 0)
//		{
//			prefix_sum[i] = nums[i];
//			continue;
//		}
//		prefix_sum[i] = prefix_sum[i - 1] + nums[i];
//	}
//	//������������
//	//���⣬0-i���������жϻ�Խ��
//	int l,r;
//	cin >> l >> r;
//	cout << prefix_sum[r] - prefix_sum[l]+nums[l];//�������ǲ��������
//}