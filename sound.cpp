#include "resource.h"
#include "sound.h"
sound::sound(char* file_path):resource(file_path){}
char* sound::get_speciffic(){
    return "This is a sound";
}
