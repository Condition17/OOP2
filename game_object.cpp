#include "game_object.h"
#include "tree.h"
char* game_object::get_image_label(){
    return image_label;
}
char* game_object::get_sound_label(){
    return sound_label;
}

game_object::game_object(int x_position, int y_position, int collider_position, char* i_label, char* s_label){
    x = x_position;
    y = y_position;
    collider = collider_position;
    image_label = i_label;
    sound_label = s_label;
}
game_object::~game_object(){
    delete image_label;
}
