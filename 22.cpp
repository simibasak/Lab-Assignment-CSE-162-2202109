#include<iostream>
using namespace std;
class factorial{
    public:
    int x,fact =1;
    void calculation(void)
    {

    cout<<"Enter the number : ";
    cin>>x;
    for(int i=1;i<=x;i++){
        fact=fact*i;

    }
    cout<<"factorial of "<<x<<" is "<<fact<<endl;


    }
};
int main()
{
    factorial ob;
   // x.input();
    ob.calculation();
    //x.output();
    return 0;
}
