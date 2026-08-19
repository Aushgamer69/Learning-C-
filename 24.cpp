#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void intcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void){
    cout<<"enter the item id no "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter the item price "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop ::displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item with id"<<itemid[i]<<"is"<<itemprice[i]<<endl;
    }
    
}

int main(){
    shop cityhoues;
    cityhoues.intcounter();
    cityhoues.setprice();
    cityhoues.setprice();
    cityhoues.setprice();
    cityhoues.displayprice();
    return 0;
}