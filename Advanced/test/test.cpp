//#include<iostream>
//#include<string>
//using namespace std;
//int match(string s)
//{
//	int count = 0;
//	//ƥ���������ж���R�͵��ж���T��R==T
//	//�ж���I�͵��ж���P��I==P
//	for (int i = 0; i < s.size() - 1; i++)
//	{
//		int R_num = 0,T_num = 0,I_num = 0,P_num = 0;
//		if (s[i] == 'R') R_num++;
//		if (s[i] == 'T') T_num++;
//		if (s[i] == 'I') I_num++;
//		if (s[i] == 'P') P_num++;
//		for (int j = i + 1; j < s.size(); j++)
//		{
//			//ƥ��ɹ��ͽ�falg��Ϊ1���Ͳ��ù�ǰ�����
//			if (s[j] == 'R') R_num++;
//			else if (s[j] == 'T') T_num++;
//			else if (s[j] == 'I') I_num++;
//			else P_num++;
//			if (R_num == T_num && I_num == P_num) count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	string s;
//	cin >> s;
//	cout << match(s);
//}