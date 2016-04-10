#include <iostream>
#include <map>
#include "resource_manager.h"
#include "resource.h"
Resource_manager* Resource_manager::current_manager( new Resource_manager );

Resource_manager::Resource_manager(){
    }
void Resource_manager::Add(char* map_key, resource* res){
  if(manager.find(map_key) == manager.end()){
       manager[ map_key ] = res;
       std::cout<< "Added "<< manager[map_key] -> get_resource_path()<<"\n";
        }
}
/*
void Resource_manager::initialize(char* map_key){
        delete manager[ map_key ];
        manager.erase(map_key);
}*/
void Resource_manager::show(){
    std::map<char*,resource*>::iterator it;
    std::cout<<"\n------- Resource manager ---------\n";
    for ( it = manager.begin(); it != manager.end(); it++ )
    std::cout<< it->first << ':' << it -> second -> get_resource_path()<<"\n";
    std::cout<<"\n---------------------------------\n";

}

resource* Resource_manager::get_resource( char* map_key){
    if (manager.find(map_key) != manager.end())
        return manager[ map_key ];
    return NULL;
}

Resource_manager::~Resource_manager(){
     std::map<char*,resource*>::iterator it;
    for ( it = manager.begin(); it != manager.end(); it++ ){
     delete it -> second;
     manager.erase( it -> first );
     }
    delete current_manager;
}


