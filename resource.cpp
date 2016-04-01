#include "resource.h"

char* resource::get_resource_path(){
    return path;
}
resource::resource(char* file_path){
    path = file_path;
}
resource::~resource(){
    delete path;
}
