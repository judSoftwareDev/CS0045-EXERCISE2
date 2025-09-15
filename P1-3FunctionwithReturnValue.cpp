#include <iostream>
using namespace std;

void repeatMessage(string msg, int n) {
    for (int i = 0; i < n; i++) {
        cout << msg << endl;
    }
}

int square(int x) {
    return x * x;
}

int main() {
    repeatMessage("Programming is fun!", 2);
    cout << "Square of 7 is: " << square(7) << endl;
    return 0;
}
