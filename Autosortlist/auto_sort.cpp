#include <iostream>
#include <string>

struct Node {
    int value; 
    Node *next; 
};

using std::string;
using std::endl;
using std::cout;

// Auto sorted linked list.
class Auto_sort {
    private:
        Node *front;

        Node *find_previous_node(int value) { 
            Node *future = front->next; 
            Node *current = front; 
            while(future != nullptr && value > future->value) { 
                future = future->next; 
            }

            return current; 
        }

    public:
        //constructor member function
        Auto_sort() { 
            front = nullptr;
        }

        //add a new value at a position appropriate based on that value
        void add(int new_value) { 

            if(front == nullptr) { //insert when empty
                Node *new_node = new Node{new_value, nullptr}; 
                front = new_node; 
            
            } else if(new_value < front->value) { //insert before front
                Node *new_node = new Node{new_value, front}; 
                front = new_node; 
            
            } else { //insert in the middle 
                //walk to find the right spot for the new_value
                Node *previous = find_previous_node(new_value); // O(N)
                //insert the value
                Node *new_node = new Node{new_value, previous->next};
                previous->next = new_node; 
            }
        }

        
        int remove(int old_value) { 
            int current_value = -1;

            if(front == nullptr) {
                current_value = -2;
            } else if(front->value == old_value) {
                Node * current = front;
                current_value = current->value;
                front = front->next;
                delete current;
            } else {
                Node *previous = find_previous_node(old_value);
                Node *current = previous->next;
                current_value = current->value;

                previous->next = current->next;
                delete current;

            }

            return current_value;
        }
        

        //fetch the value stored at index in our list
        int at(int index) { 
            
            return -1;
        }

        string to_string() { 
            string result = "";

            Node *current = front;
            while(current != nullptr) { 
                result = result + std::to_string(current->value) + ", ";
                current = current->next;
            }

            return result;
        }
};