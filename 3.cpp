#include<iostream>
using namespace std;
int a = 100; //gobal
int main()
{
int a=40;
{


        int a = 20;
        cout<<"The value of a in inner block = "<<a<<endl;
        cout<<"The global value of a is = "<<::a<<endl;
}
    cout<<"The value of a in outer block is = "<<a<<endl;
    cout<<"The global value of a is = "<<::a<<endl;
    return 0;

}
