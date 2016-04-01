#ifndef GAME_OBJECT_H_INCLUDED
#define GAME_OBJECT_H_INCLUDED

class game_object{
    private:
        char* image_label;
        int x,y,collider;
    public:
    char* get_label();
    game_object(int x_position, int y_position, int collider_position, char* label);
    ~game_object();

};

#endif // GAME_OBJECT_H_INCLUDED
