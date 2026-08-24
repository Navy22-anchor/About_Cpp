#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> names;
    vector<int> numbers;

    string name;
    int num;

    for (;cin >> name >> num;) {
        auto it = find(names.begin(), names.end(), name);
        
        if (it != names.end()) {
            cout << "중복된 값 찾음: " << *it << "\n";
            break;
        } else {
            cout << "없음\n";
            names.push_back(name);
            numbers.push_back(num);
        }
    }   

    for (int iter = 0;iter<names.size(); ++iter) {
        cout << "name : " << name[iter] <<"\n" << "number : " << numbers[iter];
    }
}