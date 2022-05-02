#include "auto_sort_list.cpp"
#include <iostream>

using std::cout;
using std::endl;


int main(int argc, char **argv) {
    //create list and print to_string()
    Auto_sort *my_auto_sort = new Auto_sort();
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add one item
    my_auto_sort->add(1);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add one more then print
    my_auto_sort->add(5);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;
    
    //add some node to the middle
    my_auto_sort->add(3);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add something to the beginning
    my_auto_sort->add(0);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add duplicate item before the front then print
    my_auto_sort->add(0);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add secondary duplicate
    my_auto_sort->add(1);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;


    my_auto_sort->add(3);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;
    
    //remove from the middle
    my_auto_sort->remove(3);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove from the "front"
    my_auto_sort->remove(5);
    cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    // //remove from the front of the list
    // my_auto_sort->remove(0);
    // cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    // //remove from the front of the list
    // my_auto_sort->remove(0);
    // cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    // //remove all the things
    // my_auto_sort->remove(1);
    // cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;
    // my_auto_sort->remove(3);
    // cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;
    
    // // remove from empty list
    // my_auto_sort->remove(1);
    // cout << "my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    cout << "my_auto_sort->at(3): " << my_auto_sort->at(5) << endl;
    cout << "my_auto_sort.to_string().attest: " << my_auto_sort->to_string() << endl;



    return 0;
}
