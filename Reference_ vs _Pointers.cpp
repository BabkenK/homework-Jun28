#include <iostream>

int main() {
    int num = 10;

    int &ref = num; 
    ref = 20; 

    int *ptr = &num; 
    *ptr = 11; 
    // Print the modified values to verify the changes
    std::cout << "Modified value through reference: " << &ref << std::endl;
    std::cout << "Modified value through pointer: " << * ptr << std::endl;

    return 0;
}
