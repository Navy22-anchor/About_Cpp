#include <iostream>
using namespace std;

int main() {
    string s = "잔인한 세상이여, 안녕히!";
    cout << s << '\n';
}
// ch1_3_109.cpp:5:5: error: unknown type name 'STRING'
//     STRING s = "잔인한 세상이여, 안녕히!";
//     ^
// ch1_3_109.cpp:6:5: error: use of undeclared identifier 'cOut'; did you mean 'cout'?
//     cOut << S << '\n';
//     ^~~~
//     cout
// /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/iostream:55:42: note: 'cout' declared here
// extern _LIBCPP_EXPORTED_FROM_ABI ostream cout;
//                                          ^
// ch1_3_109.cpp:6:13: error: use of undeclared identifier 'S'
//     cOut << S << '\n';
//             ^
// 3 errors generated.