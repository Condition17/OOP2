#ifndef RESOURCE_MANAGER_H_INCLUDED
#define RESOURCE_MANAGER_H_INCLUDED
#include <map>
#include "resource.h"
class Resource_manager{
    private:
        int a;
        std::map<char*, resource*> manager;
        static Resource_manager* current_manager;
        Resource_manager();
        ~Resource_manager();
    public:

    static Resource_manager* instance(){
            return current_manager;
        }
    void Add(char* map_key, resource* res);
    void initialize( char* map_key );
    void show();
    resource* get_resource(char* map_key);
};



#endif // RESOURCE_MANAGER_H_INCLUDED
