#include <iostream>
#include <string>

void printGreeting(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    const std::string greetingMessage = "Hello";
    printGreeting(greetingMessage);
    return 0;
}
