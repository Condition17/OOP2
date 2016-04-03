#ifndef ROCK_H_INCLUDED
#define ROCK_H_INCLUDED

#include "game_object.h"

class rock: private game_object{
    private:
        static int nr_rocks;
        int damage;
    public:
    rock(int dmg, int x, int y, int collider);
    ~rock();
};

#endif // ROCK_H_INCLUDED
