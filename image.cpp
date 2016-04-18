#include "image.h"
#include "resource.h"
using namespace std;
image::image(char* file_path):resource(file_path){}
char* image::get_speciffic(){
    return "This is an image";
}

