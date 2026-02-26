#include <iostream>
#include <string>
#include "src/where.cpp"

int main() {
    std::string s = "The quick brown fox";

    std::cout << where(s, 'e')      << "\n";
    std::cout << where(s, "quick")  << "\n";
    std::cout << where(s, "quiet")  << "\n";

    return 0;
}