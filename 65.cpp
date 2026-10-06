#include <iostream>
using namespace std;
template <class T>
class ayush
{
public:
    T data;
    ayush(T a){
        data = a;
    }
    void display();
};

template<class T>
void ayush<T>:: display(){
    cout<<data;
}


void func(int a){
    cout<<"this is first func "<<a<<endl;

}

template <class T>
void func1(T a){
    cout<<"this tempatised func()"<<a<<endl;
}
int main()
{
//    ayush<float>a(5.8);
//    ayush<char>a('f');
//    ayush<int>a(5);
//    cout<<a.data<<endl;
//    a.display();

// func(4);
func1(4);
    return 0;
}