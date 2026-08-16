#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int square(int iter) {
//     int x = 0;
//     for (int i = 0; i<iter; ++i) {
//         x += iter;
//     }
//     return x;
// } // 용도가 포괄적이지 않음, 즉 재사용되기 어려운 함수임. 또한 이 함수는 설명이 필요하다.

// int main() {
//     for (int i = 0; i < 100; ++i) {
//         cout << i << "\t" << square(i)<<"\n";
//     }
// }


// vector<int> vn (6);

// int main () {
//     vector<double> v = {5,7,9,4,6,8};
//     // for (int i = 0; i<v.size(); ++i) {
//     //     cout << v[i]<< "\n";
//     // }
//     v.push_back(2.6);
//     v.push_back(6.2);
//     v.push_back(2.5);
//     for (double x:v) { // v에 포함된 각 x에 대해,
//          cout << x<< "\n";
//     }
// }

int main () {
    vector<double> temps;
    for (double temp;cin>>temp;)
        temps.push_back(temp);
    
    double sum {0};

    for (int x: temps) sum += x;
    cout << "mean of temps : " << sum / temps.size() << "\n";

    sort(temps.begin(),temps.end());
    cout << "middle value of temps : " << temps[temps.size()/2] << "\n";
}