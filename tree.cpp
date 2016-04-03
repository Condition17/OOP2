#include "game_object.h"
#include "tree.h"
#include "resource_manager.h"
#include <iostream>


using namespace std;
int tree::nr_trees = 0;

tree::tree(char* leaf_collor, int leafs, int x, int y, int collider):
game_object(x,y,collider, "tree_image" , "tree_sound" , "tree_video"){
    collor = leaf_collor;
    nr_leafs = leafs;

    if (nr_trees == 0) {
        if( sound_label ) set_sound_mapping("sound_source_path");
        if( get_image_label()) set_image_mapping("image_source_path");
        if ( get_video_label())set_video_mapping("video_source_path");

    }
    nr_trees++;
}


tree::~tree(){
    nr_trees--;
    if ( nr_trees == 0 ) {
        if (get_sound_label())Resource_manager::instance() -> initialize(get_sound_label());
        if (get_image_label()) Resource_manager::instance() -> initialize(get_image_label());
        if (get_video_label())Resource_manager::instance() -> initialize(get_video_label());
        cout<<"Destroiyed\n";
    }
    delete collor;
}

