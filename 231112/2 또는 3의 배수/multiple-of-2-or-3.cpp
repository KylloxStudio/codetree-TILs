#include <iostream>
#include <cstring>

int main() {
    int n;
    std::cin >> n;
    char output[n] = "";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 || i % 3 == 0) {
            strcat(output, "1 ");
        } else {
            strcat(output, "0 ");
        }
    }
    std::cout << output << std::endl;
    return 0;
}