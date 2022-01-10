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
    cout << "线程1函数正在改写a" << endl;
    cout << "原始a为：" << a << endl;
    a = a + 1;
    cout << "现在a为：" << a  << endl;
    m.unlock();
}

void thread_2(int a)
{
    m.lock();
    cout << "线程2函数正在改写a" << endl;
    cout << "原始a为：" << a << endl;
    a = a + 2;
    cout << "现在a为：" << a << endl;
    m.unlock();
}

int main()
{
    thread proc1(thread_1, a);//创建一个线程
    thread proc2(thread_2, a);
    proc1.join();
    proc2.join();
    return 0;
}
