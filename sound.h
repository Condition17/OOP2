#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED

class sound: public resource {
    public:
    sound(char* file_path);
    char* get_path();
};

#endif // SOUND_H_INCLUDED
