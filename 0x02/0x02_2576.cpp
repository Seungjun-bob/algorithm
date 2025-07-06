#include <iostream>
using namespace std;

int main() {
    int nums[7];
    int sum = 0;
    int min = 0;

    for (int i=0; i<7; i++){
        cin >> nums[i];
        if (nums[i] % 2 == 1){
            sum += nums[i];
            if (min != 0){
                if (min > nums[i]){
                    min = nums[i];
                }
            }else {
                min = nums[i];
            }
        }
    }

    if (sum == 0){
        cout << -1;
    }else {
        cout << sum << '\n' << min << '\n';
    }
    return 0;
}