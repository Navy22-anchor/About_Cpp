#include <iostream>
using namespace std;

int main() {
    string a {" "};
    string b {" "};
    string c {" "};
    cin >> a;
    cin >> b;
    cin >> c;
    string a1 = "Steinbeck";
    string a2 = "Hemingway";
    string a3 = "Fitzgerald";
    string total = a+b+c;

    if (total ==(a1+a2+a3))
        cout << a3+","+a2+","+a3;
    if (total ==(a1+a3+a2))
        cout << a3+","+a2+","+a3;

    if (total ==(a2+a1+a3))
        cout << a3+","+a2+","+a3;
    if (total ==(a2+a3+a1))
        cout << a3+","+a2+","+a3;

    if (total ==(a3+a2+a1))
        cout << a3+","+a2+","+a3;
    if (total ==(a3+a1+a2))
        cout << a3+","+a2+","+a3;
    
}