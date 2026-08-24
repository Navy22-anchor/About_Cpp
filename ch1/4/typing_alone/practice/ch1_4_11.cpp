#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    constexpr double cm_per_meter = 100;
    constexpr double in_per_cm = 2.54;
    constexpr double in_per_ft = 12;

    double now = 0;
    string unit {"cm"};

    double cm_to_m;
    double in_to_m;
    double total;
    vector <double> vm; 

    while (cin >> now >> unit) {
    
    if (unit == "cm") {
        cout << now << unit << " >> " << now/cm_per_meter << "m\n";

        cm_to_m = now/cm_per_meter;
        total += cm_to_m;

        vm.push_back(cm_to_m);
    }
    else if (unit == "in") {
        cout << now << unit << " >> " << now/in_per_cm << "cm\n";
        cout << now << unit << " >> " << now/in_per_ft << "ft\n";

        in_to_m = (now/in_per_cm)/cm_per_meter;
        total += in_to_m;

        vm.push_back(in_to_m);
    }
    else {
        cout << "인식하지 못하는 단위 입니다\n";
        break;
    }

}

sort(vm.begin(),vm.end());
for (double x : vm) cout << x << "\n";

cout << "총 합계 : " << total << "m\n";

}