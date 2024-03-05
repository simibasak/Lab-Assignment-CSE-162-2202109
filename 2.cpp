#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int &b=a;
    cout << "value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    cout << "address of a:"<<&a<<endl;
    cout <<"address of b:"<<&b<<endl;
    return 0;
}
