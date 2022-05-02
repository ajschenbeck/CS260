#include <iostream>

#include "auto_sort_list.cpp"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
    //create list and then print to_string
    Auto_sort *my_auto_sort = new Auto_sort();
    cout << "list begins / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add one item to an empty list and then print to_string
    my_auto_sort->add(1);
    cout << "1st step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add one more to the end of the list and then print
    my_auto_sort->add(5);
    cout << "2nd step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add one more in the middle and then print
    my_auto_sort->add(3);
    cout << "3rd step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add one more before the front and then print
    my_auto_sort->add(0);
    cout << "4th step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add a duplicate item "before" the front and then print 
    my_auto_sort->add(0);
    cout << "5th step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //add a duplicate item in the middle of the list and then print
    my_auto_sort->add(3);
    cout << "6th step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove from middle of list
    my_auto_sort->remove(3);
    cout << "7th step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove from "end" of list
    my_auto_sort->remove(5);
    cout << "8th step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove from "front" of list
    my_auto_sort->remove(0);
    cout << "9th step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //!remove from "front" of list!
    my_auto_sort->remove(0);
    cout << "10th step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove all the things!
    my_auto_sort->remove(1);
    cout << "11th step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;
    my_auto_sort->remove(5);
    cout << "12th step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    //remove from an empty list
    my_auto_sort->remove(2);
    cout << "13th step / my_auto_sort.to_string(): " << my_auto_sort->to_string() << endl;

    return 0;
}