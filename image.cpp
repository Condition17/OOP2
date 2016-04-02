#include "image.h"
#include "resource.h"
#include <iostream>
using namespace std;
image::image(char* file_path, char* image_speciffic):resource(file_path){
    speciffic = image_speciffic;
}
char* image::get_path(){
    return path;
}

void image::print_speciffic(){
    cout<<speciffic;
}
