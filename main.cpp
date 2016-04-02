#include <iostream>
#include "resource_manager.h"
#include "tree.h"
using namespace std;

int main()
{
    tree* t = new tree("green",2,1,2,22);
    tree* g = new tree("yellow",3,1,21,34);

    Resource_manager::instance() -> write();
    Resource_manager::instance() -> show();

    cout<<t -> get_number()<<"\n";
    delete t;
    Resource_manager::instance() -> show();
    cout<<t -> get_number()<<"\n";
    delete g;
    Resource_manager::instance() -> show();

    return 0;
}
