#include<iostream>
using namespace std;
class A{
    public:
        static void show(){
            cout<<"This is Static Data Function.";
        }
};
int main(){
    A::show();
}
