#include<iostream>
using namespace std;
class a
{
public:
     int x = 10;
     void display(void);
};
void a :: display()
{
        cout<<"The value of x = "<<x<<endl;
}


int main()
{
    a y;
    y.display();
    return 0;
}
