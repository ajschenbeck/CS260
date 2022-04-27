#pragma once
#include <iostream>
#include "arbitrary_list.h"

using std::cout;
using std::endl;

Arbitrary_list::Arbitrary_list() { // constructs an arbitrary list for use
    front = nullptr;
    size = 0;
}

int Arbitrary_list::get_size() {return size;}

void Arbitrary_list::add(int new_value, int new_position) { //adds the new value to a given position on the list
    node *current = front;
    node *new_node = new node{new_value, nullptr};

    if(current != nullptr) {
        for (int current_position = 0; current_position < new_position && current->next != nullptr; ++current_position) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    } else {
        front = new_node;
    }
    
    if(new_position < 0) {
        new_node->next = front;
        front = new_node;
    }
    ++size;
}

int Arbitrary_list::get(int position) { // gets the value and cout's it to the user
    node *current = front;
    int result = -1;

    if(front == nullptr) { //when the stack is empty 
        cout << "list is empty, no values to show" << endl;
    }
    if(current != nullptr) {
        for (int current_position = 0; current_position < position && current->next != nullptr; ++current_position) {
            current = current->next;
            result = current->value;
        }
        cout << "the value at position " << position << " is equal to: " << result << endl;
    }
}

int Arbitrary_list::remove(int old_position) { // removes the node from a position on the list
    node *current = front;
    int result = -1;
    node *placeholder_node;

    if(front == nullptr) { //when the stack is empty 
        cout << "list is empty, no values to show" << endl;
    }
    if(current != nullptr) {
        for (int current_position = 0; current_position < old_position && current->next != nullptr; ++current_position) {
            current = current->next;
            result = current->value;
            
        }
        cout << "the value that will be deleted at position " << old_position << " is equal to: " << result << endl;
        placeholder_node = current->next;
        delete current;
        current = placeholder_node; //I was not quite able to get the remove to get rid of the node and set it's next as the new current.
        // But! it does delete the node and replaces it with a memory address, so I was getting close.
        
    }
}

string Arbitrary_list::to_string() { //to_string is also not working, but in class it was, so I am not sure what happened here either.
    string result = "";
    node *current = front;
    while(current != nullptr) {
        result += result + std::to_string(current->value) + ", ";

        current = current->next;
    }

    return result;
}

