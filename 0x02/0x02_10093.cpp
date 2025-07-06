#include <iostream>
#include <algorithm>
using namespace std;

// 30점 코드
// int main() {
//     long long A,B;
//     cin >> A >> B;

//     long long result_1;

//     if (A >= B){
//         result_1 = A - B - 1;

//         if (result_1 > 0){
//             cout << result_1 << "\n";
//             for (int i=B+1; i<A; i++){
//                 cout << i << " ";
//             }
//         }else {
//             cout << 0 << "\n";
//         }
//     }else {
//         result_1 = B - A - 1;

//         if (result_1 > 0){
//             cout << result_1 << "\n";
//             for (int i=A+1; i<B; i++){
//                 cout << i << " ";
//             }
//         }else {
//             cout << 0 << "\n";
//         }
//     }
//     return 0;
// }

int main() {
    long long A,B;
    cin >> A >> B;

    if (A == B){
        cout << 0 << '\n';
        return 0;
    }

    long long start = min(A,B) + 1;
    long long end = max(A,B);

    cout << end - start << '\n';

    for (long long i=start; i<end; i++){
        cout << i << ' ';
    }
    return 0;
}