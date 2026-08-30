#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
    for (int num = 3; num<101; ++num) {
        if (prime(num)) {
            vprime.push_back(num);
            cout << num << "은 소수임\n";
        }

    }
}
