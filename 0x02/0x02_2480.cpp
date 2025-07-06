#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    int answer;

    if (a == b && b == c){
        answer = 10000 + a * 1000;
    }else if(a == b || b == c || a == c){
        if (a == b || a == c){
            answer = 1000 + a * 100;
        }else {
            answer = 1000 + b * 100;
        }
    }else {
        if (a >= b && a >= c){
            answer = a * 100;
        }else if (b >= a && b >= c){
            answer = b * 100;
        }else {
            answer = c * 100;
        }
    }

    cout << answer << "\n";
}