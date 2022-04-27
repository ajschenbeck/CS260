#include <iostream>
#include "arbitrary_list.cpp"
//#include "node.h"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
    Arbitrary_list my_list;

    if(my_list.get_size() == 0) {
        cout << "test passed, list is empty" << endl;
    } else {
        cout << "test failed, the list is not empty" << endl;
    }

    cout << "test that add function works" << endl;
    my_list.add(42, 0);
    string expected_to_string_result = "42, ";
    string to_string_result = my_list.to_string();
    if(to_string_result.compare(expected_to_string_result) == 0) {
        cout << "test passed - add test" << endl;
    } else {
        cout << "test failed - ecpected value: " << expected_to_string_result << ", but instead received: " << to_string_result << endl;
    }

    // cout << "test that remove of front node works" << endl;
    // int remove_result = my_list.remove(0);
    // int expected_remove_result = 42;
    // if(remove_result == expected_remove_result) {
    //     cout << "remove test passed" << endl;
    // } else {
    //     cout << "test failed - ecpected value: " << expected_remove_result << ", but instead received: " << remove_result << endl;
    // }

    my_list.add(43, 1);
    my_list.add(44, 2);
    my_list.add(45, 3);
    my_list.add(46, 4);

    my_list.get(2);
    my_list.get(3);

    my_list.remove(2);

    my_list.get(2);

    my_list.to_string();

    return 0;





}