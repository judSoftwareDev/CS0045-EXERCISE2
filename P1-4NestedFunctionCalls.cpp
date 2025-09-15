#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = add(5, 10) * multiply(2, 3);
    cout << "Result is: " << result << endl;
    return 0;
}
