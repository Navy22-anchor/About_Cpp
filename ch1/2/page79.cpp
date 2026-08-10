// 이 프로그램은 모니터에 "Hello, World"라는 메시지를 출력한다.
#include <iostream>
using namespace std; 

inline void keep_window_open() {char ch; cin>>ch;}

int main() // C++ 프로그램은 main 함수로 시작한다.
{
    cout << "Hello, World!\n";
    keep_window_open();
    return 0;
}