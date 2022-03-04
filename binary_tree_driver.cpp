#include <iostream>

#include "binary_node.h"

using std::cout;
using std::endl;


void in_order_traversal(Binary_node *root) { //prints out the binary tree in specific orders.
    if (root == nullptr || root->value == -1) { 
        return;
    }

    //these operations can be switched around for pre-order(line:16->15->17), in-order(15->16->17), and post order(15->17->16) traversal.
    in_order_traversal(root->left); 
    cout << root->value << ", ";
    in_order_traversal(root->right);
}

void add_node(Binary_node *root, int value) { //adds node into the tree following tree rules
    if(root == nullptr) {
        root = new Binary_node{value, nullptr, nullptr};
    }
    else if(value < root->value) {
        if(root->left != nullptr) {
            add_node(root->left, value);
        }
        else {
            root->left = new Binary_node{value, nullptr, nullptr};
        }
    }
    else if(value > root->value) {
        if(root->right != nullptr) {
            add_node(root->right, value);
        }
        else {
            root->right = new Binary_node{value, nullptr, nullptr};
        }
    }
    else {
        cout << "the value " << value << " has already been added to the tree" << endl;
    }
}

void remove_node(Binary_node *root, int value) { //removes node from tree, removing branches will kill their leaves.
    if (root == nullptr) {
        return;
    }
    remove_node(root->left, value); 
    if(root->value == value){
        delete root;
        root->value = -1; //wierd forcing value to make traversal stop printing strange mem address when root was deleted.
        return;
    }
    remove_node(root->right, value);
    if(root->value == value){
        delete root;
        root->value = -1;
        return;
    }
}

int main(int argc, char **argv) {
    //declare a bunch of binary node values
    Binary_node *root = new Binary_node{3, nullptr, nullptr};
    
    Binary_node *node_l = new Binary_node{1, nullptr, nullptr};
    Binary_node *node_r = new Binary_node{5, nullptr, nullptr};

    Binary_node *node_ll = new Binary_node{0, nullptr, nullptr};
    Binary_node *node_lr = new Binary_node{2, nullptr, nullptr};
    Binary_node *node_rl = new Binary_node{4, nullptr, nullptr};
    Binary_node *node_rr = new Binary_node{6, nullptr, nullptr};

    //hook up binary tree nodes
    root->left = node_l;
    root->right = node_r;

    node_l->left = node_ll;
    node_l->right = node_lr;
    node_r->left = node_rl;
    node_r->right = node_rr;
    
    //operations done
    in_order_traversal(root);
    cout << "...now add 7" << endl;
    add_node(root, 7); 
    cout << endl;
    in_order_traversal(root);
    cout << "...now delete 5" << endl;
    remove_node(root, 5);
    cout << endl;
    in_order_traversal(root); //notice the deletion of node five killed connection to its leaves.

    return 0;
}

