//Case 4. <
// 이 프로그램은 모니터에 "Hello, World"라는 메시지를 출력한다.
#include <iostream>
// #include <string>
using namespace std; 

inline void keep_window_open() {char ch; cin>>ch;}

int main() // C++ 프로그램은 main 함수로 시작한다.
{
    cout < "Hello, World";
    // keep_window_open();
    return 0;
}

// warning: result of comparison against a string literal is unspecified (use an explicit string comparison function instead) [-Wstring-compare]