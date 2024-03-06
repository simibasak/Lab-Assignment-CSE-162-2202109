#include<iostream>
using namespace std;
class student{
    public :
    int a;
    int b;
    void swapvalue(int &a,int &b)
    {
        int temp = a;
        a = b;
        b = temp;

    }
};
int main()
{
    student y;
    int p = 5;
    int q = 15;
    y.swapvalue(p,q);
    cout<<"The value of p = "<<p<<"\nThe value of q = "<<q<<endl;
    return 0;
}
