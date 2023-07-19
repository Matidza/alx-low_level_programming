#include <stdio.h>

void print_to_98(int n) 
{
    if (n <= 98) {
        for (int i = n; i <= 98; i++) {
            std::cout << i;
            if (i != 98) {
                std::cout << ", ";
            }
        }
    } else {
        for (int i = n; i >= 98; i--) {
            std::cout << i;
            if (i != 98) {
                std::cout << ", ";
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    print_to_98(n);
    return 0;
}
