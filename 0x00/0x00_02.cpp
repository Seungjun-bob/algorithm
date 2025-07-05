#include <iostream>
using namespace std;

int func2(int arr[], int N) {
    bool exists[101] = {false};  // 0~100 값 존재 여부 기록

    for (int i = 0; i < N; ++i) {
        int complement = 100 - arr[i];
        if (complement >= 0 && complement <= 100 && exists[complement]) {
            return 1;
        }
        exists[arr[i]] = true;
    }
    return 0;
}

int main() {
    int arr1[] = {1, 52, 48};
    cout << func2(arr1, 3) << '\n';  // 1

    int arr2[] = {50, 42};
    cout << func2(arr2, 2) << '\n';  // 0

    int arr3[] = {4, 13, 63, 87};
    cout << func2(arr3, 4) << '\n';  // 1

    return 0;
}