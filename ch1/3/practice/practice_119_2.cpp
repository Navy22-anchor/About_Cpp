#include <iostream>

int main() {
    double mile{0.1};
    std::cout << "Km로 변환할 mile을 입력하시오 : ";
    while (std::cin >> mile) {
        std::cout << mile*1609 << "km\n";
    } 
}