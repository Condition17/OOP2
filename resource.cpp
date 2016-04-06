#include "resource.h"
#include <iostream>
char* resource::get_resource_path(){
    return path;
}
resource::resource(char* file_path){
    std::cout<<"created new_resource \n";
    path = file_path;
}
resource::~resource(){
    std::cout<<"Destructed resource with path: \n"<<path<<"\n";
}
