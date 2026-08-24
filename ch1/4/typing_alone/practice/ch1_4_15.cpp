#include <iostream>
using namespace std;

int main() {
    int digit;
    char ans;

    int half = 50;
    int count {0};

    for (int iter_count = 0; iter_count < 7; ++iter_count) {

        cout << "당신이 생각한 숫자가"<< half<<"보다 작은가요? : ";
        cin >> ans;

        if (ans == 'y'){
            half *= 0.5;
        }
        else if (ans == 'n') {
            half *= 2;
        }
    }
    cout << "질문횟수 초과!";
}