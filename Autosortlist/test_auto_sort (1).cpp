#include <iostream>

#include "auto_sort.cpp"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
    //create list and then print to_string
    Auto_sort *my_auto_sort = new Auto_sort();
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add one item to an empty list and then print to_string
    my_auto_sort->add(1);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add one more to the end of the list and then print
    my_auto_sort->add(5);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add one more in the middle and then print
    my_auto_sort->add(3);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add one more before the front and then print
    my_auto_sort->add(0);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add a duplicate item "before" the front and then print (need to check address or add a new field to the node to know this for sure!)
    my_auto_sort->add(0);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add a duplicate item in the middle of the list and then print
    my_auto_sort->add(3);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove from middle of list
    my_auto_sort->remove(3);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove from "end" of list
    my_auto_sort->remove(5);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove from "front" of list
    my_auto_sort->remove(0);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //!remove from "front" of list!
    my_auto_sort->remove(0);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove all the things!
    my_auto_sort->remove(1);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;
    my_auto_sort->remove(3);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove from an empty list...?  I do not believe that we can do anything useful with this test case in our implementation of the code 
    //at least test that we do not crash...
    my_auto_sort->remove(1);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    return 0;
}