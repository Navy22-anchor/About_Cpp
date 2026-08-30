#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<double> temps;

    for (double temp;cin>>temp;)
        temps.push_back(temp);
    
    int start = 0;
    int size = temps.size()-1;
    
    for (int index = 0;index < temps.size(); ++index) {
        if (temps.size()%2 == 0) {
            if ((size-start) == 1) {
                cout << temps[size]<< "+" << temps[start]<<'/'<<2<<"="<<(temps[size] + temps[start]) / 2;
                break;
            }
        }else {
            if ((size-start) == 2) {
                cout << temps[size]<< "+" << temps[start]<<"="<<(temps[size] + temps[start]) / 2;
                break;
            }
        }
        ++start;
        size -= 1;
    }
}