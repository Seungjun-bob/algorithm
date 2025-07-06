#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num[9];
    int sum = 0;
    for (int i=0; i<9; i++){
        cin >> num[i];
        sum += num[i];
    }

    bool found = false;
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            if (i != j){
                if (sum - num[i] - num[j] == 100){
                    num[i] = 0;
                    num[j] = 0;
                    found = true;
                    break;
                }
            }
        }
        if (found){break;}
    }

    sort(num, num+9);

    for (int i=2; i<9; i++){
        cout << num[i] << '\n';
    }

    return 0;
}