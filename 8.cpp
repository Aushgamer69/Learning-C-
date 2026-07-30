#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"tell me your age so what i can inviet you";
    cin>>age;
    
    if (age<18)
    {
       cout<<"you are not come to the party";
    }
    else if (age==18){
        cout<<"yes are eligileb to the party but you are cuting very cloery";
    }
    else{
    cout<<"you inveded to the party";
    }
    return 0;
}
