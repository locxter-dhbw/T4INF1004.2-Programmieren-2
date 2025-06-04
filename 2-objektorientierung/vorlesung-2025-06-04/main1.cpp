#include <iostream>

void modifyWithPointer(int *ptr);

void modifyWithReference(int &ref);

int main1() {
    int a = 5;
    int b = 5;

    // Pointer
    int *ptr = &a;
    // Referenz
    int &ref = b;

    std::cout << "Initial values:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    modifyWithPointer(ptr);
    std::cout << "After modifyWithPointer:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    modifyWithReference(ref);
    std::cout << "After modifyWithReference:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    // Pointer neu zuweisen
    int c = 15;
    ptr = &c;
    std::cout << "ptr after reassignment to c:" << std::endl;
    std::cout << "*ptr = " << *ptr << std::endl;

    // Referenz neu zuweisen GEHT NICHT, da statisch
    std::cout << "Before reassignment of ref:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    ref = c;
    std::cout << "After reassignment of ref:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}

void modifyWithPointer(int *ptr) {
    *ptr = 10;
}

void modifyWithReference(int &ref) {
    ref = 10;
}
