#include <iostream>
#include "node.h"

using std::cout;
using std::endl;

class Queue { 
    private:
        node *front;
        node *back;

    public:
        //Constructor
        Queue() {
            front = nullptr; //both front and back will start as nullpointers
            back = nullptr; //when the queue is first initiated.
        }

        void enqueue(int new_value) {
            
            if(front == nullptr) {
                node *new_node = new node{new_value, back};
                front = new_node;
            } else if(back == nullptr) {
                node *new_node = new node{new_value, nullptr};
                front->next = new_node;
                back = new_node;
            } else {
                node *new_node = new node{new_value, nullptr};
                back->next = new_node;
                back = new_node;
            }
        }
        void dequeue() {
            node *front_node = front;

            if(front_node == nullptr) { 
                cout << "the queue is empty" << endl;
            } else {
                front = front->next;
            }
            delete front_node;
        }
        void peek() {
            node *peek_node = front;

            if(peek_node == nullptr) {
                cout << "the queue is empty, nothing to peek" << endl;
            } else {
                cout << peek_node->value << endl;
            }
            
        }
};

int main(int argc, char **argv) {

    Queue my_queue;

    my_queue.enqueue(1);
    my_queue.enqueue(10);
    my_queue.enqueue(100);
    my_queue.enqueue(1000);
    my_queue.enqueue(10000); //add 1 to front and push it forward with 2, 3, 4, 5

    my_queue.peek(); //peek at front, should be 1

    my_queue.dequeue(); //dequeue 1
    my_queue.dequeue(); //dequeue 2

    my_queue.peek(); //peek at new 3 length queue, should be 3




}