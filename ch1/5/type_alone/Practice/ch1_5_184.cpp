#include <iostream>
using namespace std;

void error(string s)
{
    cerr << "Error: " << s << endl;
    exit(1);
}

int main() {
    double d = 0;
    cin >> d;

    if (!cin) {
        error("some_funciton()에서 double을 읽지 못함.");
    } 
}