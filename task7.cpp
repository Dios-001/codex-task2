#include <iostream>

int main() {
    std::cout << "Even numbers between 1 and 20 (excluding 10):" << std::endl;

    for (int i = 1; i <= 20; i++) {
        if (i == 10) {
            continue;  // Skip the number 10
        }

        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }


    return 0;
}
