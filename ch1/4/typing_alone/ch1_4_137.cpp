#include <iostream>
using namespace std;

int main() {
    constexpr double yen_per_dollar = 159.29;
    constexpr double euro_per_dollar = 0.87;
    constexpr double pound_per_dollar = 0.74;

    double currency = 1;
    char unit = 0;
    
    cout << "달러화로 바꿀 금액과 화폐 단위를 지정하시오 (y, e, p): ";
    cin >> currency >> unit;

    if (unit == 'y')
        cout << currency << unit << "=" << currency / yen_per_dollar << "dollar\n";
    else if (unit == 'e')
        cout << currency << unit << "=" << currency / euro_per_dollar << "dollar\n";
    else if (unit == 'p')
        cout << currency << unit << "=" << currency / pound_per_dollar << "dollar\n";
    else
        cout << "y, e, p 이외의 단위는 모르겠습니다.";
}