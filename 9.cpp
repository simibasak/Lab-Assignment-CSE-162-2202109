#include<iostream>
using namespace std;
void swap(int *x,int *y){
int temp = *x;
*x = *y;
*y= temp;
}
int main()
{
    int a= 9;
    int b= 10;
    swap(&a,&b);
    cout<<"The value of a = "<<a<<"\nThe value of b = "<<b<<endl;
    return 0;

}
