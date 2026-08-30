#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    double c;

    double x1;
    double x2;
    
    cin >> a >> b >> c;
    cout <<a<<"x²"<<b<<"x"<<c<<"\n";
    
    double D = ((b*b) - 4*a*c);

    if (D > 0) {
        x1 = (-b + sqrt((b*b) - 4*a*c)) / (2*a);
        x2 = (-b - sqrt((b*b) - 4*a*c)) / (2*a);
        cout << "x1 : " << x1 <<"\nx2 : " << x2;
    }
    else if (D == 0) {
        x2 = (-b - sqrt((b*b) - 4*a*c)) / (2*a);
        cout << "중근 두 근이 중복됨.\n"<<"x2 : " << x2;
    }else if (D < 0) {
        cout << "서로 다른 두 허근.";
    }
}
