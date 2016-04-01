#ifndef RESOURCE_MANAGER_H_INCLUDED
#define RESOURCE_MANAGER_H_INCLUDED

class Resource_manager{
    private:
        int a;
        static Resource_manager* current_manager;
        Resource_manager();
        ~Resource_manager();
    public:
     static Resource_manager* instance(){
            return current_manager;
        }
    void write();
};



#endif // RESOURCE_MANAGER_H_INCLUDED
