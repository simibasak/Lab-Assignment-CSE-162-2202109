#include<iostream>
using namespace std;
class A{
    string name;
    int age;

    public:
        void getdata(){
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Age: ";
            cin>>age;
        }
        void show(){
            cout<<"Name: "<< name<<endl;
            cout<<"Age: "<< age<<endl;
        }
};

const int size = 4;
int main(){
    A add[size];

    for(int i = 0;i<size;i++){
        cout<<"---Details---"<<endl;
        cout<<"Test"<< i+1 <<endl;
        add[i].getdata();
    }
    cout<<endl;
    for(int i = 0;i<size;i++){
        cout<<"---LIST---"<<endl;
        cout<<"List"<<i+1<<endl;
        add[i].show();
    }
}
