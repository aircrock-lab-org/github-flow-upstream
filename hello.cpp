#include <iostream>
#include <string>

void printGreeting(const std::string& message) {
    std::cout << message << '\n';
}

int main() {
    const std::string greetingMessage = "Hello";
    printGreeting(greetingMessage);
    return 0;
}
