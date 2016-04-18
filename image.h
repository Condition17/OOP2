#ifndef IMAGE_H_INCLUDED
#define IMAGE_H_INCLUDED
#include "resource.h"
class image: public resource {
    public:
    image(char* file_path);
    char* get_speciffic();
};

#endif // IMAGE_H_INCLUDED
