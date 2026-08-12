#include <iostream>
using namespace std;

int main() {
    int a {0};
    int b {0};
    int c {0};
    cout << "input 3 integer : ";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a<b)
        {if (a<c) {
            if (b<c)
                cout << a << "," << b << "," << c;
            if (b>c)
                cout << a << "," << c << "," << b;
            }
        if (a>c) 
            cout << c << "," << a << "," << b;
        if (a==c) 
            cout << c << "," << a << "," << b;
        }
    if (a>b) {
        if (a>c) {
            if (b<c)
                cout << b << "," << c << "," << a;
            if (b>c)
                cout << c << "," << b << "," << a;
        }
        if (a<c)
            cout << b << "," << a << ","<<c;
        if (a==c)
            cout << b << "," << a << ","<<c;
    }
    if (b==c) {
        if (c<a)
            cout << b << "," << c << ","<<a;
        if (c>a)
            cout << a<< "," << b << ","<<b;
    }
    if (a==b) {
        if (c<a)
            cout << b << "," << c << ","<<a;
        if (c>a)
            cout << a<< "," << b << ","<<c;
    }
}