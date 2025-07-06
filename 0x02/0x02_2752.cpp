#include <iostream>
#include <algorithm>
using namespace std;

// sort() 쓰지 않고 풀이
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;

//     int first, second, third;

//     if (a < b && a < c){
//         first = a;
//         if (b < c){
//             second = b;
//             third = c;
//         }else {
//             second = c;
//             third = b;
//         }
//     }else if (b < a && b < c){
//         first = b;
//         if (a < c){
//             second = a;
//             third = c;
//         }else {
//             second = c;
//             third = a;
//         }
//     }else {
//         first = c;
//         if (a < b){
//             second = a;
//             third = b;
//         }else {
//             second = b;
//             third = a;
//         }
//     }

//     cout << first << " " << second << " " << third << "\n";
//     return 0;
// }

// sort() 사용
int main(){
    int arr[3]; // 크기가 3인 배열 생성
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3); // 시작 포함, 끝 미포함 의미

    for (int i=0; i<3; i++){
        cout << arr[i] << " ";
    }

    return 0;
}