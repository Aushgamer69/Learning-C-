#include<iostream>
using namespace std;
// inline int coin(int a ,int b){


inline int coin(int a ,int b){
    // static int c = 0;
    // c = c +1;
    // return a*b+c;
    return a*b;
}
float moneybank(int currentMoney, float factor = 1.05){
    return currentMoney * factor;
}

int main(){
    int a , b;

    cout<<"the enter the value of a and b "<<endl;

    cin>>a>>b;
    
    // cout<<"the enter the value of a and b "<<coin(a,b)<<endl;
    // cout<<"the enter the value of a and b "<<coin(a,b)<<endl;
    // cout<<"the enter the value of a and b "<<coin(a,b)<<endl;
    // cout<<"the enter the value of a and b "<<coin(a,b)<<endl;
    int money = 100000;
    cout<<"if you have "<<money<<"rs in bank account you will recive "<<moneybank(money)<<"in 1 year"<<endl;
 

  
    return 0;
}