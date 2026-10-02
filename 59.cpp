#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ofstream aout("59code");
    // cout<<" Enter your name ";
    // string name ;
    // cin>>name;

    // aout<<" my name is   "<<name;

    ifstream ain("59code");
    string cont ;
    ain>>cont;

    cout<<"the cont  of this file is "<<cont<<endl;
    return 0;
}