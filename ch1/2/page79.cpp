//Case 2. <iostream>
// 이 프로그램은 모니터에 "Hello, World"라는 메시지를 출력한다.
#include <ostream>
// #include <string>
using namespace std; 

inline void keep_window_open() {char ch; cin>>ch;}

int main() // C++ 프로그램은 main 함수로 시작한다.
{
    cout << "Hello, World";
    // keep_window_open();
    return 0;
}

// error: use of undeclared identifier 'cout'; did you mean 'count'? cout을 원했지만 <ostream>에 cout이 없으므로 오류를 냄.