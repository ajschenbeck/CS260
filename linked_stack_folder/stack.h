#pragma once
#include <string>

using std::string;

struct node {
    int value;
    node *next;
};

class Stack {
    private:
        node *top = nullptr;
        int size = 0;

    public:
        Stack();
        int get_size();
        void push(int new_value);
        int pop();
        //int peek();
        string to_string();

};