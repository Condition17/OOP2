#include "resource.h"
#include <iostream>
char* resource::get_resource_path(){
    return path;
}
resource::resource(char* file_path){
    path = file_path;
}
resource::~resource(){
}
