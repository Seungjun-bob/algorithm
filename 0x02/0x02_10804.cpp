#include <iostream>
using namespace std;

int main() {
    int n = 10;
    const int k = 20;
    int arr[k];

    // 초기값 1~20 저장
    for (int i = 0; i < k; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        // 인덱스로 변환
        int left = a - 1;
        int right = b - 1;

        // 구간 역순 정렬
        while (left < right) {
            int tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
            left++;
            right--;
        }
        
    }
    for (int j = 0; j < k; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
