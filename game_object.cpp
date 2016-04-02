#include "resource_manager.h"
#include "game_object.h"
#include "image.h"
#include "sound.h"
#include "video.h"


char* game_object::get_image_label(){
    return image_label;
}
char* game_object::get_sound_label(){
    return sound_label;
}

char* game_object::get_video_label(){
    return video_label;
}
void game_object::set_image_mapping(char* source_path){
      image* img = new image(source_path);
     Resource_manager::instance() -> Add(image_label,*img);
}

void game_object::set_sound_mapping(char* source_path){
      sound* s = new sound(source_path);
     Resource_manager::instance() -> Add(sound_label,*s);
}

void game_object::set_video_mapping(char* source_path){
      video* v = new video(source_path);
     Resource_manager::instance() -> Add(video_label,*v);
}



game_object::game_object(int x_position, int y_position, int collider_position, char* i_label, char* s_label, char* v_label){
    x = x_position;
    y = y_position;
    collider = collider_position;
    image_label = i_label;
    sound_label = s_label;
    video_label = v_label;
}
game_object::~game_object(){
    delete image_label;
}
