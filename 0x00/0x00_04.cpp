#include <iostream>
using namespace std;

// N 이하의 2의 거듭제곱 중 가장 큰 수를 반환하는 함수

int func4(int N) {
    for(int i= 1; i <= N; i++) {
        // 2의 거듭제곱을 계산
        int powerOfTwo = 1 << i; // 2^i
        // 2의 거듭제곱이 N보다 크면 이전 값을 반환
        if (powerOfTwo > N) {
            return powerOfTwo >> 1; // 이전 값 반환 (2^(i-1))
        } 
    }
    return 0;
}

int main() {
    int N;
    cin >> N;
    cout << func4(N) << '\n';
    return 0;
}