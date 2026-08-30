#include <iostream>
#include <vector>
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
    vector<int> primeHundred;
    for (int iter=1; iter<(100);++iter) {
        primeHundred.push_back(iter);
    }

    for (int iter=2; iter<sqrt(100);++iter) {
        if (prime(iter)) {
            primeHundred.erase(remove_if(primeHundred.begin()+iter,primeHundred.end(),[iter](int x){return x%iter==0;}),primeHundred.end());
        }
    }

    for (int x:primeHundred) {
        cout <<x<<"\n";
    }
}