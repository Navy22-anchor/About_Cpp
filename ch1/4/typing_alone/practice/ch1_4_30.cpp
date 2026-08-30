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
        cout << "name : " << names[iter] <<"\n" << "number : " << numbers[iter]<<"\n";
    }

    cout << "찾고자 하는 이름을 입력하시오 : ";
    cin >> name;
    for (int iter = 0;iter<names.size(); ++iter) {
        if (names[iter] == name){
            cout << names[iter] << "의 나이는" << numbers[iter];
        }else {
            cout << "이름을 찾을 수 없음.";
        }
    }

    int number {24};
    cout << "찾고자 하는 숫자를 입력하시오 : ";
    cin >> number;
    for (int iter = 0;iter<names.size(); ++iter) {
        if (numbers[iter] == number){
            cout << names[iter] << "의 나이는" << numbers[iter];
        }else {
            cout << "숫자을 찾을 수 없음.";
        }
    }

}