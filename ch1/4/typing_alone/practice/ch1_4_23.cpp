#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool prime (int num) {
    for (int init_num = 2; init_num < num; ++init_num) {
        if (num%init_num != 0) {

        }
        else {
            cout << num << "은 소수가 아님.\n";
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> vprime;
    int max;
    cin >> max;
    for (int num = 1; num<max; ++num) {
        if (prime(num)) {
            vprime.push_back(num);
            cout << num << "은 소수임\n";
        }

    }
}
