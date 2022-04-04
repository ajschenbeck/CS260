#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

struct Marble {
    int number;
    const char* color;
};

vector<Marble*> bag;

void add_marble(int number, const char* color) {
    Marble* current_marble = new Marble{number, color};
    bag.push_back(current_marble);
}

void remove_marble() {
    if (bag.empty() == true) {
        cout << "the bag is empty nothing to remove" << endl;
    } else {
        bag.erase(bag.begin());
    }
}

void print_bag() {
    for (auto i : bag) {
        cout << "(" << i->number << ' ' << i->color << "), ";
    }
}

int main(int argc, char **argv) {
    add_marble(1, "Green");
    add_marble(2, "blue");
    add_marble(3, "red");
    add_marble(4, "orange");
    add_marble(5, "yellow");

    print_bag();

    remove_marble();
    remove_marble();

    print_bag();
}