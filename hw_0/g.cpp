#include <iostream>
#include <string>

using std::cin, std::cout, std::string;

string get_digit_word(int n);

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << get_digit_word(n) << std::endl;
    return 0;
}

string get_digit_word(int n) {
    switch (n) {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        default:
            return "Greater than 9";
    }
}
