#include "game_object.h"
#include "tree.h"
#include "resource_manager.h"
#include <iostream>
#include "image.h"
#include "sound.h"
using namespace std;
int tree::nr_trees = 0;

tree::tree(char* leaf_collor, int leafs, int x, int y, int collider):
game_object(x,y,collider, "tree_image", "tree_sound"){
    collor = leaf_collor;
    nr_leafs = leafs;
    if (nr_trees == 0) {
        sound s("sound_path");
        image im("image_path", "kk");
        Resource_manager::instance() -> Add(get_image_label(),im);
        Resource_manager::instance() -> Add(get_sound_label(),s);
    }
       nr_trees++;
}

int tree::get_number(){
    return nr_trees;
}

tree::~tree(){
    nr_trees--;
    if ( nr_trees == 0 ) {
        Resource_manager::instance() -> initialize(get_sound_label());
        Resource_manager::instance() -> initialize(get_image_label());
        cout<<"Destroiyed\n";
        }

    delete collor;
}

