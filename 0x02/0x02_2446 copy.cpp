#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);  // C I/O와의 동기화 해제
    cin.tie(NULL); 
    int num;
    int max_num = 0, order_num=0;

    for (int i=0; i<9; i++){
        cin >> num;
        if  (num > max_num){
            max_num = num;
            order_num = i+1;
        }
    }

    cout << max_num << "\n" << order_num;


    return 0;
}
