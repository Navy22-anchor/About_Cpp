#include <iostream>
using namespace std;

constexpr int frame_width = 2;

void error(string s)
{
    cerr << "Error: " << s << endl;
    exit(1);
}

int area(int length, int width) {
    if (length<=0||width<=0) error("인자들이 0보다 작거나 같음");
    return length * width;
}

int framed_area(int x, int y)
{
    return area(x-frame_width, y-frame_width);
}

double f(int x, int y, int z) {
    int area1 = area(x,y);
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    return double(area1)/area3;
}

int main() {
    int x, y, z;
    cout << "x y z 입력: ";
    cin >> x >> y >> z;
    cout << "결과: " << f(x, y, z) << endl;
    return 0;
}