#include <iostream>

// Exercise 1
void printHello();

// Exercise 2
int readNum();

int square(int num);

void printNum(int num);

// Exercise 3
int sumToN(int n);

// Exercise 4
int fib(int n);

// Exercise 5
bool prim(int n);

// Exercise 6
void integerOverflow();

// Exercise 7
void floatAccuracy();

int main() {
    // Exercise 1
    printHello();
    // Exercise 2
    //printNum(square(readNum()));
    // Exercise 3
    //printNum(sumToN(readNum()));
    // Exercise 4
    //printNum(fib(readNum()));
    // Exercise 5
    //std::cout << std::boolalpha;
    //std::cout << prim(readNum()) << std::endl;
    // Exercise 6
    //overflow();
    // Exercise 7
    //floatLoop();
    return 0;
}

// Exercise 1
void printHello() {
    std::cout << "\nHello world!\n" << std::endl;
}

// Exercise 2
int readNum() {
    int num = 0;
    // Cuts off after the integer part
    std::cin >> num;
    return num;
}

int square(int num) {
    return num * num;
}

void printNum(int num) {
    std::cout << num << std::endl;
}

// Exercise 3
int sumToN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

// Exercise 4
int fib(int n) {
    // Handle all negative values
    if (n < 0) return -1;
    // Base conditions
    if (n <= 1) return n;
    // Recursive function call
    return fib(n - 2) + fib(n - 1);
}

// Exercise 5
bool prim(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Exercise 6
void integerOverflow() {
    // Overflows to negative number since we're working with a signed data type and terminates there
    for (int n = 0; n >= 0; n += 100000) {
        std::cout << n << std::endl;
    }
}

// Exercise 7
void floatAccuracy() {
    // Increases in exponential representation up to a really high number, where the given accuracy (5 digits)
    // isn't enough to distinguish i and i + 1 anymore - terminates there
    for (float x = 0.0; x != x + 1; x += 100) {
        std::cout << x << std::endl;
    }
}
