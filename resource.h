#ifndef RESOURCE_H_INCLUDED
#define RESOURCE_H_INCLUDED

class resource{
    protected:
        char* path;
    public:
        resource(char* file_path);
        ~resource();
};

#endif // RESOURCE_H_INCLUDED
