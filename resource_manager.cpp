#include <iostream>
#include <map>
#include "resource_manager.h"
#include "resource.h"
#include "image.h"

Resource_manager* Resource_manager::current_manager( new Resource_manager );

Resource_manager::Resource_manager(){
        a = 2;
    }
void Resource_manager::Add(char* map_key, resource& res){
    manager[ map_key ] = &res;
    std::cout<< "Added"<< manager[map_key] -> get_resource_path()<<"\n";
    std::cout<< manager[ map_key ]<<"\n";
}

void Resource_manager::initialize(char* map_key){
        std::cout<<"--"<<map_key<<"\n";
        manager[ map_key ] = NULL;
        manager.erase(map_key);

    }

Resource_manager::~Resource_manager(){
    delete current_manager;

}

void Resource_manager::write(){
    std::cout<< a;
}

void Resource_manager::show(){
    std::map<char*,resource*>::iterator it;

    for ( it = manager.begin(); it != manager.end(); it++ ){
    std::cout << it->first  // string (key)
              << ':'
              << it->second<<"\n";   // string's value
}
}

