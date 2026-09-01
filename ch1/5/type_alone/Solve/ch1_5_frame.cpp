#include <iostream>
#include <vector>
using namespace std;


void keep_window_open() {
    char open;
    cin >> open;
}

int main() {
    try {
        // #1. cout << "Success!";
        // cout << "Success!\n";
        // cout << "Success"<<"!\n";
        // cout << "Success!" << "\n";
        // #5. int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        // vector<int> v(10); v[5] = 7; if (v[5] == 7) cout <<"Success!\n";
        // if (true) cout << "Success!\n"; else cout << "Fail!\n";
        // bool c = true; if (c) cout <<"Success!\n"; else cout << "Fail!\n";
        // string s = "ape"; bool c = "fool">s; if (c) cout << "Success!\n";
        // #10. string s = "ape"; if (s == "ape") cout << "Success!\n"; 
        // string s = "ape"; if (s == "ape") cout << "Success!\n"; 
        // string s = "ape"; if (s == "ape") cout << "Success!\n"; 
        // vector<char> v(5); for (int i =0; i<v.size(); ++i) cout << "Success!\n";
        // vector<char> v(5); for (int i =0; i<=v.size(); ++i) cout << "Success!\n";
        //# 15. string s = "Success!\n"; for (int i = 0; i<=7; ++i) cout <<s[i];
        // if (true) cout << "Success!\n"; else cout << "Fail!\n";
        // int x = 2000; int c= x; if (c==2000) cout <<"Success!\n";
        // string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
        // vector<int> v(5); for (int i =0; i<v.size(); ++i) cout << "Success!\n";
        // #20. int i =0; int j =9; while (i<10) ++i; if (j<i) cout << "Success!\n";
        // double x =2; double d = 5/x; if (d==1*x+0.5) cout << "Success!\n";
        // string s = "Success!\n"; for (int i=0; i<=10; ++i) cout <<s[i];
        // int i=0; while (i<10) ++i; if (0<i) cout <<"Success!\n";
        // double x = 4; double d = 5/(x-2); if (d==x/2+0.5) cout <<"Success!\n";
        // #25. cout << "Success!\n";
        keep_window_open();
        return 0;
    }
    catch (exception & e) {
        cerr << "오류: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch (...) {
        cerr << "이런 : 알려지지 않은 예외!\n";
        keep_window_open();
        return 2;
    }
}