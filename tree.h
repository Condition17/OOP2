#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include "game_object.h"
#include "tree.h"
class tree: public game_object{
    private:
        static int nr_trees;
        char* collor;
        int nr_leafs;
    public:
    int get_number();
    tree(char* collor, int nr_leafs, int x, int y, int collider);
    ~tree();
};

#endif // TREE_H_INCLUDED
