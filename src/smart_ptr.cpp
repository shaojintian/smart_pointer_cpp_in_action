#include <stdio.h>

class shape{

};

template <typename T>
class smart_ptr{
public:
    smart_ptr(smart_ptr& other){
        ptr_ = other.release();
    }

    ~smart_ptr(){
        delete ptr_;
    }

    T* release(){
        T* ptr = ptr_;
        ptr_ = nullptr;
        return ptr;
    }
private:
    T* ptr_;
};

