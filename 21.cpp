//vending machine
 
#include<iostream>
#include<string>
#include<vector>
using namespace std;



class item
{
private:
    string name ;
    double price ;
    int stock ;
public:
    item(string name , double price, int  stock);
    ~item();
void displayitem();
void reduceStock();
double getinprice();
int getStock() { return stock; }
};


item::item(string itemname , double itemprice, int  itemstock)
{
    name = itemname;
    price = itemprice;
    stock = itemstock;
}

item::~item()
{
}

double item::getinprice(){
    return price;

}

void item::reduceStock(){
    if (stock >0) 
    {
        stock--;
        cout<<" Available STOCK for this item";
        
    }else{
        cout<<"no stock for this item";
    }
    
}

void item::displayitem(){
   cout<<name<<"."<<price<<"."<<stock<<endl;

//     cout << "Coca Cola " << 45 << " " << 2 << endl;
//     cout << "Pepsi " << 40 << " " << 5 << endl;
//     cout << "Indian Masala Lays " << 20 << " " << 10 << endl;
//     cout << "Tomato Lays " << 10 << " " << 4 << endl;
//     cout << "Dairy Milk " << 25 << " " << 1 << endl;
//     cout << "KitKat " << 30 << " " << 6 << endl;
// 
}

int main(){
// char = 'a';
int uesr_input;

double money;
vector<item> stocks;
stocks.push_back( item("Coca Cola", 45, 2) );
stocks.push_back( item ("Pepsi", 40, 5));
stocks.push_back( item ("Indian Masala Lays", 20, 10));
stocks.push_back( item ("Tomato Lays", 10, 4));
stocks.push_back( item ("Dairy Milk", 25, 1));
stocks.push_back( item ("KitKat", 30, 6));

for (int i = 0; i < stocks.size(); i++)
{
    cout << i + 1 << ". "; stocks[i].displayitem();
}
cout<<"select item ";
cin>>uesr_input;
int index = uesr_input - 1;
if (index >= 0 &&index <stocks.size()&&stocks[index].getStock()>0)
{
    cout<<"put money ";
    cin>>money;
    if (money >= stocks[index].getinprice())
    {
        stocks[index].reduceStock();
        cout<<"\n change returend: "<<money - stocks[index].getinprice()<<endl; 
    }
    else{
        cout<<"insufficient money"<<endl;
    }
}else{
    cout<<"invalid item selection or out of stock"<<endl;
}

    do
    {
        cout<<"Do you want to buy something else? (y/n): ";
    } while (uesr_input == 'y' || uesr_input == 'Y');
    cin>>uesr_input;
    return 0;
}