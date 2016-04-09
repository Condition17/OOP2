#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED
#include "resource.h"
class video: public resource {
    public:
    video(char* file_path);
    char* get_speciffic();
};

#endif // VIDEO_H_INCLUDED
