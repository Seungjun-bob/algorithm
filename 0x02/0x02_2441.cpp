#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);  // C I/O와의 동기화 해제
    cin.tie(NULL); 

    int N;
    cin >> N;

    for (int i=N; i>0; i--){
        for (int k=0; k<N-i; k++){
            cout << " ";
        }
        

        for (int j=i; j>0; j--){
            cout << "*";
        }
        cout << "\n";
    }


    return 0;
}
