#include "game_object.h"

game_object::game_object(int x_position, int y_position, int collider_position, char* label){
    x = x_position;
    y = y_position;
    collider = collider_position;
    image_label = label;
}
game_object::~game_object(){
    delete image_label;
}