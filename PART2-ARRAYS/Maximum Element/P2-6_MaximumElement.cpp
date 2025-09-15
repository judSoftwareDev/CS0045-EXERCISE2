#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int nums[5] = { 12, 45, 7, 23, 34 };
    cout << "Maximum = " << findMax(nums, 5) << endl;
    return 0;
}
