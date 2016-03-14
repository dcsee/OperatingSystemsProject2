#ifndef SINGLETON_H
#define SINGLETON_H

class CSingleton{
    protected:
        CSingleton();
        static CSingleton *DUniqueInstance;
        
    public:
        static CSingleton *Instance();
        void Operation();
};

#endif