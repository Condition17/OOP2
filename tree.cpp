#include "game_object.h"
#include "tree.h"
tree::tree(char* leaf_collor, int leafs, int x, int y, int collider):
game_object(x,y,collider, "tree_image"){
    collor = leaf_collor;
    nr_leafs = leafs;
}
tree::~tree(){
    delete collor;
}
