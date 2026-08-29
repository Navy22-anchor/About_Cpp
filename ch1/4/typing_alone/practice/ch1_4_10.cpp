#include <iostream>
#include <vector>
using namespace std;


int main () {
    int num {0};
    char round {'y'};
    vector<int> ordersRSP = {1,3,2,1,3,4};

    for (int x:ordersRSP) {
        cout << "게임 시작!\nround를 시작하겠습니까? : ";
        cin >> round;
        switch (x)
        {
        case 1:
            cout << "가위!\n";
            break;
        case 2:
            cout << "바위\n";
            break;
        case 3:
            cout << "보\n";
            break;
        default:
            cout << "해당되는 케이스가 없음";
            break;
        }
    }
}