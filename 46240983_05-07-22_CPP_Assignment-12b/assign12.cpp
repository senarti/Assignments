#include<iostream>
#include<thread>
using namespace std;

class work
{
public:
void operator()()
{
for(int i=1;i<=10;i++)
cout<<15*i<<endl;
}
};

int main()
{
thread t((work()));
cout<<"\n main thread excution:"<<endl;
for(int i=0;i<20;i++)
cout<<"main thread"<<i<<" ="<<i<<endl;
cout<<"\nExecution of thread"<<endl;
t.join();

return 0;
}


