#include <iostream>
using namespace std;

// string name = "Han";
// int number_of_steps = 39;
// double pi = 3.141592;
// char decimal_point = '.';
// bool tap_on = true;

// int main() {
//     cout << "성을 입력하고 엔터를 누르세요:\n";
//     // double age = 0.0; challenge_1
//     int age = 0.0; 
//     string first_name = "???";
//     string second_naeme;
//     cin >> first_name >> second_naeme;
//     cin >> age;
//     cout << "안녕하세요, " << first_name<<" "<<second_naeme <<"(나이"<< age*12<<"month)\n";
// }

int main() {
    int count;
    cin >> count;

    string name;
    cin >> name;

    int c_2 = count + 2;
    string n_2 = name + ".Jr";

    int c_3 = c_2 - 2;
    // string n_3 = name - ".Jr"; //error: invalid operands to binary expression ('string' (aka 'basic_string<char>') and 'const char[4]')

    cout << c_3;
    cout << n_2;
}
    