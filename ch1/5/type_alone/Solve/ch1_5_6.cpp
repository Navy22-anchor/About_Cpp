#include <iostream>
using namespace std;

double CtoF(double C) {
    double F = C * 9/5 + 32;
    return F;
}

double FtoC(double F) {
    double C = (F - 32) * 5/9;
    return C;
}

int main() {
    int input;
    cin >> input;
    
    cout << "FtoC(" << input<<") = " <<FtoC(input);
}