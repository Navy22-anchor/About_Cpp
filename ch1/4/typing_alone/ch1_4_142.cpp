#include <iostream>
using namespace std;

int main() {
    constexpr double yen_per_dollar = 159.29;
    constexpr double euro_per_dollar = 0.87;
    constexpr double pound_per_dollar = 0.74;
    constexpr double won_per_dollar = 1414.49;
    constexpr double kroner_per_dollar = 9.49;

    double currency = 1;
    char unit = 0;

    cout << "달러화로 바꿀 금액과 화폐 단위를 지정하시오 (y, e, p): ";
    cin >> currency >> unit;

    switch (unit) {
        case 'y':
            cout << currency << unit << "=" << currency / yen_per_dollar << "dollar\n";
            break;
        case 'e':
            cout << currency << unit << "=" << currency / euro_per_dollar << "dollar\n";
            break;
        case 'p':
            cout << currency << unit << "=" << currency / pound_per_dollar << "dollar\n";
            break;
        case 'w':
            cout << currency << unit << "=" << currency / won_per_dollar << "dollar\n";
            break;
        case 'k':
            cout << currency << unit << "=" << currency / kroner_per_dollar << "dollar\n";
            break;
        default:
            cout << "y, e, p, w, k 이외의 단위는 모르겠습니다.";
    }
} // 이 경우에서는 if 보다 switch 가 가독성이 더 낫다고 느껴짐. 