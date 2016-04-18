#include "game_object.h"
#include "rock.h"
rock::rock(int dmg, int x, int y, int collider,char* image_label, char* sound_label, char* video_label):
game_object(x,y,collider,  image_label, sound_label, video_label){
    damage = dmg;
}
rock::~rock(){
 }

