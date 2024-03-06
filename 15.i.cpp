#include <iostream>
using namespace std;

class A {
public:
    int x;
    A(int p) : x(p) {}
};

int main() {
     A u(20);
    A &p = u;
    cout << "x = " << p.x << endl;
    p.x = 100;
    cout << "x = " << u.x << endl;
    return 0;
}
