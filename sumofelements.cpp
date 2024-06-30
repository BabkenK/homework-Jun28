#include <iostream>

int main() {
 int arr[5] = {};
 int n = sizeof(arr) / sizeof(arr[0]);
 
 std::cout<< "Please enter 5 elements of array: " << n << "\n";
 for(int i = 0; i < n; ++i){
 std::cin >> arr[i];
 }
 
 std::cout<< "elements of array are: \n";
 int *ptr = arr;
    for (int i = 0; i < n; ++i) {
        std::cout << *ptr << " ";
        ++ptr; 
 }
 
 int sum = 0;
    ptr = arr; 
    for (int i = 0; i < n; ++i) {
        sum += *ptr;
        ++ptr;
    }
 
 std::cout << " Sum of all elements: = " << sum << std::endl;
 
 return 0;   
}


