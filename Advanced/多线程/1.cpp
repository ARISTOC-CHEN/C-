#include<iostream>
#include<vector>
#include<thread>
#include<mutex>
using namespace std;

mutex m;
int a = 0;
void thread_1(int a)
{
    m.lock();
    cout << "�߳�1�������ڸ�дa" << endl;
    cout << "ԭʼaΪ��" << a << endl;
    a = a + 1;
    cout << "����aΪ��" << a  << endl;
    m.unlock();
}

void thread_2(int a)
{
    m.lock();
    cout << "�߳�2�������ڸ�дa" << endl;
    cout << "ԭʼaΪ��" << a << endl;
    a = a + 2;
    cout << "����aΪ��" << a << endl;
    m.unlock();
}

int main()
{
    thread proc1(thread_1, a);//����һ���߳�
    thread proc2(thread_2, a);
    proc1.join();
    proc2.join();
    return 0;
}
