#include <iostream>

struct myStruct {
    float value1;
    float value2;
    float value3;
    float value4;
    float value5;
};

int main() {
    float num1 = 2.0f;
    float *ptrToNum1 = &num1;
    float num2 = *ptrToNum1;

    num1 = 7.1f;
    std::cout << "num1: " << num1 << " num2: " << num2 << std::endl;

    num2 = 23.2f;
    std::cout << "num1: " << num1 << " num2: " << num2 << std::endl;

    *ptrToNum1 = 0.0f;
    std::cout << "num1: " << num1 << " num2: " << num2 << std::endl;

    int sizeOfNum1 = sizeof(num1);
    std::cout << "num1: " << num1 << " with size: " << sizeOfNum1 << std::endl;

    int sizeOfPtr1 = sizeof(ptrToNum1);
    std::cout << "ptrToNum1: " << ptrToNum1 << " with size: " << sizeOfPtr1 << std::endl;

    // ZWOTER TEIL

    myStruct myFirstStruct = {10, 20, 30, 40, 50};
    int sizeOfMyFirstStruct = sizeof(myFirstStruct);
    std::cout << "myFirstStruct: " << myFirstStruct.value1 << " " << myFirstStruct.value2 << " " << myFirstStruct.value3
            << " " << myFirstStruct.value4 << " " << myFirstStruct.value5;
    std::cout << " with size: " << sizeOfMyFirstStruct << std::endl;

    myStruct *ptrToMyFirstStruct = &myFirstStruct;
    std::cout << "ptrToMyFirstStruct: " << ptrToMyFirstStruct->value1 << " " << ptrToMyFirstStruct->value2 << " " <<
            ptrToMyFirstStruct->value3 << " " << ptrToMyFirstStruct->value4 << " " << ptrToMyFirstStruct->value5;
    std::cout << " with size: " << sizeof(ptrToMyFirstStruct) << std::endl;

    // DRÖÖÖÖTE TEIL

    float *pointerHeapMalloc = (float*) malloc(sizeof(float));
    if (pointerHeapMalloc == nullptr) {
        std::cout << "Memory allocation failed" << std::endl;
        return 1;
    }
    std::cout << "Address of pointerHeapMalloc: " << pointerHeapMalloc << std::endl;
    *pointerHeapMalloc = 3.0f;
    free(pointerHeapMalloc);
    pointerHeapMalloc = nullptr;

    float *pointerHeapNew = new float;
    if (pointerHeapNew == nullptr) {
        std::cout << "Memory allocation failed" << std::endl;
        return 1;
    }
    std::cout << "Address of pointerHeapNew: " << pointerHeapNew << std::endl;
    delete pointerHeapNew;
    pointerHeapNew = nullptr;

    return 0;
}
