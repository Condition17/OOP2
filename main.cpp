#include <iostream>
#include "resource_manager.h"
#include "tree.h"
#include "image.h"
using namespace std;
int main()
{
    tree t("green",2,1,2,22);
    image im("test_path");
    cout<< im.get_path();
    Resource_manager::instance() -> write();
    Resource_manager::instance() -> Add(t.get_label(),im);
    return 0;
}
