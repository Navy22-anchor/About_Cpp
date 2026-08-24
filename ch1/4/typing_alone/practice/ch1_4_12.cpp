#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector<double> dists;
    double total_distance;

    for (double dist;cin>>dist;){
        total_distance += dist;
        dists.push_back(dist);
    }

    sort(dists.begin(),dists.end());
    cout << "sum of dists : " << total_distance << "\n";
    cout << "mean of dists : " << total_distance/dists.size() << "\n";
    cout << "max value of dists : " << dists[dists.size()-1] << "\n";
    cout << "min value of dists : " << dists[0] << "\n";
}