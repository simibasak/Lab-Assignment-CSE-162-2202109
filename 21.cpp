#include<iostream>
using namespace std;
class A
{
    int n,count;
public :
    void input()
    {
        cout<<"Enter any number:";
        cin>>n;
    }
    void output()
    {
        count=0;
        int i;
        for(i=1; i<=n; i++)
        {
            if (n%i==0)
            {
                count++;
            }
        }
        if(count==2)
            cout<<"prime number";
        else
            cout<<"not prime";
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    return 0;

}
