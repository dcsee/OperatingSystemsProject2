#include "Singleton.h"
#include <cstddef>

CSingleton *CSingleton::DUniqueInstance = nullptr;

CSingleton::CSingleton(){
    // Constructor
}

CSingleton *CSingleton::Instance(){
    if(nullptr == DUniqueInstance){
        DUniqueInstance = new CSingleton();
    }
    return DUniqueInstance;
}

void CSingleton::Operation(){
    // Do operation
}