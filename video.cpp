#include "resource.h"
#include "video.h"
video::video(char* file_path):resource(file_path){}

char* video::get_speciffic(){
    return "This is a video";
}
