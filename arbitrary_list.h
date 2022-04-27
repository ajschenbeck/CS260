#pragma once
#include <string>
#include "node.h"

using std::string;

//did not template this stack because the CLASS itself is already "templated"
class Arbitrary_list {
    private:
        node *front = nullptr;
        int size = 0;

    public:
        Arbitrary_list();
        int get_size();
        void add(int new_value, int new_position);
        int remove(int old_position);
        int get(int position);
        string to_string();

};