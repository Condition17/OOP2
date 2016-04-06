#include <iostream>
#include "resource_manager.h"
#include "tree.h"
#include "rock.h"
using namespace std;

int main()
{
    tree* t = new tree("green",2,1,2,22);
    tree* g = new tree("yellow",3,1,21,34);
    tree* h = new tree("black",3,15,21,34);
    rock* r1 = new rock(200,3,15,21);
   // Resource_manager::instance() -> write();
    // cout<<t -> get_number()<<"\n";\
   // Resource_manager::instance() -> show();

    Resource_manager::instance() -> show();

    delete t;
    cout<<"\n---\n";
//    cout<<t -> get_number()<<"\n";
Resource_manager::instance() -> show();
    delete g;
 //   Resource_manager::instance() -> show();
 Resource_manager::instance() -> show();

    delete r1;

Resource_manager::instance() -> show();
delete h;
    cout<<"final:\n";
Resource_manager::instance() -> show();
    return 0;
}
