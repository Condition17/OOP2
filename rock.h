#ifndef ROCK_H_INCLUDED
#define ROCK_H_INCLUDED
#include "game_object.h"
class rock: public game_object{
    private:
        int damage;
    public:
    rock(int damage = 0, int x = 0, int y = 0, int collider = 20, char* image_label = "rock_image", char* sound_label = "rock_sound", char* video_label = "rock_video");
    ~rock();
};
#endif // ROCK_H_INCLUDED
