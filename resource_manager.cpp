#include <iostream>
#include <map>
#include "resource_manager.h"
#include "resource.h"

using namespace std;
Resource_manager* Resource_manager::current_manager( new Resource_manager );

Resource_manager::Resource_manager(){
        a = 2;
    }

void Resource_manager::write(){
    cout<< a;
}
void Resource_manager::Add(char* map_key, resource& res){
    manager[ map_key ] = &res;
    cout<<"Added"<< manager[map_key] -> get_resource_path();
}
Resource_manager::~Resource_manager(){
    delete current_manager;

}

