#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);  // C I/O와의 동기화 해제
    cin.tie(NULL); 

    int N;
    cin >> N;

    for (int i=1; i<=N; i++){
        for(int j=N-i; j>0; j--){
            cout << " ";  
        }
        for(int j=0; j<i; j++){
            cout << "*";  
        }
        for(int j=0; j<i; j++){
            if(j!=0){
                cout << "*";  
            }
        }
        
        
        cout << "\n";
    }


    return 0;
}
