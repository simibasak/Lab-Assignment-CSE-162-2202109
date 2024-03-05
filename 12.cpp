#include<iostream>
using namespace std;
int sum(int a,int b){
 int c=a+b;
 return c;
}
int sum(int p,int q,int r){
   int y=p+q+r;
    return y;
}
int main()
{
    cout<<"sum 1 = "<<sum(4,5)<<endl;
    cout<<"sum 2 = "<<sum(10,7,8)<<endl;

    return 0;
}
