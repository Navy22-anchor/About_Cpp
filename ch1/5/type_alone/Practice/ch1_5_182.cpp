#include <iostream>
using namespace std;

class Bad_area {};

constexpr int frame_width = 2;

void error(string s)
{
    cerr << "Error: " << s << endl;
    exit(1);
}

int area(int length, int width) {
    if (length<=0||width<=0) throw Bad_area{} ;// 오류 감지
    return length * width;
}

int framed_area(int x, int y)
{
    return area(x-frame_width, y-frame_width);
}

int main() {
    try {
        int x = -1;
        int y = 2;
        int z = 4;
        int area1 = area(x,y);
        int area2 = framed_area(1,z);
        int area3 = framed_area(y,z);
        double ratio = area1/area3;
    }
    catch (Bad_area) { // 오류 처리
        cout << "이런! area()에 잘못된 인자 전달\n";
    }
}