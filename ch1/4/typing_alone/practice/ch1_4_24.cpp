#include <iostream>
#include <vector>
using namespace std;

bool prime (int num) {
    for (int init_num = 2; init_num < num; ++init_num) {
        if (num%init_num != 0) {
        }
        else {
            return false;
        }
    }
    return true;
}

void prime_count (int limit) {
    int count {0};
    int num {0};
    while(count != limit) {
        ++num;
        if (prime(num)) {
            ++count;
            cout << num<<"\n";
        }else {
            cout << "아님\n";
        }
    }
}

int main() {
    int limit;
    cin >> limit;
    prime_count(limit);
}