#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    double a = 0;
    double b = 0;
    char end {'d'};
    while (cin >> a >> b >> end) {
        if (end == '|') {
            break;
        }
        else if (a<b) {
            cout << "더 작은 : " << a << "\t더 큰 : " << b << "\n";
            if ((b-a)<0.01) {
            cout << "두수는 거의 같다\n";
        }
        }
        else if (a>b) {
            cout << "더 작은 : " << b << "\t더 큰 : " << a << "\n";
            if ((a-b)<0.01) 
            {
                cout << "두수는 거의 같다\n";
            }
        }
        else if (a==b) {
            cout <<  "두수는 같다\n";
        }
    }
}