#include <iostream>

class Vector {
private:
    size_t 
        cap,
        numOfEle;
    size_t* arr = nullptr;

    // Resets all styling attributes
    static std::string B_W;
    static std::string B_T;
    static std::string R_T;


public:
    Vector();
    ~Vector();
    
    size_t size();
    size_t index();
    size_t get(size_t index);

    void push(size_t element);
    void pop();
    
    void print();
    
};

// Bold Text Colors
    std::string 
        Vector::B_W = "\033[1;37m",
        Vector::B_T = "\033[1;36m",

// Resets all styling attributes
        Vector::R_T = "\033[0m";

Vector::Vector() {
    cap = 0;
    numOfEle = 0;
    arr = new size_t[cap];
}

Vector::~Vector() { delete [] arr; }

size_t Vector::size() { return numOfEle; }
size_t Vector::index() { return numOfEle-1; }

void Vector::push(size_t element) {

    numOfEle++;

    size_t* tempArr = new size_t[numOfEle];

    if (numOfEle > 0) 
        for (size_t i = 0; i < numOfEle-1; i++) 
            tempArr[i] = arr[i];

    // Adds the new item to the tempInv storage
    tempArr[numOfEle-1] = element;

    // Deletes the current grades pointer data
    delete[] arr;

    // Stores the tempGrades data in grades pointer
    arr = tempArr;
    tempArr = nullptr;
}

void Vector::pop() {
    // Incriments size for tempGrades[] creation
    numOfEle -= 1;

    // Creates new array for temp item storage
    size_t* tempArr = new size_t[numOfEle];

    // Fills tempInv with the previously entered items
    for (uint i = 0; i < numOfEle; i++) 
        tempArr[i] = arr[i];

    // Deletes the current grades pointer data
    delete[] arr;

    // Stores the tempGrades data in grades pointer
    arr = tempArr;
    tempArr = nullptr;
}

size_t Vector::get(size_t index) { return arr[index]; }

void Vector::print() { 
    std::cout << B_W << "[ ";
    for(size_t i = 0; i < numOfEle; i++) {
        std::cout << B_T << arr[i]; 
        if (i < numOfEle-1) 
            std::cout << B_W << ", ";
    }
    std::cout << B_W << " ]\n" << R_T;
}