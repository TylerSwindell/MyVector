#include "./Vector.hpp"

template <typename T>
const std::string Vector<T>::B_W = "\033[1;37m";

template <typename T>
const std::string Vector<T>::B_T = "\033[1;36m";

template <typename T>
const std::string Vector<T>::B_R = "\033[1;31m";

template <typename T>
const std::string Vector<T>::R_T = "\033[0m";

template <typename T>
Vector<T>::Vector() {
    std::cout << "Making Vector\n";
    numOfEle = 0;
    arr = new T[0];
}

template <typename T>
// Adds an item to the end of the Vector
void Vector<T>::push(const T &element) {
    this->resize(1);

    // Adds the new item to the tempInv storage
    this->arr[numOfEle-1] = element;
}

template <typename T>
// Removes last index from vector
void Vector<T>::pop() { this->resize(-1); }

template <typename T>
// Removes last index from vector
void Vector<T>::remove(size_t index) { 
    this->resize(-1); 
}

template <typename T>
// Returns value from specific index location
T Vector<T>::get(size_t index) { return arr[index]; }

template <typename T>
// Outputs the content of the Vector to the terminal
void Vector<T>::print(bool newLine) { 
    std::cout << B_W << "[ ";
    for(size_t i = 0; i < numOfEle; i++) {
        std::cout << B_T << arr[i]; 
        if (i < numOfEle-1) 
            std::cout << B_W << ", ";
    }
    std::cout << B_W << " ]" << R_T;
    if (newLine) std::cout << '\n';
}