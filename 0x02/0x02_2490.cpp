#include <iostream>
using namespace std;

int main() {
    int a[4], b[4], c[4];
    
    for (int i=0; i<4; i++){
        cin >> a[i];
    }
    for (int i=0; i<4; i++){
        cin >> b[i];
    }
    for (int i=0; i<4; i++){
        cin >> c[i];
    }

    int a_num = 0, b_num = 0, c_num = 0;
    for (int i=0; i<4; i++){
        if (a[i] == 1){
            a_num += 1;
        }
        if (b[i] == 1){
            b_num += 1;
        }
        if (c[i] == 1){
            c_num += 1;
        }
    }

    if (a_num == 0){
        cout << "D" << "\n";
    }else if (a_num == 1){
        cout << "C" << "\n";
    }else if (a_num == 2){
        cout << "B" << "\n";
    }else if (a_num == 3){
        cout << "A" << "\n";
    }else if (a_num == 4){
        cout << "E" << "\n";
    }
    if (b_num == 0){
        cout << "D" << "\n";
    }else if (b_num == 1){
        cout << "C" << "\n";
    }else if (b_num == 2){
        cout << "B" << "\n";
    }else if (b_num == 3){
        cout << "A" << "\n";
    }else if (b_num == 4){
        cout << "E" << "\n";
    }
    if (c_num == 0){
        cout << "D" << "\n";
    }else if (c_num == 1){
        cout << "C" << "\n";
    }else if (c_num == 2){
        cout << "B" << "\n";
    }else if (c_num == 3){
        cout << "A" << "\n";
    }else if (c_num == 4){
        cout << "E" << "\n";
    }
}