#include <iostream>

int main() {
    // Declare and initialize an integer variable
    int num = 10;
    
    // Declare a const pointer to the integer variable and attempt to change the pointer and the value it points to
    const int *ptr1 = &num;
    *ptr1 = 20; // Attempt to change the value it points to (will cause compilation error)
    ptr1 = nullptr; // Attempt to change the pointer itself (will cause compilation error)
    
    //  Declare a pointer to a const integer variable and attempt to change the value it points to
    int const *ptr2 = &num;
    *ptr2 = 20; // Attempt to change the value it points to (will cause compilation error)
    
    // Output
    std::cout << "Initial value of num: " << num << std::endl;
    
    return 0;
}
