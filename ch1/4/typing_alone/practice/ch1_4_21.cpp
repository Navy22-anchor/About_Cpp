#include <iostream>
#include <vector>
using namespace std;

int searchIter(int number, vector<int>numbers) {
    int count {0};

    for (int idx = 0; idx < numbers.size(); ++idx) {
        if (numbers[idx]==number) {
            ++count;
        }
    }
    return count;
}

int main() {
    vector<int> numbers = {1,2,2,2,5};
    int max {0};
    int now;
    int number;

    for (int x:numbers) {
        now = searchIter(x,numbers);
        if (max<=now) {
            max = now;
            number = x;
        }
    }
    cout <<number<<"가 시퀀스에서 등장한 횟수 : " << max;
}