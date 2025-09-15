#include <iostream>
using namespace std;
void repeatMessage(string msg, int n) {
    for (int i = 0; i < n; i++) {
        cout << msg << endl;
    }
}
int main() {
    repeatMessage("hello", 3);
    return 0;
}
