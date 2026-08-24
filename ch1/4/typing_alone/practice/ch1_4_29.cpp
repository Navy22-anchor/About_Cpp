#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    double c;

    double x1;
    double x2;
    
    cin >> a >> b >> c;
    cout <<a<<"x²+"<<b<<"x+"<<c<<"\n";

    x1 = (-b + sqrt((b*b) - 4*a*c)) / (2*a);
    x2 = (-b - sqrt((b*b) - 4*a*c)) / (2*a);
    
    cout << "x1 : " << x1 <<"\nx2 : " << x2;
}
