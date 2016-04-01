#ifndef IMAGE_H_INCLUDED
#define IMAGE_H_INCLUDED
#include "resource.h"
class image: protected resource {

    public:

    image(char* file_path);
    char* get_path();
};

#endif // IMAGE_H_INCLUDED
