#ifndef RESOURCE_H_INCLUDED
#define RESOURCE_H_INCLUDED

class resource{
    protected:

        char* path;
    public:
        char* get_resource_path();
        resource(char* file_path);
        virtual ~resource();
};

#endif // RESOURCE_H_INCLUDED
