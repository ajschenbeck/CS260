#include <iostream>
#include <string>
#include "stack.h"

using std::cout;
using std::endl;
using std::string;

// struct Node {
//     int value; 
//     Node *next;
// };

class Linked_stack { 
    private:
        node *top;

    public:
        //Constructor
        Linked_stack() {
            top = nullptr;
        }
        
        //getter and setters?

        //push
        void push(int new_value) { // O(1)

            node *new_node = new node{new_value, top}; // O(1)
            top = new_node; // O(1)
        }

        //pop
        int pop() {
            int result = -1; //maybe we should use a pointer or exception for when the error happens // O(1)

            if(top == nullptr) { //when the stack is empty // O(1)
                cout << "The stack is empty, nothing to pop" << endl; // O(1)
                return result; // O(1)
            }
            else { //general case
                result = top->value; // O(1)
                node *old_node = top; // O(1)
                
                top = top->next; // O(1)
                delete old_node; // O(1)

                return result; // O(1)
            }
        }

        //peak
        int peek() {
            int result = -1; //maybe we should use a pointer or exception for when the error happens // O(1)

            if(top == nullptr) { //when the stack is empty // O(1)
                cout << "The stack is empty, nothing to peek" << endl; // O(1)
            }
            else { //general case // O(1)
                result = top->value; // O(1)
            }

            return result; // O(1)
        }

        //to_string
        string to_string() { // O(N) 
            string result = ""; // O(1)

            node *current = top; // O(1)
            while(current != nullptr) { // O(N) -> has to touch on every node in the loop!
                result = result + std::to_string(current->value) + ", "; // O(1)
                current = current->next; // O(1)
            }

            return result; // O(1)
        }
};