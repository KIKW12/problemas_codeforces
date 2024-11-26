#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string s;
    std::cin >> s;
    std::vector<int> numbers;
    std::stringstream ss(s);
    std::string num;
    while (std::getline(ss, num, '+')) {
        numbers.push_back(std::stoi(num));
    }

    int n = numbers.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }

    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i != 0) {
            std::cout << "+";
        }
        std::cout << numbers[i];
    }
    return 0;
}
