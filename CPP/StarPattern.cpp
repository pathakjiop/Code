#include <iostream>

void print_star_pattern(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows;
    std::cout << "Enter the number of rows:-";
    std::cin >> rows;
    print_star_pattern(rows);
    return 0;
}
