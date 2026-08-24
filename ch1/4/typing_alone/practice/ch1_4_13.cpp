#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<double> temps;
    for (double temp;cin>>temp;)
        temps.push_back(temp);
    
    double sum {0};

    for (int x: temps) sum += x;
    cout << "middle of temps : " << sum / 2 << "\n";
}