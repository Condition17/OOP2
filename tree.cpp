#include "game_object.h"
#include "tree.h"
using namespace std;
tree::tree(char* leaf_collor, int leafs, int x, int y, int collider, char* image_label, char* sound_label, char* video_label):
game_object(x,y,collider, image_label, sound_label, video_label){
    collor = leaf_collor;
    nr_leafs = leafs;
}
tree::~tree(){
 }


