#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    int sum = 0;
    int youngsic = 0;
    int minsic = 0;
    vector<int> time; // vector 안 써도 됨.
    cin >> num;

    for (int i=0; i<num; i++){
        int t;
        cin >> t;
        time.push_back(t);
        youngsic += (t/30 + 1) * 10;
        minsic += (t/60 + 1) * 15;
    }
    
    // 영식 0 ~ 29 초면 10원, 30 ~ 59 초면 20원
    // 민식 0 ~ 59 초면 15원, 60 ~ 119 초면 30원
    // 120 초
    // 영식 60 ~89 30원, 영식 90 ~119 초 40원, 

    if (youngsic == minsic){
        cout << "Y M " << youngsic << '\n';
    }else {
        if (youngsic > minsic){
            cout << "M " << minsic << '\n';
        }else {
            cout << "Y " << youngsic << '\n';
        }
    }
    return 0;
}