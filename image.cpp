#include "image.h"
#include "resource.h"
#include <iostream>
using namespace std;
image::image(char* file_path):resource(file_path){
speciffic = "jpg";
}
void show_speciffic(){
    cout<<"jpg";
}
