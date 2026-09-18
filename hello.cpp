#include <iostream>
#include <string>

void printGreeting(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    printGreeting("Hello");
    return 0;
}
