//
// Created by Admin on 13/05/2019.
//
#include <vector>


int getIndex(std::vector<int> list, int x)
{
    for (int i = 0; i < list.size(); ++i) {
        if (list[i] == x) {
            return i;
        }
    }
    return  -1;
}