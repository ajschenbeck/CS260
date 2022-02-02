#include <iostream>

using std::cout;
using std::endl;

class Node {
    
    public:

    int value; // = 0 // These are also called member variables
    Node *next; // = nullptr

};

void linked_list() { 
    //This first part is made to initialize the pieces for primary use.
    
    Node *head = nullptr; //Creating a node head pointer which points to null or nothing
    Node *tail = head; //Creating a node tail pointer which points to head



    for(int i = 0; i < 6; ++i) { //sets up a for loop to run the next if struct multiple times
        
        if(head == nullptr) { //if head has no value this next piece will start it up by creating a node
            Node *new_node = new Node{i, nullptr}; // empty list, so create first node and point both head and tail at that first node
            head = new_node; //makes the new node created as the head and the tail because it is one long
            tail = new_node; 

    } else {
        Node *new_node = new Node{i, nullptr}; //creates a new node that points to the OLD new node
        tail->next = new_node; //moves the tail to the next node as the next new node is the front
        tail = new_node;

    }
    }

    Node *current = head; //I dont really understand this line here
    while(current != nullptr) { //says while current has no pointer, print the value of the head node then move that into the next position?
        cout << "current->value: " << current->value << endl; 
        current = current->next;
    }

}

int main() { 

    linked_list();

    return 0;
}//runs the code, somewhat of a driver code, but embedded into the program as is.

//Hey Mr. Jess, I know this is almost copying what you did in class, but I am honestly barely understanding
//so I am just doing my best to hang on. The way I am getting it so far is by saying each node has two
//pieces of information, its value and the pointer to the next node. As I continue to warm up to pointers
//I think this will make more and more sense. Thank you for your patience.