#ifndef GAME_OBJECT_H_INCLUDED
#define GAME_OBJECT_H_INCLUDED

class game_object{



     private: int x,y,collider;
     protected:
        char* image_label;
        char* sound_label;
        char* video_label;

    public:
    void set_image_mapping(char* source_path);
    void set_sound_mapping(char* source_path);
    void set_video_mapping(char* source_path);
    game_object(int x_position, int y_position, int collider_position, char* i_label, char* s_label, char* v_label);
    ~game_object();

};

#endif // GAME_OBJECT_H_INCLUDED
