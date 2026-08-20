#include<iostream>
using namespace std;
class ep{
    int id;
    static int  count;
    public:
    void setdata(void){
        cout<< "enter the id " <<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"this the ep id "<<id<<" this ep id number "<<count<<endl;
    }
    static void getcount(){
        cout<<" the vlaue of count is "<<count<<endl;
    }

};
int ep::count;
int main(){
    ep Ayush,raj,vivak;
    Ayush.setdata();
    Ayush.getdata();
    ep::getcount();

    raj.setdata();
    raj.getdata();
    ep::getcount();

    vivak.setdata();
    vivak.getdata();
    ep::getcount();

    return 0;
}