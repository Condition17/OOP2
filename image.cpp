#include "image.h"
#include "resource.h"
image::image(char* file_path):resource(file_path){}
char* image::get_path(){
    return path;
}
