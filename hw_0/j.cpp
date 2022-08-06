#include <iostream>
#include <string>

using std::string;

string get_digit_word(int n);

int main(int argc, char const *argv[]) {
    int a, b;
    std::cin >> a >> b;
    for (int i = a; i <= b; ++i) std::cout << get_digit_word(i) << std::endl;
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
            return (n % 2 == 0) ? "even" : "odd";
    }
}