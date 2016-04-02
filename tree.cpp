#include "game_object.h"
#include "tree.h"
#include "resource_manager.h"
#include <iostream>
using namespace std;
int tree::nr_trees = 0;

tree::tree(char* leaf_collor, int leafs, int x, int y, int collider):
game_object(x,y,collider, "tree_image", "tree_sound"){
    collor = leaf_collor;
    nr_leafs = leafs;
    nr_trees++;
}

int tree::get_number(){
    return nr_trees;
}

tree::~tree(){
    nr_trees--;
    if ( nr_trees == 0 ) {
        Resource_manager::instance() -> initialize(get_image_label());
        Resource_manager::instance() -> initialize(get_sound_label());
        cout<<"Destroiyed";
        }

    delete collor;
}

