#include <iostream>
#include "resource_manager.h"
#include "tree.h"
#include "image.h"
#include "sound.h"
using namespace std;

int main()
{
    tree* t = new tree("green",2,1,2,22);

    tree* g = new tree("yellow",3,1,21,34);
    image im("image_path", "kk");
    cout<< im.get_path()<<"\n";
    sound s("sound_path");
        cout<< s.get_resource_path()<<"\n";

    Resource_manager::instance() -> write();
    Resource_manager::instance() -> Add(t -> get_image_label(),im);
    cout<<"\n";
    Resource_manager::instance() -> Add(t -> get_sound_label(),s);
    cout<<"\n";
    Resource_manager::instance() -> Add(t -> get_image_label(),im);
    cout<<"\n";
    Resource_manager::instance() -> show();

     cout<<t -> get_number()<<"\n";
     delete t;
    Resource_manager::instance() -> show();
     cout<<t -> get_number()<<"\n";
     delete g;
         Resource_manager::instance() -> show();

    return 0;
}
