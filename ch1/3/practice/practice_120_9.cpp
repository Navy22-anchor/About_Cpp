#include <iostream>

int main() {
    std::string str{" "};
    std::cout << "숫자로 변환할 글자를 입력하시오 : ";
    std::cin >> str;
    if (str == "zero") {
        std::cout << 0;
    }
    else if (str == "one") {
        std::cout << 1;
    }
    else if (str == "two") {
        std::cout << 2;
    }
    else if (str == "three") {
        std::cout << 3;
    }
    else if (str == "four") {
        std::cout << 4;
    }
    else {
        std::cout << "zero,one,two,three,four 중에서 입력하시오.";
    }
}