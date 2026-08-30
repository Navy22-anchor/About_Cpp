#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int rices;
    cin >> rices;
    for (int box=0;;++box) {
        int total_rice = pow(2,box-1);
        cout << "현재 사각형 개수 : " << box << "\n" << "쌓인 쌀개수 : " << total_rice << "\n";
        if (rices<=total_rice) {
            cout << rices << "톨을 얻으려면 최소 사각형" << box << "개 필요합니다.";
            break;
        }
    }
}