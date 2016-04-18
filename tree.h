#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include "game_object.h"
class tree: public game_object{
    private:
        char* collor;
        int nr_leafs;
    public:
    tree(char* collor, int nr_leafs, int x, int y, int collider, char* image_label = "tree_image", char* sound_label = "tree_sound", char* video_label = "tree_video");
    ~tree();
};
#endif // TREE_H_INCLUDED
