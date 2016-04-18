#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED
#include "resource.h"
class sound: public resource {
    public:
    sound(char* file_path);
    char* get_speciffic();
};

#endif // SOUND_H_INCLUDED
