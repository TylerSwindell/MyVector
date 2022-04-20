#include <iostream>

template <typename T>
class Vector {
private:
    size_t numOfEle;
    T* arr;

    
    // Bold White
    const static std::string B_W;         
    // Bold Teal
    const static std::string B_T;
    // Bold Red
    const static std::string B_R;
    // Reset Text
    const static std::string R_T;

    void resize(int ind);

public:
    Vector();
    ~Vector();
    
    size_t size();
    size_t index();
    T get(size_t index);

    void push(const T &element);
    void pop();
    void remove(size_t index);
    
    void print(bool newLine = false);
    
};
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
