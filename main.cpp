#include <iostream>
#include "resource_manager.h"
int main()
{
    Resource_manager::instance() -> write();
    Resource_manager::instance() -> write();
    return 0;
}
