#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;

    cout << "Value of x: " << x << endl;
    cout << "Value using pointer: " << *p << endl;
    return 0;
}
