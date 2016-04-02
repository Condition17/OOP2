#ifndef IMAGE_H_INCLUDED
#define IMAGE_H_INCLUDED
#include "resource.h"
class image: public resource {
    char* speciffic;
    public:
    void print_speciffic();
    image(char* file_path, char* image_speciffic);
    char* get_path();
};

#endif // IMAGE_H_INCLUDED
