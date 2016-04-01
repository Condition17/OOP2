#include "resource.h"

resource::resource(char* file_path){
    path = file_path;
}
resource::~resource(){
    delete path;
}
