#include <iostream>
using namespace std;

void error(string s1, string s2) {
    throw runtime_error(s1+s2);
}


int area(int length, int width) {
    if (false) error("길이가","0이하");// 오류 감지
    return length * width;
}

int main() {
    try {
        area(0,0);
    }
    catch (runtime_error &e) {
        cerr << "error :" << e.what();
    }
}