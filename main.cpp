#include <iostream>
#include "resource_manager.h"
#include "tree.h"
#include "image.h"
using namespace std;

int main()
{
    tree* t = new tree("green",2,1,2,22);

    tree* g = new tree("yellow",3,1,21,34);
    image im("test_path", "kk");
    cout<< im.get_path();
    Resource_manager::instance() -> write();
    Resource_manager::instance() -> Add(t -> get_label(),im);
    cout<<"\n";
    Resource_manager::instance() -> Add(t -> get_label(),im);
    cout<<"\n";
    Resource_manager::instance() -> show();
     cout<<t -> get_number();
     delete t;
    Resource_manager::instance() -> show();
     cout<<t -> get_number();
     delete g;
         Resource_manager::instance() -> show();

    return 0;
}
