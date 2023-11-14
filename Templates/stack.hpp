#pragma once
#include <exception>
template <typename T, size_t SIZE>
class Stack {
    std::vector<T, T2>myVector1;
    std::vector<T, T2>myVector2;

public:
    void push_back(const T&newItem);
    void pop();

private:
    T items[SIZE];
    int count = 0;
    

};


template <typename T, size_t SIZE>
void Stack<T, SIZE>::push_back(const T& newItem) {
    if (count < SIZE) {
        items[count] = newItem;
        count++;
    }
    else {
        throw std::exception("Stack Overflow");
    }
}


template <typename T, size_t SIZE>
void Stack<T, SIZE>::pop() {
    if (count > 0) {
        count--;

    }
    else {
        throw std::exception("Stack Overflow");

    }
};