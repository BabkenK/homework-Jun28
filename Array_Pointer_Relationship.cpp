#include <iostream>

int main() {
    const int size = 4; // Define the size of the array
    int arr[size]; // Declare an array of integers with size 4
    
    std::cout << "Please enter " << size << " elements:\n";
    
    // Input elements into the array
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    
    // Print the array elements before modification
    std::cout << "Array elements before modification:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " " <<std::endl;
    }
   

    // Modify the array elements using array notation
    arr[2] = 10; // Change the value of the element at index 2

    // Print the array elements after modification using pointer notation
    std::cout << "Array elements after modification:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}


