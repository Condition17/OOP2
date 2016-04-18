#include <iostream>
#include "resource_manager.h"
#include "tree.h"
#include "image.h"
#include "sound.h"
#include "video.h"
#include "rock.h"
using namespace std;
int main()
{
    tree g("yellow",3,1,21,34,"blabla_image");
    tree h("yellow",3,1,21,34,"special_image_label");
    image* im = new image("image_path");
    image* s = new image("special_image_path");
    sound* beat = new sound("tree_sound_path");
    video* vid = new video("tree_video_path");
    Resource_manager::instance() -> Add(g.get_image_label(), im);
    Resource_manager::instance() -> Add(g.get_image_label(), s);
   // Resource_manager::instance() -> show();
    Resource_manager::instance() -> Add(h.get_image_label(), s);
   // Resource_manager::instance() -> show();
    Resource_manager::instance() -> Add(h.get_sound_label(), beat);
    Resource_manager::instance() -> Add(g.get_sound_label(), beat);
  //  Resource_manager::instance() -> show();
    Resource_manager::instance() -> Add(g.get_video_label(), vid);
    Resource_manager::instance() -> Add(h.get_video_label(), vid);
   // Resource_manager::instance() -> show();
    rock r1(200,32,1,21,"custom_image_name", "custom_sound_name","custom_video_name");
    rock r2(200,22,11,21);
    image rock_image("rock_image_path");
    sound rock_sound("rock_sound_path");
    video rock_video("rock_video_path");
    image rock_image2("rock_special_image_path");
    Resource_manager::instance() -> Add(r1.get_image_label(), &rock_image);
    Resource_manager::instance() -> Add(r2.get_image_label(), &rock_image2);
    Resource_manager::instance() -> Add(r1.get_sound_label(), &rock_sound);
    Resource_manager::instance() -> Add(r2.get_sound_label(), &rock_sound);
    Resource_manager::instance() -> Add(r1.get_video_label(), &rock_video);
    Resource_manager::instance() -> Add(r2.get_video_label(), &rock_video);
  //  Resource_manager::instance() -> show();
    cout<<dynamic_cast<image*>( Resource_manager::instance()->get_resource(h.get_image_label()))-> get_speciffic()<<endl;
    cout<<dynamic_cast<sound*>( Resource_manager::instance()->get_resource(g.get_sound_label()))-> get_speciffic()<<endl;
    cout<<dynamic_cast<video*>( Resource_manager::instance()->get_resource(r1.get_video_label()))-> get_speciffic()<<endl;
    return 0;
}
