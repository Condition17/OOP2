#include "game_object.h"
#include "rock.h"
#include "resource_manager.h"
#include <iostream>
int rock::nr_rocks = 0;

rock::rock(int dmg, int x, int y, int collider):
game_object(x,y,collider, "rock_image" , NULL , NULL){
    damage = dmg;
    if (nr_rocks == 0) {
        if( sound_label ) set_sound_mapping("rock_sound_source_path");
        if( image_label ) set_image_mapping("rock_image_source_path");
        if ( video_label )set_video_mapping("rock_video_source_path");

    }
    nr_rocks++;
}


rock::~rock(){
    nr_rocks--;
   /* if ( nr_rocks == 0 ) {
        if ( sound_label )Resource_manager::instance() -> initialize( sound_label );
        if ( image_label ) Resource_manager::instance() -> initialize( image_label );
        if ( video_label )Resource_manager::instance() -> initialize( video_label );

        std::cout<<"Destroyed rock from resources\n";
    }*/
}
