#include <iostream>
#include <string>

//All big O's will be O(1) unless specified otherwise

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

        Node *find_previous_node(int value) { // O(N)
            Node *future = front->next; 
            Node *current = front; 
            while(future != nullptr && value > future->value) { // O(N)
                current = future;
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
        void add(int new_value) { // O(N)

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

        
        int remove(int old_value) { // O(N)
            int current_value = -1;

            if(front == nullptr) {
                current_value = -2;
            } else if(front->value == old_value) {
                Node * current = front;
                current_value = current->value;
                front = front->next;
                delete current;
            } else {
                Node *previous = find_previous_node(old_value); //O(N)
                Node *current = previous->next;
                current_value = current->value;

                previous->next = current->next;
                delete current;

            }

            return current_value;
        }
        

        //fetch the value stored at index in our list
        int at(int index) { // O(1) will end up as O(N)
        
            int result = -1;
            int index_count = 1;
            Node *current = front;

            if(front == nullptr) { //when the stack is empty 
                    cout << "list is empty, no values to show" << endl;

            }else { //general case
                
                Node *current = front;

                while(index_count <= index) {
                    result = current->value; 

                    current = current->next; 

                    index_count = index_count + 1;
                    }
            }
            //cout << "the value at index " << index << " is: " << result << endl;
            return result;
            }

        string to_string() { // O(N)
            string result = "";

            Node *current = front;
            while(current != nullptr) { // O(N)
                result = result + std::to_string(current->value) + ", ";
                current = current->next;
            }

            return result;
        }
};