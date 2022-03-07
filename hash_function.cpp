#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int key_list[25];

/*Function finds the value in terms of ascii and adds them up for a hash function then
inserts the value into the table at a position related to the length of the the original word.
*/
int hash_insert(string key) {
    int hash = 0;
    int index;
    index = key.length();
    for(int i = 0; i < index; i++) {
        hash = hash + (int) key[i];
        //cout << "hash = " << hash << endl;

    }
    
    //cout << "index is: " << index << endl;
    key_list[index] = hash;
    return 0;
}

//finds the value of a specific index or bucket in the array.
int hash_contains(int index) {
    cout << "index position " << index << " contains: " << key_list[index] << endl;
    return 0;
}

//Allows us to easily print the array, probably more costly in terms of run-time, oh well.
int print_array(int n) { 
    for (int i = 0; i <= n; i++) {
        cout << key_list[i] << ", ";
    }
    return 0;
}

/* This function will have the add, contains, and array print functions, The program takes the phrase,
converts it to ascii letters and adds them together for the hash function, then it uses the length of the word
as a position for storage and stores the ascii addition value in that posiition. In order to deal with collisions
I would have liked to create a linked list for each bucket of the hash map (i.e. the array positions), as well as making the hash function more complex to decrease the amount
of overall collisions in the first place. 
*/
int main(int argc, char **argv) {
    
    hash_insert("banana");
    hash_insert("birds");
    print_array(25);
    cout << " " << endl;

    hash_insert("bacon");
    print_array(25);
    cout << " " << endl;

    hash_contains(6);

}