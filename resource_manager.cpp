#include <iostream>
#include "resource_manager.h"
using namespace std;
Resource_manager* Resource_manager::current_manager( new Resource_manager );

Resource_manager::Resource_manager(){
        a = 2;
    }

void Resource_manager::write(){
    cout<< a;
}
Resource_manager::~Resource_manager(){
    delete current_manager;

}
