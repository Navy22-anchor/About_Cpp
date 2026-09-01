#include <iostream>
#include <vector>
using namespace std;

int main() {
    double sum = 0;
    double high_temp = -1000;
    double low_temp = 1000;
    int no_of_temps = 0;

    for (double temp;cin>>temp;) {
        ++no_of_temps;
        sum += temp;
        if (temp > high_temp) high_temp = temp;
        if (temp < low_temp) low_temp = temp;
    }

    cout << "최고 온도" << high_temp << "\n";
    cout << "최저 온도" << low_temp << "\n";
    cout << "평균 온도" << sum/no_of_temps << "\n";
}