#include <iostream>
using namespace std;


int main() {
    int N, X;
    cin >> N >> X;  // 정수 N과 X 입력

    int A[10000];  // 문제에서 N의 최대값이 10,000이라고 가정

    for (int i = 0; i < N; ++i) {
        cin >> A[i];  // 수열 A 입력
    }

    for (int i = 0; i < N; ++i) {
        if (A[i] < X) {
            cout << A[i] << ' ';  // X와 같은 수의 인덱스 출력
        }
    }

    // 출력 부분은 생략
    return 0;
}