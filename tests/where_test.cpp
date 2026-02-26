#include <iostream>
#include <string>
#include "../src/where.cpp"

int main() {
    std::string s = "The quick brown fox";


    std::cout << "find 'e' : " << where(s, 'e')  << "\n";
    std::cout << "find 'q' : " << where(s, 'q')  << "\n";
    std::cout << "find 'z' : " << where(s, 'z')  << "\n";


    std::cout << "find \"The\"  : " << where(s, "The")   << "\n";
    std::cout << "find \"quick\": " << where(s, "quick") << "\n";
    std::cout << "find \"fox\"  : " << where(s, "fox")   << "\n";
    std::cout << "find \"quiet\": " << where(s, "quiet") << "\n";

    return 0;
}
